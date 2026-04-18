#include <iostream>
#include<vector>
#include<string>
#include<stdio.h> 

using namespace std;

int finalScore();
void playerStatus();
void mainMenu();
void finalReport();
void getRank(); 
void viewStatus();
void train();
// string rest();
void availableMissions();
void visitShop();
void viewTools();

//add arduino to signal to user if they do not have enough points to complete mission
//a red LED will signal along with a noise from small speaker module, until they retry
//green light = mission can be completed 

// void setUp() {

// }

// void loop() {

// }


class Player {
    vector<Player> players;
    private:
        string playerName;
        int energy;
        int skill;
        int credits;
        int reputation;
        string currentTool;
        int missionsCompleted;
        int daysUsed;
        int daysPassed;

    public:

        Player() {

        }

        Player(string pN, int e, int s, int c, int r, string cT, int mC, int dU) {
            playerName = pN;
            energy = e;
            skill = s;
            credits = s;
            reputation = r;
            currentTool = cT;
            missionsCompleted = mC;
            daysUsed = dU;
        }

        string getPlayerName() {
            return playerName;
        }

        void setPlayerName(string pN) {
            playerName = pN;
        }

        int getEnergy() {
            return energy;
        }

        void setEnergy(int e) {
            energy = e;
        }

        int getSkill() {
            return skill;
        }

        void setSkill (int s) {
            skill = s;
        }

        int getCredits() {
            return credits;
        }

        void setCredits(int c) {
            credits = c;
        }

        int getPlayerReputation() {
            return reputation;
        }

        void setPlayerReputation(int r) {
            reputation = r;
        }

        //currentTools

        int getMissionsCompleted() {
            return missionsCompleted;
        }

        void setMissionsCompleted(int mC) {
            missionsCompleted = mC;
        }

        int getDaysUsed() {
            return daysUsed;
        }

        void setDaysUsed(int dU) {
            daysUsed = dU;
        }

        void playerStatus() {
            cout << "----- Player Status -----" << endl;
            cout << "Name: " <<  getPlayerName() << endl;
            cout << "Energy: " << getPlayerName() << endl;
            cout << "Skill: " << getPlayerName() << endl;
            cout << "Credits: " << getPlayerName() << endl;
            cout << "Reputation: " << getPlayerName() << endl;
            // cout << getPlayerName() << endl;
            // cout << getPlayerName() << endl;
            cout << endl;
      
        }

        void finalReport() {
            cout << "========== FINAL REPORT ==========" << endl;
            cout << "Player: " << getPlayerName() << endl;
            cout << endl;
            cout << "Energy: " << getEnergy() << endl;
            cout << "Skill: " << getSkill() << endl;
            cout << "Credits: " << getCredits() << endl;
            cout << "Reputation: " << getPlayerReputation() << endl;
            cout << "Missions Completed: " << getMissionsCompleted() << endl;
            cout << endl;
            cout << "Final Score: " << endl;
            cout << "Rank: " << endl;
            cout << "===================================" << endl;

        }

};

class Mission {
    vector<Mission> missions;
    vector<string> missionHistory;

    private:
        string missionName;
        string difficultyLevel;
        int rewardCredits;
        int reputationGain;
        int energyCost;

    public:
        string getMissionName() {
            return missionName;
        }

        void setMissionName(string mN) {
            missionName = mN;
        }

        string getDifficultyLevel() {
            return difficultyLevel;
        }

        void setDifficultyLevel(string dL) {
            difficultyLevel = dL;
        }

        string getRewardCredits() {
            int rewardCredits;
        }

        void setRewardCredits(int rC) {
            rewardCredits = rC;
        }
            

        int getReputationGain() {
            return reputationGain;
        }

        void setReputationGain(int rG) {
            reputationGain = rG;
        }
        

        int getEnergyCost() {
            return energyCost;
        }

        void setEnergyCost(int eC) {
            energyCost = eC;
        }

