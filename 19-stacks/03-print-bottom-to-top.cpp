#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl; // size 0
    st.push(10); // 1
    st.push(20); // 2
    st.push(30);// 3
    st.push(40); //4
    st.push(50);

    //printing in reverrse order
    // while (st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();

    // }
// // we will use extra stack
// stack <int> temp;
// while (st.size()>0){
//     cout<<st.top()<<" ";
//     temp.push(st.top());
//     st.pop();

// }
// // puting elements back from temp to st stack 
// while (temp.size()>0){
//     st.push(temp.top());
//     temp.pop();
// }
// cout <<endl<<st.top();




    // we will use extra stack
    stack <int> temp;
    while (st.size()>0){
        int x = st.top();
        st.pop();
        temp.push(x);

    }
    // puting elements back from temp to st stack 
    while (temp.size()>0){
        cout<<temp.top()<<" ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout <<endl<<st.top();


    return 0;
}