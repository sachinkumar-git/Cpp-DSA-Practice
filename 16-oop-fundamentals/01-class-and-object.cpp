#include <iostream>
using namespace std;

// Class definition for 'player'
class player {
public: // access modifier 
    // Data members (attributes) of the class
    int score;   // to store player's score
    int health;  // to store player's health
};

int main() {
    // Creating first object of class 'player'
    player amit; // 'amit' is an object of class 'player'

    // Assigning values to data members of 'amit'
    amit.score = 90;
    amit.health = 100;

    // Displaying amit’s details
    cout << "Amit's Score: " << amit.score << endl;
    cout << "Amit's Health: " << amit.health << endl;

    // Creating second object of class 'player'
    player harsh; // 'harsh' is another independent object

    // Assigning values to data members of 'harsh'
    harsh.score = 10;
    harsh.health = 20;

    // Displaying harsh’s details
    cout << "Harsh's Score: " << harsh.score << endl;
    cout << "Harsh's Health: " << harsh.health << endl;

    return 0; // End of main function
}
