// Arrays are sorted and might have duplicates
// Note that if 1,1,2,3,4,5 and 2,3,4,4,5 are arrays then union is 1,2,3,4,5
#include<bits/stdc++.h>
using namespace std;

// Optimal -> Two Pointer Approach ( SINCE Array is SORTED! )
// vec.back() MUST be used if size >0 when size==0 crash and undefined behaviour.
// unionarr.size() ==0 instead of i!=0 !!!!! ###### first element otherwise will not work!
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v1={1,1,2,3,4,5};
    vector<int> v2={2,3,4,4,5};
    vector<int> unionarr;
    // if iteration in one of the arrays is over, then we will just go check for the second array for unique elements and if element in union array and append that.
    int i=0,j=0;
    while((i<v1.size())&&(j<v2.size())){
        if(v1[i]<=v2[j]){ // equal case must also be considered.
            if(unionarr.size()==0 || (unionarr.back()!=v1[i])){ // since array is sorted hence only need to check the last element.
                unionarr.push_back(v1[i]);
            }
                            i++; // note where u are keeping this inside which if statement
        }else if((v2[j]<v1[i])){
            if(unionarr.size()==0 || unionarr.back()!=v2[j]){
                unionarr.push_back(v2[j]);
            }
                            j++;
        }
    }
    if(v1.size()<v2.size()){
    for(int i=unionarr.size()-1;i<v2.size();i++){
        
    }
    }
    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<' ';
    }    
    return 0;
}

// Brute Force - use sets ( DO NOT USE unsorted_set here as ordering will get distorted and you want the union is sorted order.)
// TC is O(n1logN + n2logN) SC is O(n1+n2) +O(n1+n2) // strict upper bound worst case scenario if all are unique { for the union vector space}
// insertion takes O(logK) where K is the number of elements currently in the set!
// in each iteration value of K changes!

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<int> v1={1,1,2,3,4,5};
//     vector<int> v2={2,3,4,4,5};
//     set<int> st;
//     for(int i=0;i<v1.size();i++){
//         st.insert(v1[i]);
//     }
//     for(int i=0;i<v2.size();i++){
//         st.insert(v2[i]);
//     }
//     vector<int> unionvec;
//     for(int i:st){
//         unionvec.push_back(i);
//     }
//     for(int i:unionvec){
//         cout<<i<<' ';
//     }
//     return 0;
// }