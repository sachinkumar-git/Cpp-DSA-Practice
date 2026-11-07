#include <iostream>
#include <stack>
using namespace std;


// print function
void print (stack<int> st){
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
}
void pushAtBottom(stack<int>& st, int val){
    stack <int> temp;
    while (st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push (val);
    while (temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    cout<<st.size()<<endl; // size 0
    st.push(10); // 1
    st.push(20); // 2
    st.push(30);// 3
    st.push(40); //4
    st.push(50);
    print (st);
    cout<<endl;

    pushAtBottom(st, 80);
    print(st);


    return 0;
}