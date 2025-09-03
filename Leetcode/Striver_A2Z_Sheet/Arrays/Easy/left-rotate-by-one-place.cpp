#include<bits/stdc++.h>
using namespace std;
// left rotate means 1,2,3,4,5 becomes 2,3,4,5,1
// TC is O(N) and SC is O(1).
/// IN algo space being used is O(N) and extra space os O(1)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums={1,2,3,4,5};
    int size=nums.size();
    int temp=nums[0];
    for(int i=1;i<size;i++){
        nums[i-1]=nums[i];
    }
    nums[size-1]=temp;
    for(int i:nums){
        cout<<i<<' ';
    }
    return 0;
}