        void availableMission() {
            int pointsPerMission = 0 ;
            int choice;
        
            cout << endl;
            cout << "Available Missions: " << endl;
            cout << endl;
            cout << "1. Password Audit" << endl;
            cout << "2. Phishing Investigation" << endl;
            cout << "3. Firewall Hardening" << endl;
            cout << "4. Malware Containment" << endl;
            cout << "5. Network Intrusion Response" << endl;
            cout << endl;
            cout << "Choose mission number: ";
            cin >> choice;

            cout << endl;

            if (choice == 1) {
                pointsPerMission = 20;
            } else if (choice == 2) {
                pointsPerMission = 25;
            } else if (choice == 3) {
                pointsPerMission = 30;
            } else if (choice == 4) {
                pointsPerMission = 45;
            } else if (choice ==5 ) {
                pointsPerMission = 60;
            } 

            cout << "Display points earned: " << pointsPerMission << endl;
            cout << endl;
        }


};

class ToolShop {
    vector<string> toolName;
    vector<int> toolBonus;
    vector<int> toolCost;
    int choice;
    unsigned int i;
    // string name;

    public:
    void visitShop() {
        cout << "----- Tool Shop -----" << endl;
        cout << "0. Basic Laptop (Owned)" << endl;
        cout << "1. Packet Sniffer (Cost 40)" << endl;
        cout << "2. IDS Toolkit (Cost 70)" << endl;
        cout << "3. AI Defense Console (Cost 110)" << endl;

        cout << endl;
        cout << "Enter tool number: ";
        cin >> choice;
        cout << "Purchase successful" << endl;
        if (choice == 1 ) {
            cout << "You now own Packet Sniffer" << endl;
        } else if (choice == 2) {
            cout << "You now own IDS Toolkit" << endl;
        } else if (choice == 3) {
            cout << "You now own AI Defense Console" << endl;
        }
        cout << endl;
    }

    void viewTools() {

        for (i = 0; i < toolName.size(); i++) {
            cout << toolName.at(i) << endl;
        }
    }
};



int main() {
    Player player;
    Mission mission;
    ToolShop ts;
    vector<Player> players;
    vector<Mission> missions;

    mission.setMissionName("1. Password Audit");
    mission.setMissionName("2. Phishing Investigation");
    mission.setMissionName("3. Firewall Hardening");
    mission.setMissionName("4. Malware Containment");
    mission.setMissionName("5. Network Intrusion Response");

    // set players initial state
    player.setEnergy(100);
    player.setSkill(50);
    player.setCredits(100);
    player.setPlayerReputation(60);
    player.setMissionsCompleted(0);

    int numOfDays = 0;
    // player.getEnergy(200);
    // player.getSkill(20);
    // player.getCredits(50);

    // add a new player to game
    // for (int i = 0; i < players.size(); i++) {
    //     Player newPlayer;
    //     players.push_back(newPlayer.getPlayerName());
    // }

    cout << "==== Cyber Defense Simulator ====" << endl;
    cout << "Enter your name: ";
    string firstName;
    cin >> firstName;
    player.setPlayerName(firstName);
    int choice;

    cout << "List of tools: " << endl;
    // Main menu
    numOfDays = 0;
    while (choice != 6) {

        cout << "1. View status" << endl;
        cout << "2. Train" << endl;
        cout << "3. Rest" << endl;
        cout << "4. Visit Shop" << endl;
        cout << "5. Attempt Mission" << endl;
        cout << "6. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            player.playerStatus();
            numOfDays++;
        } else if (choice == 2) {

            numOfDays++;
        } else if (choice == 3) {
            cout << player.getPlayerName() << " is resting" << endl;
            numOfDays ++;
        } else if (choice == 4) {

            ts.visitShop();
            numOfDays++;
        } else if (choice == 5) {
            mission.availableMission();
        
            numOfDays++;
        } else if (choice == 6) {
            cout << "Ending game" << endl;

            player.finalReport();
            // player stats
            // missions completed
            // mission history
            // final score 
            // rank 
            break;
        } else {
            cout << "Invalid input, try again" << endl;
        }

        if (numOfDays == 12){
            cout << "Number of days: " << numOfDays << endl;
            player.finalReport();
            break;
        }

        cout << "Days passed: " << numOfDays << endl; 
        
    }

}


