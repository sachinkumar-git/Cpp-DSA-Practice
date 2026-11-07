// create a calculator 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "enter a number";
//     cin>>a;
//     int b ;
//     cout << "enter second number";
//     cin>>b;
//     char ch;
//     cout << "select + , - , * , / to perform";
//     cin>>ch;
//     switch (ch)
//     {
//     case '+':
//         cout << a + b;
//         break;
//     case '-':
//         cout << a - b;
//         break;
//     case '*':
//         cout << a * b;
//         break;
//     case '/':
//         cout << a / b;
//         break;
//     }

//     return 0;
// }


//  calculator using if else
#include <iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"enter the problem : ";
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/') cout<<a/b;

    
    
    return 0;
}