// Move all zeroes to the end of an array.
#include<bits/stdc++.h>
using namespace std;

/*
### Errors:
// Using erase() is wrong as even if inside for loop you 
do size-- erase shifts all elements to one place before
hence the next i misses the iteration

Also, erase is super slow O(N) TC, so code complexity will thus become O(n^2) which is highly unoptimal.
for(int i=0;i<size;i++){
if(nums[i]==0){
nums.erase(nums.begin()+i)
size--;
ct++;
}
This the reason in the array -> 1 0 2 3 2 0 0 4 5 1 the second zero was not being accounted for and the result was 1 2 3 2 0 4 5 1 0 0 
}*/

// Optimal
// Kind of like shifting the elements to the left only, more like removing all duplicates from sorted array.
// TC is O(N) and SC is O(1) extra.
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     vector<int> nums={1,0,2,3,2,0,0,4,5,1};
//     int size=nums.size();
//     // we will remove all duplicates first and then add them to the back.
//     // brute using set cannot be done as array can have duplicates other than 0.
//     // two pointer approach
//     int l=0;
//     for(int r=0;r<size;r++){
//         if(nums[r]!=0){
//             nums[l]=nums[r];
//             l++;
//         }
//     }
//     for(int k=l;k<size;k++){ // starts from l and not l+1 as l++ condition already takes it to the next element.
//         nums[k]=0;
//     }
//     for(int el:nums){
//         cout<<el<<' ';
//     }
//     return 0;
// }


// Brute Force (usually is O(n^2))
// Temporary Array Approach
// TC is O(N) and SC is O(K) where K is number of non-zero elements.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums={1,0,2,3,2,0,0,4,5,1};
    int size=nums.size();
    vector<int> nonzero;
    for(int el:nums){
        if(el!=0){
            nonzero.push_back(el);
        }
    }
    int numzero=size-nonzero.size();
    // now for 1 till numzero add element to og array
    for(int i=0;i<size;i++){
        if(i<size-numzero){
            nums[i]=nonzero[i];
        }else{
            nums[i]=0;
        }
    }
    for(int i=0;i<size;i++){
        cout<<nums[i]<<' ';
    }
    return 0;
}
