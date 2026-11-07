#include <iostream>
using namespace std;

// Class definition for 'player'
class player {
public: 
    // Data members (attributes) of the class
    int score;  
    int health;  

    void showHealth(){ // member function
        cout<<"health is : "<<health<<endl;
    }
    void showScore(){
        cout<<"score : "<<score<<endl;
    }
};

int main() {
    // Creating first object of class 'player'
    player amit; // 'amit' is an object of class 'player'

    amit.score = 90;
    amit.health = 100;
    amit.showHealth();
    amit.showScore();

    // Creating second object of class 'player'
    player harsh; // 'harsh' is another independent object

    
    harsh.score = 10;
    harsh.health = 20;
    harsh.showHealth();
    amit.showScore();

    return 0; 
}
