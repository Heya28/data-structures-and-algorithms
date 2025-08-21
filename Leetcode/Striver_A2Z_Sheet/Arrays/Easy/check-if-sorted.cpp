#include<bits/stdc++.h>
using namespace std;
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

Brute Force:
TC: O(N^2)
SC: O(1)

*/
bool is_sorted_array(vector<int> & arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> array={-1,2,99,100};
    bool result=is_sorted_array(array);
    cout<<result;
    if(array.size()!=0){
        if(result){
        cout<<"Array sorted.";
    }else{
        cout<<"Not sorted.";
    }
    }
    
    return 0;
}