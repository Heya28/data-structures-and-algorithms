// to find the largest element in the array
/* 
1. Brute Force Solution:
Sort the array and output the last element. 
# TC -> O(nlogn) 
Analysis : sort() takes O(nlogn) time, however in this case n is a constant.
# SC -> O(logn) (auxilliary) or O(1) ignoring the recursive stack space.
Analysis : We have a fixed array of size 10. The size does not change based on the input. 
Also, sort() takes up O(logn) space but n here is constant.


Solution : 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int arr[]={-10,99,18,17,8,29,0,19,20,20};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+size);
//     cout<<arr[size-1];
//     return 0;
// }

2. Optimal Solution:
Using INT_MIN or arr[0] and looping the array. 
TC -> O (n)
SC -> O(1) 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={-10,99,18,17,8,29,0,19,20,20,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxx=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    cout<<maxx;
    return 0;
}
