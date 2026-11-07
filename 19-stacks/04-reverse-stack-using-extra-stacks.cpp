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

int main(){
    stack<int> st;
    cout<<st.size()<<endl; // size 0
    st.push(10); // 1
    st.push(20); // 2
    st.push(30);// 3
    st.push(40); //4
    st.push(50);
    print (st);
    stack <int> gt;
    stack <int> rt;
    // empty st into gt
    while (st.size()>0){
        gt.push(st.top());
        st.pop();
    }

    // empty gt into rt
      while (gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }

    // empty rt into st
    while (rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
 cout<<endl;
 print(st);

    return 0;
}