#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void sendSignal(string signal) {
    ofstream serial("COM3");
    if (serial.is_open()) {
        serial << signal << endl;
        serial.close();
    }
}

class Player {
private:
    string playerName;
    int energy;
    int skill;
    int credits;
    int reputation;
    int toolLevel;
    string currentTool;
    int missionsCompleted;
    int daysUsed;

public:
    Player() {}

    void setPlayerName(string pN) { playerName = pN; }
    string getPlayerName() { return playerName; }

    void setEnergy(int e) { energy = e; }
    int getEnergy() { return energy; }

    void setSkill(int s) { skill = s; }
    int getSkill() { return skill; }

    void setCredits(int c) { credits = c; }
    int getCredits() { return credits; }

    void setPlayerReputation(int r) { reputation = r; }
    int getPlayerReputation() { return reputation; }

    void setToolLevel(int t) { toolLevel = t; }
    int getToolLevel() { return toolLevel; }

    void setCurrentTool(string t) { currentTool = t; }
    string getCurrentTool() { return currentTool; }

    void setMissionsCompleted(int m) { missionsCompleted = m; }
    int getMissionsCompleted() { return missionsCompleted; }

    void setDaysUsed(int d) { daysUsed = d; }
    int getDaysUsed() { return daysUsed; }

    void playerStatus() {
        cout << "----- Player Status -----" << endl;
        cout << "Name: " << playerName << endl;
        cout << "Energy: " << energy << endl;
        cout << "Skill: " << skill << endl;
        cout << "Credits: " << credits << endl;
        cout << "Reputation: " << reputation << endl;
        cout << "Current Tool: " << currentTool << endl;
        cout << "Missions Completed: " << missionsCompleted << endl;
        cout << "Days Used: " << daysUsed << endl;
    }
};

class Mission {
private:
    string name;
    int difficulty;
    int rewardCredits;
    int rewardReputation;
    int energyCost;

public:
    Mission(string n, int d, int rc, int rr, int ec) {
        name = n;
        difficulty = d;
        rewardCredits = rc;
        rewardReputation = rr;
        energyCost = ec;
    }

    string getName() { return name; }
    int getDifficulty() { return difficulty; }
    int getRewardCredits() { return rewardCredits; }
    int getRewardReputation() { return rewardReputation; }
    int getEnergyCost() { return energyCost; }
};

void train(Player &player) {
    cout << "You trained today." << endl;
    player.setSkill(player.getSkill() + 8);
    player.setEnergy(player.getEnergy() - 12);
}

void rest(Player &player) {
    cout << "You rested today." << endl;
    player.setEnergy(player.getEnergy() + 10);
}

void visitShop(Player &player, string toolNames[], int toolBonus[], int toolCost[], int size) {
    cout << "----- Tool Shop -----" << endl;
    for (int i = 0; i < size; i++) {
        cout << i << ". " << toolNames[i] << " (Cost " << toolCost[i] << ")" << endl;
    }

    int choice;
    cout << "Enter tool number: ";
    cin >> choice;

    if (choice >= 0 && choice < size) {
        if (player.getCredits() >= toolCost[choice]) {
            player.setCredits(player.getCredits() - toolCost[choice]);
            player.setToolLevel(toolBonus[choice]);
            player.setCurrentTool(toolNames[choice]);
            cout << "Purchase successful." << endl;
        } else {
            cout << "Not enough credits." << endl;
        }
    }
}

