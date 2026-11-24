#include <bits/stdc++.h>
using namespace std;
//pairs
void explainpairs(){
    pair<int , int> p ={1,3};
    cout<<p.first<< " "<< p.second;
}
void nestedpair(){
    pair<int , pair<int, int>>p ={1,{3,4}};
    cout << p.first<<" "<< p.second.first << " "<< p.second.second;
}
void arraypair(){
    pair<int,int> arr[] = {{1,2},{2,5},{6,7}};
    cout<<arr[1].second;
}
//vectors
void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << v[1];
}


int main(){
    // explainVector();
    vector<int> v = {10, 20, 30, 40, 50};

    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();

    // cout << *(it);
    cout<< v[0]<<" "<<v.at(0);
    cout << v.back<<" ";

    return 0;
}