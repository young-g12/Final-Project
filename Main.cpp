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
void rest();
void availableMissions();

//add arduino to signal to user if they do not have enough points to complete mission
//a red LED will signal along with a noise from small speaker module, until they retry
//green light = mission can be completed 

// void setUp() {

// }

// void loop() {

// }


class Player {
    private:
        string playerName;
        int energy;
        int skill;
        int credits;
        int reputation;
        string currentTool;
        int missionsCompleted;
        int daysUsed;

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
            cout << getPlayerName() << endl;
            cout << getPlayerName() << endl;
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
            cout << "Enter your choice: ";
            cin >> choice;
            cout << endl;
            cout << "Available Missions: " << endl;
            cout << endl;
            cout << "1. Password Audit" << endl;
            cout << "2. Phishing Investigation" << endl;
            cout << "3. Firewall Hardening" << endl;
            cout << "4. Malware Containment" << endl;
            cout << "5. Network Intrusion Response" << endl;
            cout << endl;
            cout << "Choose mission number: " << choice << endl;
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
        }

};

class ToolShop {
    vector<string> toolName;
    vector<int> toolBonus;
    vector<int> toolCost;



};



int main() {
    Player player;
    Mission mission;
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

    // players.push_back();
    
    // Main menu
    while (choice != 6) {
        numOfDays = 0;
        cout << "1. View status" << endl;
        cout << "2. Train" << endl;
        cout << "3. Rest" << endl;
        cout << "4. Visit Shop" << endl;
        cout << "5. Attempt Mission" << endl;
        cout << "6. Quit" << endl;

        cout << "Select option: " << endl;
        cin >> choice;

        if (choice == 1) {
            player.playerStatus();
            numOfDays++;
        } else if (choice == 2) {

            numOfDays++;
        } else if (choice == 3) {
            rest();
            numOfDays++;
        } else if (choice == 4) {
            // visit shop 
            string toolNames[8];
            int toolBonus[8];
            double toolCost[8];

            toolNames[0] = "Hammer";

            // for (int i = 0; i < toolNames(); i++) {
            //     cout << 
            // }

            cout << toolNames[0] << endl;
            numOfDays++;
        } else if (choice == 5) {
            cout << "Available Missions: " << endl;
            cout << endl;
            mission.availableMission();
        
            numOfDays++;
        } else if (choice == 6) {
            cout << "Ending game" << endl;

            cout << "========== FINAL REPORT ==========" << endl;
            cout << "Player: " << player.getPlayerName() << endl;
            cout << endl;
            cout << "Energy: " << player.getEnergy() << endl;
            cout << "Skill: " << player.getSkill() << endl;
            cout << "Credits: " << player.getCredits() << endl;
            cout << "Reputation: " << player.getPlayerReputation() << endl;
            cout << "Missions Completed: " << player.getMissionsCompleted() << endl;
            cout << endl;
            cout << "Final Score: " << endl;
            cout << "Rank: " << endl;
            cout << "===================================" << endl;
            cout << "Number of days: " << numOfDays << endl;
            // player stats
            // missions completed
            // mission history
            // final score 
            // rank 
            break;
        } else if (numOfDays == 12) {
            break;
        } else {
            cout << "Invalid input, try again" << endl;
        }

        numOfDays++;
    }
    
    // int finalScore();

    // void finalReport() {
    //     cout << "Player: "<< player.getName() << endl;
    //     cout << "Energy: " << player.getEnergy() << endl;
    // }


}

 void rest() {
    Player player;
        cout << player.getPlayerName() + " is resting..." << endl;
}
