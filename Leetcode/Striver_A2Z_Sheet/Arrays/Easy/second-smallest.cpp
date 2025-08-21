// Second Smallest Element in Array
#include<bits/stdc++.h>
using namespace std;
/*
Edge Cases:
1. Small
 one element , empty or two elements.

2. Extreme
time complexity and int overflow
minimum numbers
1 <= nums.length <= 10^5 ( hence o(nlogn) solution minimum is required. )
-10^4 <= nums[i] <= 10^4
nums may contain duplicate elements.

3. Special
all duplicates, absentees, 
*/

/* 
1. Brute Force Solution
Sort then check if there are no multiple second max elements
TC -> O(nlogn)
SC -> O(logn) 
*/
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int arr[]={-100,-100,-100,-100};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+size);
//     int i=0;
//     while(i<size-1){
//         if(arr[i]!=arr[i+1]){
//             break;
//         }
//         i++;
//     }
//     if(size>=2){
//         if(i==size-1){
//         cout<<"All elements are same, hence, no second largest exits.";
//     }else{
//         cout<<arr[i+1]<<" is the second smallest element.";
//     }
//     }else{
//         cout<<"Insufficient number of elements.";
//     }

//     return 0;
// }

// 2. Optimal Solution 
// TC : O(N)
// SC: O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int minn=INT_MAX, secondminn =INT_MAX;
//     int arr[]={7, 7, 2, 2, 10, 10, 10};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         if(arr[i]<minn){
//             secondminn=minn;
//             minn=arr[i];
//         }else if((arr[i]<secondminn)&& (arr[i]!=minn)){
//             secondminn=arr[i];
//         }
//     }
//     if(size>1){
//         if(secondminn!=INT_MAX){
//             cout<<"Second smallest element is "<<secondminn;
//         }else{
//             cout<<"Second smallest does not exist. All elements are identical.";
//         }
//     }else{
//         if(size==0){
//             cout<<"Empty array";
//         }else{
//             cout<<"Only one element in array. ";
//         }
        
//     }
//     return 0;
// }

// ### KEY IMPROVEMENTS 
// NOTE: -> I am colliding data with the initialisation, what if INT_MAX was a number in the array? {INT_MAX,10}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int arr[]={INT_MAX,INT_MAX,INT_MAX};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int minn,secondminn;
//     if(arr[0]<arr[1]){
//         minn=arr[0];
//         secondminn=arr[1];
//     }else{
//         minn=arr[1];
//         secondminn=arr[0];
//     }
//     for(int i=2;i<size;i++){
//         if(arr[i]<minn){
//             secondminn=minn;
//             minn=arr[i];
//         }else if((arr[i]<secondminn) && (arr[i]!=minn)){
//             secondminn=arr[i];
//         }
//     }
//     if(size==0){
//         cout<<"Empty array";
//     }else if(size==1){
//         cout<<"Only one element present";
//     }else{
//         if(secondminn!=minn){ // all identical
//             cout<<"Second smallest is "<<secondminn;
//         }else{
//             cout<<"All elements are identical.";
//         }
//     }
//     return 0;
// }

// 2. The above program WILL CRASH if there is an empty array or one element array !
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={};
    int size=sizeof(arr)/sizeof(arr[0]);
    int minn,secondminn;
    if(size>1){
    if(arr[0]<arr[1]){
        minn=arr[0];
        secondminn=arr[1];
    }else{
        minn=arr[1];
        secondminn=arr[0];
    }
    for(int i=2;i<size;i++){
        if(arr[i]<minn){
            secondminn=minn;
            minn=arr[i];
        }else if((arr[i]<secondminn) && (arr[i]!=minn)){
            secondminn=arr[i];
        }
    }
    if(secondminn!=minn){ // all identical
            cout<<"Second smallest is "<<secondminn;
        }else{
            cout<<"All elements are identical.";
        }
    }else if(size==0){
        cout<<"Empty array";
    }else{
        cout<<"Only one element present";
    }
    return 0;
}

/*Final Summary 
1. Started with initialising INT_MIN and INT_MAX
2. Edge case what if INT_MAX OR MIN is in array
3. arr[0] and arr[1] initialising BUT by checking the values which one is greater or smaller
4. Handling edge cases of an empty array and one element array 
5. Handling Edge Cases of whether every element is the same. 
*/