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
    // vector<int> v = {10, 20, 30, 40, 50};
//     for(int i = 0; i < v.size(); i++){
//     cout << v[i] << " ";
// }

    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();

    // cout << *(it);
    // cout<< v[0]<<" "<<v.at(0);
    // cout << v.back<<" ";
    // for(vector <int>::iterator it = v.begin();it!= v.end();it++){
    //     cout <<*(it)<<" ";
    // }
    // cout << endl;
    // for(auto it =v.begin(); it != v.end(); it++){
    //     cout <<*(it)<<" ";
    // }
    //{10,12,45,67,32}
    // v.erase(v.begin()+1); //{10,45,67,32}
    // v.erase(v.begin()+2 , v.begin()+4); //{10,12,67}
    //insert  function
    // vector<int> v(2,100);
    //    for(vector <int>::iterator it = v.begin();it!= v.end();it++){
    //     cout <<*(it)<<" ";
    // }
    // vector <int>v(2,100); //{100,100}
    // v.insert(v.begin(),300);//{300,100,100}
    // v.insert(v.begin()+1,2,10);
    // vector<int>copy{2,50};//{50,50}
    // v.insert(v.begin(),copy.begin(),copy.end()); //{2,50,300,10,10,100,100}
    // // for(vector <int>::iterator it = v.begin();it!= v.end();it++)
    // for(auto it=v.begin();it !=v.end();it++){ //two ways to print output
    //     cout <<*(it)<<" ";
    // }
    // cout<<endl;
    // cout<<v.size()<<endl;
    // v.clear();
    // cout << v.empty();

    return 0;
}