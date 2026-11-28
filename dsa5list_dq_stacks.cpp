#include <bits/stdc++.h>
using namespace std;
void explainlist(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(7);
    for (auto it : ls) {
        cout << it << " ";
    }
}
// rest all functions are same as vector

//deque
//exactly similar to list and vector
void explaindeque() {
    deque<int> dq;

    dq.push_back(2);
    dq.emplace_back(4);
    dq.push_front(5);
    dq.emplace_front(7);
    for (auto it : dq) {
        cout << it << " ";
    }
}

//stacks
void explainstacks(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}//LIFO behaviour
    st.push(5);
    stack <int> temp = st;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout <<st.top()<<"\n";
    cout<<st.size()<<"\n";
    cout<<st.empty();
    st.pop();//removes last element

    //swapping two stacks
}

int main(){
    //list 
    // explainlist();
    //deque
    // explaindeque();
    // explainstacks();

    //swapping two stacks

    return 0;
}
