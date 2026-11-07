#include <iostream>
using namespace std;

class player {
private: 
    // Data members 
    int score;  
    int health;  

    public:

    // setter
    void setscore(int s){
        score = s;
    }
    void sethealth (int h){
        health = h;
    }

    // getter
    int getscore(){
        return score;
    }

    int gethealth(){
        return health;
    }
   
};

int main() {
  
    player harsh;
    harsh.setscore(10);
   cout<< harsh.getscore()<<endl;
    harsh.sethealth(51);
    cout<<harsh.gethealth();
    

    return 0; 
}
