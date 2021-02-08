#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}