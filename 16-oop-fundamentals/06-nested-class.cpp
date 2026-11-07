#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    
    class Helmet {
    private:
        int hp;
        int level;
    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        
        void setLevel(int level) {
            this->level = level;
        }
        
        int getHp() {
            return hp;
        }
        
        int getLevel() {
            return level;
        }
    };

    Helmet helmet;

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

    Gun getGun() {
        return gun;
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
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

    void setGun(Gun gun) {
        this->gun = gun;
    }

    void setHelmetLevel(int level) {
        if (level == 1) {
            helmet.setHp(25);
        } else if (level == 2) {
            helmet.setHp(50);
        } else if (level == 3) {
            helmet.setHp(100);
        } else {
            cout << "Error: Invalid helmet level" << endl;
        }
        helmet.setLevel(level);
    }
};

// Function to add the scores of two players
int addscore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

int main() {
    Player harsh;  // object creation, statically
    Player raghav; // compile-time, static allocation

    Player *urvi = new Player; // runtime, dynamic allocation

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    harsh.setAge(22);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);
    harsh.setGun(akm);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setIsAlive(true);
    raghav.setGun(awm);
    raghav.setHealth(100);

    urvi->setHealth(20);

    cout << "Urvi's health: " << (*urvi).getHealth() << endl;

    cout << "Total score: " << addscore(harsh, raghav) << endl;

    // Example of setting helmet levels
    harsh.setHelmetLevel(2);  // Level 2 helmet for harsh
    raghav.setHelmetLevel(3); // Level 3 helmet for raghav

    return 0;
}
