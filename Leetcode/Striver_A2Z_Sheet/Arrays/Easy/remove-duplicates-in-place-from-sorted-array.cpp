// remove duplicates in array from sorted array
// modify array and return number of unique elements

// Brute Force is to use a Set. WILL WORK FOR ANY ARRAY_SORTED OR UNSORTED.
// NOTE:::::: sets store elements in sorted order without direct indexing.
// We cannot change the value of elements once they are stored in the set.
// #include<bits/stdc++.h>
// using namespace std;

// int return_unique(int arr[], int size){
//     set<int> st;
//     for(int i=0;i<size;i++){
//         st.insert(arr[i]); // o(nlogn) is tc of this insert operation. no position as set does not allowe indexing
//     }
// // set Does NOT support index based access st[i]
 //   // for(int i=0;i<st.size();i++){
 //   //     arr[i]=st[i];
 //   // }
 // int index=0;
 // for(int i: st){
//         arr[index]=i;
// index++;
//}
//     return st.size();
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int arr[]={1,1,1,2,2,2,3,3,3,4,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int k=return_unique(arr,size);
//     cout<<" num unique elements is "<<k<<endl;
//     for(int i=0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// TC - insertion for set takes O(logN), so O(NlogN) +O(K) loop that copies elements into array worst case is k=n so O(N)+O(NlogN) =O(NlogN)
// SC - O(N) if set takes up all elements as all are unique.

// Optimised -> Two Pointer Approach 
#include<bits/stdc++.h>
using namespace std;
// edge cases to consider : empty, one, two and all elements are same
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,1,1,1,2,2,2,3,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    if(size==0){
        cout<<"Empty array";
    }else if(size==1){
        cout<<"One element is unique. "<<arr[0];
    }else{
        for(int j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"Number of elements unique are "<<i+1<<endl;
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
    }
    return 0;
}