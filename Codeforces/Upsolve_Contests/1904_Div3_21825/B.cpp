/*Core idea is to :
n=x(1+10^k) k is num of zeroes appended 
since n is less than equal to 10^18 and greater than equal to 11, this means that k b/w 1 and 17
we will check for all values of 1 till 17 , if ( 1+10^k) divides n then  x = n/ ( 1+10^k).
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    typedef long long l;
    l t;
    cin>>t;
    vector<l> vec;
    vec.reserve(17); // k is between 1 and 17 so there can be only 17 values of x at max;
    while(t--){
        l n;
        cin>>n;
        int i=1;
        while(i<=(log10(n)+1)){
            if(n%l((1+pow(10,i)))==0){
                vec.push_back(n/l(1+pow(10,i)));
            }
            i++;
        }
    cout<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<' ';
    }
    vec.clear();
    cout<<endl;
    }
    return 0;
}
