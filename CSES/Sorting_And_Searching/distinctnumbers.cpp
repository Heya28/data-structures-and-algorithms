// first thought -> map 
// TLE Exceeded on the last input where n=2,00,000
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    cout<<mp.size();
    return 0;
}