void attemptMission(Player &player, vector<Mission> &missions, vector<string> &history) {
    cout << "Available Missions:" << endl;
    for (int i = 0; i < missions.size(); i++) {
        cout << i + 1 << ". " << missions[i].getName() << endl;
    }

    int choice;
    cout << "Choose mission number: ";
    cin >> choice;

    if (choice < 1 || choice > missions.size()) return;

    Mission m = missions[choice - 1];

    if (player.getEnergy() < m.getEnergyCost()) {
        cout << "Not enough energy." << endl;
        sendSignal("RED");
        return;
    } else {
        sendSignal("GREEN");
    }

    int randomBoost = rand() % 21;
    int totalPower = player.getSkill() + player.getToolLevel() + randomBoost;

    cout << "Total Power: " << totalPower << endl;

    if (totalPower >= m.getDifficulty()) {
        cout << "Mission SUCCESS!" << endl;
        player.setCredits(player.getCredits() + m.getRewardCredits());
        player.setPlayerReputation(player.getPlayerReputation() + m.getRewardReputation());
        player.setMissionsCompleted(player.getMissionsCompleted() + 1);
        history.push_back(m.getName() + " SUCCESS");
    } else {
        cout << "Mission FAILED." << endl;
        history.push_back(m.getName() + " FAILED");
    }

    player.setEnergy(player.getEnergy() - m.getEnergyCost());
}

int finalScore(Player &player) {
    return player.getSkill()
        + player.getCredits()
        + player.getPlayerReputation() * 2
        + player.getMissionsCompleted() * 20
        + player.getEnergy();
}

string getRank(int score) {
    if (score >= 260) return "Elite Cyber Defender";
    else if (score >= 200) return "Advanced Analyst";
    else if (score >= 140) return "Junior Security Specialist";
    else return "Cybersecurity Intern";
}

int main() {
    srand(time(0));

    Player player;
    vector<Mission> missions;
    vector<string> missionHistory;

    missions.push_back(Mission("Password Audit", 40, 20, 10, 10));
    missions.push_back(Mission("Phishing Investigation", 50, 30, 15, 12));
    missions.push_back(Mission("Firewall Hardening", 60, 40, 20, 15));
    missions.push_back(Mission("Malware Containment", 70, 50, 25, 18));
    missions.push_back(Mission("Network Intrusion Response", 80, 60, 30, 20));

    string toolNames[] = {"Basic Laptop", "Packet Sniffer", "IDS Toolkit", "AI Defense Console"};
    int toolBonus[] = {0, 8, 15, 25};
    int toolCost[] = {0, 40, 70, 110};
    int toolSize = 4;

    cout << "==== Cyber Defense Simulator ====" << endl;
    cout << "Enter your name: ";
    string name;
    cin >> name;

    player.setPlayerName(name);
    player.setEnergy(100);
    player.setSkill(20);
    player.setCredits(50);
    player.setPlayerReputation(0);
    player.setToolLevel(0);
    player.setCurrentTool("Basic Laptop");
    player.setMissionsCompleted(0);
    player.setDaysUsed(0);

    int choice = 0;

    while (choice != 6 && player.getDaysUsed() < 12 && player.getEnergy() > 0) {
        cout << "\nDay " << player.getDaysUsed() + 1 << " of 12" << endl;
        cout << "1. View status" << endl;
        cout << "2. Train" << endl;
        cout << "3. Rest" << endl;
        cout << "4. Visit shop" << endl;
        cout << "5. Attempt mission" << endl;
        cout << "6. Quit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            player.playerStatus();
        } else if (choice == 2) {
            train(player);
            player.setDaysUsed(player.getDaysUsed() + 1);
        } else if (choice == 3) {
            rest(player);
            player.setDaysUsed(player.getDaysUsed() + 1);
        } else if (choice == 4) {
            visitShop(player, toolNames, toolBonus, toolCost, toolSize);
        } else if (choice == 5) {
            attemptMission(player, missions, missionHistory);
            player.setDaysUsed(player.getDaysUsed() + 1);
        }
    }

    cout << "\n========== FINAL REPORT ==========" << endl;
    player.playerStatus();

    cout << "Mission History:" << endl;
    for (int i = 0; i < missionHistory.size(); i++) {
        cout << missionHistory[i] << endl;
    }

    int score = finalScore(player);
    cout << "Final Score: " << score << endl;
    cout << "Rank: " << getRank(score) << endl;
    cout << "==================================" << endl;

    return 0;
}