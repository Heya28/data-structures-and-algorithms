#include<bits/stdc++.h>
using namespace std;
// One Bonus at the end !
/*
EDGE CASES:
SMALL:
1. EMPTY ARRAY
2. ONE ELEMENT

EXTREME:
1. NEGATIVE NUMBERS 

SPECIAL:
1. ALL ELEMENTS ARE SAME.
2. DUPLICATES 

Optimal Approach:
TC: O(N)
SC: O(1)
*/
// bool is_sorted(vector<int>& arr){
//     int size=arr.size();
//     for(int i=0;i<size-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     vector<int> array={};
//     if(array.size()==0){
//         cout<<"Empty array";
//     }else{
//         if(is_sorted(array)){
//         cout<<"Array is sorted.";
//     }else{
//         cout<<"Array is not sorted.";
//     }
//     }
    
//     return 0;
// }

// BONUS
// How would you modify your is_sorted function to check if an array is sorted in strictly increasing order 
// (meaning no duplicates like {5, 5, 6} are allowed)?
bool is_sorted(vector<int>& arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        if(arr[i]>=arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> array={};
    if(array.size()==0){
        cout<<"Empty array";
    }else{
        if(is_sorted(array)){
        cout<<"Array is sorted.";
    }else{
        cout<<"Array is not sorted.";
    }
    }
    
    return 0;
}
