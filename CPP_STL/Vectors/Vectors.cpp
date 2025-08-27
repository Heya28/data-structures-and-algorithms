#include<bits/stdc++.h>
using namespace std;

/*
Problem 1: Tracking price of the stock.
a. Create a std::vector<double> to store the prices.
b. Continuously ask the user to input a price.
c. If the user enters a positive number, add it to the vector.
d. If the user enters 0 or a negative number, stop asking for input.
e. After the input stops, print out all the collected prices and the total number of prices recorded.*/
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<double> prices;
//     prices.reserve(10000);
//     while(true){
//         double el;
//         cin>>el;
//         if(el>0){
//             prices.push_back(el);
//         }else{
//             break;
//         }
//     }
//     for(double i:prices){
//         cout<<i<<" ";
//     }
//     cout<<"Total number of prices recorded is "<<prices.size();
//     return 0;
// }

/*
Problem 2:Financial Data Analysis
For the stock analysis previous: 
After input is finished, sort the prices in ascending order.
Calculate and print the median price.
Finally, ask the user for a "price to find" and use std::find to report whether 
that price exists in your dataset.
*/
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<double> prices;
//     prices.reserve(10000);
//     while(true){
//         double el;
//         cin>>el;
//         if(el>0){
//             prices.push_back(el);
//         }else{
//             break;
//         }
//     }
//     for(double i:prices){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     int size=prices.size();
//     cout<<"Total number of prices recorded is "<<size<<endl;
//     sort(prices.begin(),prices.end());
//     // median price
//     if((size%2==0) && size!=0){ // EDGE CASE 
//         cout<<"Median Price is "<<(prices[size/2]+prices[size/2 -1])/2<<endl;
//     }else{
//         cout<<"Median Price is "<<prices[size/2]<<endl;
//     }
//     double findstock;
//     cout<<"Enter stock to find:"<<flush;
//     cin>>findstock;
//     auto it =find(prices.begin(),prices.end(),findstock);
//     if(it!=prices.end()){
//         cout<<"Stock has been found.";
//     }else{
//         cout<<"Stock was not found.";
//     }
//     return 0;
// }

// ### Key Errors and Optimisations:
// 1. Edge Case : Empty Array : in the case of an empty array when we calculate the median, then, it tries to calculate prices[0] & prices[-1] as 0%2==0
// 2. find() used a linear search O(N) complexity. Since, data is sorted, we can search must faster -> BINARY SEARCH O(logN) 
// In STL, just use binary_search() algorithm from <algorithm header> 
// binary_search() returns a BOOLEAN!
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<double> prices;
    prices.reserve(10000);
    while(true){
        double el;
        cin>>el;
        if(el>0){
            prices.push_back(el);
        }else{
            break;
        }
    }
    for(double i:prices){
        cout<<i<<" ";
    }
    cout<<endl;
    int size=prices.size();
    cout<<"Total number of prices recorded is "<<size<<endl;
    sort(prices.begin(),prices.end());
    // median price
    if((size%2==0) && size!=0){ // EDGE CASE 
        cout<<"Median Price is "<<(prices[size/2]+prices[size/2 -1])/2<<endl;
    }else{
        cout<<"Median Price is "<<prices[size/2]<<endl;
    }
    double findstock;
    cout<<"Enter stock to find:"<<flush;
    cin>>findstock;
    if(binary_search(prices.begin(),prices.end(),findstock)){
        cout<<"Stock has been found.";
    }else{
        cout<<"Stock was not found.";
    }
    return 0;
}