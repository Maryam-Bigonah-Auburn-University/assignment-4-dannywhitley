#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
    private:
        // Variable declarations
        string name;
        int score;
    public:

        // Constructor removes a player
        //Player();

        // Cosntructor used to make a default player
        //Player(int newScore, string newname);

        void setName(string newName);
        void setScore(int newScore);

        // Gets the names and scores of the players
        string getName();
        int getScore();
};

int main(){
    // Vector declaration
    vector<Player> myPlayers;

    // Other variable declarationsq
    int maxPlayers = 10;
    string userName;
    int userScore;
    string userOption;

    // Object definition for player to be removed
    Player removePlayer, player;

    while (myPlayers.size() < maxPlayers){
        // Prompts the user to add or remove a player
        cout << "Would you like to add or remove a player or quit program? (Enter add, remove, or quit): ";
        cin >> userOption;

        // Exits program
        if (userOption == "quit") {
            cout << myPlayers.size();
            break; 
        }
        else {
            cout << "Enter a player's name and score: ";
            cin >> userName >> userScore;

            player.setName(userName);
            player.setScore(userScore);

            player.getName();
            player.getScore();

            // Adds player
            if (userOption == "add") {
                myPlayers.emplace_back(player);
            }

            // Removes player 
            if (userOption == "remove") {
                removePlayer.setName(userName);
                removePlayer.getName();

                // Player object to be removed
                //for (unsigned int i = 0; i < myPlayers.size(); i++) {
                //    if (removePlayer.getName())
                //}
            }
        }
        
    }
    
    return 0;
}

// Function definition, gets the player name
string Player::getName() {return name;}

// Function definition, gets the player score
int Player::getScore() {return score;}

// Function definition, sets players name
void Player::setName(string newName) {name = newName;}

// Function definition, sets player score
void Player::setScore(int newScore) {score = newScore;}

// Constructor argument for making a player
//Player::Player(int newscore, string newname) {
   // score = newscore;
    //name = newname;
//}

// Constructor argument for removing a player



