#include <iostream>
#include <stack>
using namespace std;

// funvtion to display in reverse order 
void displayRev (stack<int> &st) {
    if (st.size()==0) return ;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev (st);
    st.push(x);
}


// funvtion to display in normal order 
void display(stack<int> &st) {
    if (st.size()==0) return ;
    int x = st.top();
    st.pop();
    display (st);
    cout<<x<<" "; // only this will change in reverse 
    st.push(x);
}


// push at bottom 
void pushAtBottomRec(stack<int> &st, int val) {
    if (st.size()==0){
        st.push(val);
        return;
    } 
    int x = st.top();
    st.pop();
    pushAtBottomRec (st, val);
    st.push(x);
}

int main(){
    stack<int> st;
    cout<<st.size()<<endl; // size 0
    st.push(10); // 1
    st.push(20); // 2
    st.push(30);// 3
    st.push(40); //4
    st.push(50);

    displayRev(st); 
    cout<<endl;
    display(st); 
    cout<<endl;
    pushAtBottomRec(st,-10);
    cout<<endl;
    display(st);


    return 0;
} 