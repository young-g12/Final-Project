#include <iostream>
#include<vector>
#include<string>

using namespace std;

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

        string getPlayerName() {
            return playerName;
        }

        void setPlayerName(string playerName) {
            this->playerName = playerName;
        }

        string getPlayerName() {
            return playerName;
        }

        void setPlayerName(string playerName) {
            this->playerName = playerName;
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

        void setRewardcredits(int rewardCredits) {
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



int main() {
    Player player;
    vector<Player> players;
    vector<Mission> mission;

    // add a new player to game
    for (int i = 0; i < players.size(); i++) {
        Player newPlayer;
        players.push_back(newPlayer);
    }

    int choice;
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
            player.setPlayerName("Alex");
            player.setSkill(0);
             cout << player.getPlayerName() << endl;
             cout << player.getSkill() << endl;
             cout << player.getPlayerName() << endl;
             cout << player.getPlayerName() << endl;
             cout << player.getPlayerName() << endl;
             cout << player.getPlayerName() << endl;

        } else if (choice == 2) {

        } else if (choice == 3) {

        } else if (choice == 4) {

        } else if (choice == 5) {

        } else if (choice == 6) {
            cout << "Ending game" << endl;
            break;
        } else {
            cout << "Invalid input, try again" << endl;
        }
    }


}