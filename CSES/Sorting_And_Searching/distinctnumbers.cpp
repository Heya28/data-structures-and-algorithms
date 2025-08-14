#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> vec;
    while(n--){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    int size=vec.size();
    int ct=1; // to account for i=0
    for(int i=0;i<size;i++){
        if((i!=0) && (vec[i]!=vec[i-1])){
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
