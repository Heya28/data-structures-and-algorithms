#include<bits/stdc++.h>
using namespace std;
// STL Optimal Approach
// reverse(nums.begin(),nums.begin()+d) && reverse(nums.begin()+d,nums.end())
// TC of reverse is O(n) where n is number of elements being reversed and SC is O(1).
// NOTE: reverse() is [first,last) for eg if d=3 then it points to 0,1,2 index and nums.begin()+3 = 3 but it is exclusive

// Optimal Approach -> REVERSAL ALGORITHM
// TC is O(N), SC is O(1).
// Use two pointers to reverse part of an array in-place 
void reversearray(vector<int> & arr,int start, int end){
    int l=start, r=end;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums={1,2,3,4,5,6,7,8,9,0};
    int size=nums.size();
    int d;
    cin>>d;
    if(d>=size){
        d=d%size;
    }
    reversearray(nums,0,d-1); // if d is greater than size then it will try to access out of bounds 
    reversearray(nums,d,size-1);
    reversearray(nums,0,size-1);
    for(int i=0;i<size;i++){
        cout<<nums[i]<<' ';
    }
}
// Better solution -> TEMPORARY ARRAY METHOD.
// take an array and store elements in that.
// O(N) and O(d)
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<int> nums={1,2,3,4,5,6,7};
//     int size=nums.size();
//     int d;
//     cin>>d;
// WHAT IF d is greater than size? 
    // if(d>=size){
    //     d=d%size;
    // }
//     vector<int> temparr(d);
//     for(int i=0;i<d;i++){
//         temparr[i]=nums[i];
//     }
//     // if d=3, then first three elements = 0, 1, 2 indices so shifting starts at indice=3.
//     for(int i=d;i<size;i++){
//         nums[i-d]=nums[i];
//         if(i>=size-d){
//             nums[i]=temparr[i-(size-d)];
//         }
//     }
//     for(int k=0;k<size;k++){
//         cout<<nums[k]<<' ';
//     }
// }

// Brute force approach -> ONE BY ONE ROTATION METHOD.
// TC is O(d.N) ; SC is O(1)
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<int> nums={1,2,3,4,5,6,7};
//     int size=nums.size();
//     int d;
//     cin>>d;
//     // at rotation = size, it will come back to its original form of array.
//     if(d>=size){
//         // d=d-size; if it is 14 rotations and size = 7 then 14-7 will still do 7 rotations
//         d=d%size;
//     }
//     while(d>0){
//         int temp=nums[0];
//         for(int i=1;i<size;i++){
//             nums[i-1]=nums[i];
//         }
//         nums[size-1]=temp;
//         d--;
//     }
//     for(int i:nums){
//         cout<<i<<' ';
//     }
//     return 0;
// } 
