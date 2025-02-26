#include<bits/stdc++.h>
using namespace std;
int gpCalc(long long x){
    for(int k=2; k>0; k++){
        int j = pow(2, k)-1;
        if(x%j==0){
            return x/j;
        }
    }
}
int main(){
    long long t;
    cin >> t;
    for(long long i=0; i<t; i++){
        long long num;
        cin >> num;
        cout<<gpCalc(num)<<"\n";
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int gpCalc(long long x){
//     long long res = 0;
//     for(long long k=2; k>0; k++){
//         res = x/(pow(2, k)-1);
//         if(x==res*(pow(2, k)-1)){
//             return res;
//         }
//     }
// }
// int main(){
//     long long t;
//     cin >> t;
//     for(long long i=0; i<t; i++){
//         long long num;
//         cin >> num;
//         cout<<gpCalc(num)<<"\n";
//     }
// }