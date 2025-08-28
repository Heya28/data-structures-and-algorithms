// Second largest or smallest element in array
#include<bits/stdc++.h>
using namespace std;
/*
1. Brute Force:
TC -> O(nlogn)
Analysis : sort uses o(nlogn) and while loop in worst case runs n times. so, O(nlogn) + O(n) == O(nlogn)
SC-> O(logn) ( For INTROSORT -> Recursion Stack ) or O(1) excluding the recursive stack space. 

Solution: ( Ensures that duplicates are not counted.)
### Key Errors : 
1. {5,5,5} -> In this situation the loop should break otherwise r becomes -1 and array[-1] is undefined behaviour or garbage value.
2. Logical Error : If you print in this situation, second largest is array[r] where r==0, this is not logically correct. There is no second largest element.
3. Second logical Error: 
a ) if( r!=0 ){
cout<<"second largest is..."<<arr[r];
}
What if second largest is at position 0?

b) if(array[0]!=array[size-1]) ( Not a clean way ) This way we are doing the work again what we did in while loop 


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // vector<int> array={-100,199,199,199,199,18,27,19,10,172};
    vector<int> array={-100,-100,-100,-100};
    sort(array.begin(),array.end());
    int size=array.size();
    int r=size-1;
    while(r>=0){
        if((array[r]!=array[size-1]) || (r==0)){
            break;
        }
        // WHAT IF ALL ELEMENTS ARE THE SAME?!
        // Then r becomes -1 and even though while loop terminates but it tries to execute array[-1] which is undefined behaviour or garbage value.
        r--;
    }
    if(r<0){
        cout<<"Second largest element in array is "<<array[r];
    }else{
        cout<<"There exists no second largest element as all elements are same.";
    }
    
    return 0;
}
*/

/* 2. Optimal Approach:
TC: O(N)
SC: O(1)
### Key Errors:
Edge Cases:
1. Empty ( In this case, fewer than 2 elements. )
2. All elements are same. 
3. Duplicates 
In case of duplicates, if u just write else if(arr[i]>second_max), then the second duplicate will become equal to second_max.
4. FAILING TO UPDATE SECOND_MAX ONCE MAX IS UPDATED!
for eg: {5,10} maxx becomes 5 then 10, else if statement is skipped!!!
5. Do NOT do maxx=arr[0] what if array is EMPTY! 
*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> arr={-100,100,-100,199,199,188,7,26,0,18};
    int maxx=INT_MIN;
    int size=arr.size();
    int second_max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxx){
            second_max=maxx; // UPDATING IS IMPORTANT!
            maxx=arr[i];
        }else if((arr[i]>second_max) && ( arr[i]!=maxx)){
            second_max=arr[i];
        }
    }
    // Accounting for Empty Array
    if(size>=2){
        if(second_max!=INT_MIN){
            cout<<"Second largest is "<<second_max;
        }else{
            cout<<"All elements of array are same. There is no second largest.";
        }
    }else{
        cout<<"Array has insufficient elements.";
    }
    return 0;
}
/*Testing Edge Cases:
1. SMALL:
a. One element
prints array has insifficent elements
b. Two elements 
works fine for two elements.
c. Zero / Empty 
prints insufficient

EXTREME:
1. No constraints given as no ps.
2. Works for negative numbers. 

SPECIAL:
1. If all are same elements 
does print all elements same
2. If array has duplicates / absentees
Does handle duplicates. 
*/ 

