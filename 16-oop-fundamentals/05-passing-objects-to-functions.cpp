#include <iostream>
using namespace std;

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    // Getters
    int getHealth() {
        return health;
    }
    
    int getAge() {
        return age;
    }
    
    int getScore() {
        return score;
    }
    
    bool isAlive() {
        return alive;
    }

    // Setters
    void setHealth(int health) {
        // player :: health = health; scope resoltuion operator → player wala health hai
        this->health = health; // ess wali class ki health 
    }

    void setAge(int age) {
        this->age = age;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setIsAlive(bool alive) {
        this->alive = alive;
    }
};

// Function to add two integers
int addscore(Player a, Player b) {
    return a.getScore()+b.getScore();
}

int main() {
    Player harsh;  // object creation, statically
    Player raghav; // compile time, static allocation

    Player *urvi = new Player; //runn time , dynamic allocation 

    harsh.setAge(22);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(true);
    raghav.setHealth(100);


    urvi-> setHealth(20);

    cout<<(*urvi).getHealth()<<endl;

cout<<addscore(harsh,  raghav);
    return 0;
}
