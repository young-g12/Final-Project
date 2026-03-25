#include <iostream>
#include<vector>
#include<string>

using namespace std;

int finalScore();
void playerStatus();
void mainMenu();
void finalReport();
void getRank(); 


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
        string getPlayerName() {
            return playerName;
        }

        void setPlayerName(string playerName) {
            this->playerName = playerName;
        }

        int getEnergy() {
            return energy;
        }

        void setEnergy(int energy) {
            this->energy = energy;
        }

        int getSkill() {
            return skill;
        }

        void setSkill (int skill) {
            this->skill = skill;
        }

        int getCredits() {
            return credits;
        }

        void setCredits(int credits) {
            this->credits = credits;
        }

        int getPlayerReputation() {
            return reputation;
        }

        void setPlayerReputation(int reputation) {
            this->reputation = reputation;
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

        void setMissionName(string missionName) {
            this->missionName = missionName;
        }

        string getDifficultyLevel() {
            return difficultyLevel;
        }

        void setDifficultyLevel(string difficultyLevel) {
            this->difficultyLevel = difficultyLevel;
        }

        string getRewardCredits() {
            int rewardCredits;
        }

        void setRewardCredits(int rewardCredits) {
            this->rewardCredits = rewardCredits;
        }
            

        int getReputationGain() {
            return reputationGain;
        }

        void setReputationGain(int reputationGain) {
            this->reputationGain = reputationGain;
        }
        

        int getEnergyCost() {
            return energyCost;
        }

        void setEnergyCost(int energyCost) {
            this->energyCost = energyCost;
        }

};

class ToolShop {
    vector<string> toolName;
    vector<int> toolBonus;
    vector<int> toolCost;



};



int main() {
    Player player;
    vector<Player> players;
    vector<Mission> mission;

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
    int choice;

    players.push_back(player);



    // Main menu
    while (choice != 6) {

        cout << "1. View status" << endl;
        cout << "2. Train" << endl;
        cout << "3. Rest" << endl;
        cout << "4. Visit Shop" << endl;
        cout << "5. Attempt Mission" << endl;
        cout << "6. Quit" << endl;

        cout << "Select option: " << endl;
        cin >> choice;

        if (choice == 1) {
 
        } else if (choice == 2) {

        } else if (choice == 3) {

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

        } else if (choice == 5) {

        } else if (choice == 6) {
            cout << "Ending game" << endl;

            cout << " ========== FINAL REPORT ========== " << endl;
            cout << "Player: " << player.getPlayerName() << endl;
            cout << endl;
            cout << "Energy: " << player.getEnergy() << endl;
            cout << "Energy: " << player.getSkill() << endl;
            cout << "Energy: " << player.getCredits() << endl;
            cout << "Energy: " << player.getMissionCompleted() << endl;

            cout << endl;
            cout << "Final Score: " << finalScore() << endl;
            cout << "Rank: " << getRank() << endl;

            cout << "===================================" << endl;

            // player stats
            // missions completed
            // mission history
            // final score 
            // rank 
            break;
        } else {
            cout << "Invalid input, try again" << endl;
        }

        numOfDays++;
    }
    
    int finalScore();

    // void finalReport() {
    //     cout << "Player: "<< player.getName() << endl;
    //     cout << "Energy: " << player.getEnergy() << endl;
    // }
}
