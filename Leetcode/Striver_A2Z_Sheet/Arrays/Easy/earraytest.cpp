// // remove all duplicates from sorted array
// // Brute Force -> works on all arrays whether sorted or unsorted 
// // the set appraoch is brute force with o(nlogn) is tc and o(d) where d is the number of unique elements as the space complexity 
// #include<bits/stdc++.h>
// using namespace std;

// int return_unique_elements(int arr[], int size){
//     // int &arr[]  is INCORRECT as it is reference to an array which is decaying into a pointer.
//     set<int> st;
//     // Set does NOT use the st[i] direct access approach.
//     for(int i=0;i<size;i++){
//         st.insert(arr[i]);
//     }
//     int index=0;
//     for(int i:st){
//         arr[index]=i;
//         index++;
//     }
//     return st.size();
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int arr[]={1,1,2,2,3,3,3,3,4,5,6,7,8,0,0,1,3}; // unsorted array
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int uniqnum=return_unique_elements(arr,size);
//     for(int i=0;i<uniqnum;i++){
//         cout<<arr[i]<<' ';
//     }
//     cout<<"\n Number of unique elements are:"<<uniqnum;
// }

// Optimal using two pointers only works for sorted array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,1,2,2,2,3,3,3,4,4,5,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=1;j<size;j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
    }
    int uniqnum=i+1;
    cout<<"Number of unique elements are "<<uniqnum<<endl;
    for(int i=0;i<uniqnum;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}