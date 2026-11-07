#include <iostream>
using namespace std;

class Student{ // user defined data type 
public: // access modifier 
    string name;
    int rno;
    float marks;


    // constructor
    // Student (string n, int r, float m) // cant give same name as above line to solve this issue use [this] key word
    Student (string name, int rno, float marks){ 
        this->name = name;
        this->rno = rno;
        this->marks = marks;

    }
};
void change (Student* s){  
    s-> name = "Harsh";
}
int main(){
   
  Student* s = new Student("alex", 76, 92.6);

cout<<s->name<<endl;
change (s);
cout<<s->name<<endl;


    
    return 0;
}




// #include <iostream>
// using namespace std;

// class Student{ // user defined data type 
// public: // access modifier 
//     string name;
//     int rno;
//     float marks;


//     // constructor
//     // Student (string n, int r, float m) // cant give same name as above line to solve this issue use [this] key word
//     Student (string name, int rno, float marks){ 
//         this->name = name;
//         this->rno = rno;
//         this->marks = marks;

//     }
// };
// void change (Student &s){  // using "&" we can change it without "&" it will not cahnged
//     s.name = "Harsh";
// }
// int main(){
//     // initialization and declartion 
//   Student s("alex", 76, 92.6);
//   Student* ptr = &s;
// //   (*ptr).name  = "Harsh";
// // alternate of above line
// // -> when we are doing drefrence of pointer use arrow
// ptr -> name = "Sanket";
// cout<<s.name<<endl;

// // change(s);
// //   cout<<s.name<<endl;
    
//     return 0;
// }