#include<bits/stdc++.h>
using namespace std;
// two pointer approach -> Part of an array
// just create a function to reverse and call it three times.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums={1,2,3,4,5,6,7,8};
    int size=nums.size();
    int d;
    cin>>d;
    int l=0;
    int r=d-1;
    while(l<r){
        swap(nums[l],nums[r]);
        l++;
        r--;
    }
    l=d;
    r=size-1;
    while(l<r){
        swap(nums[l],nums[r]);
        l++;
        r--;
    }
    // now if you want ROTATION (LEFT) then reverse the entire array again
    l=0;
    r=size-1;
    while(l<r){
        swap(nums[l],nums[r]);
        l++;
        r--;
    }
    for(int i=0;i<size;i++){
        cout<<nums[i]<<' ';
    }
    return 0;
}