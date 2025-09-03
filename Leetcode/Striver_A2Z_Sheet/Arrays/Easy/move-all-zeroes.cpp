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

// Brute Force
// Kind of like shifting the elements to the left only, more like removing duplicates from sorted array.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums={1,0,2,3,2,0,0,4,5,1};
    int size=nums.size();
    int i=0;
    int ct=0;
    while(nums[i]==0){
        ct++;
    }
}