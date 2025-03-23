// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int s;
//     cin >> s;
//     int sum = 0, temp, odd = 0;
//     for(int i=0; i<s; i++){
//         cin >> temp;
//         sum+=temp;
//         if(temp==3){
//             odd++;
//         }
//     }
//     if(sum%4!=0){
//         cout<<(sum/4)+1;
//     }
//     else if(odd>=s-1 && s>2){
//         cout<<s;
//     }
//     else {
//         cout<<sum/4;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int g, temp, count = 0, sg = 0;
    cin >> g;
    unordered_map<int, int> ss(g);
    for(int i=0; i<g; i++){
        int p;
        cin >> p;
        ss[p]++;
    }

    count+=ss[4]; 
    count+=ss[3];
    ss[1]=max(0, ss[1] - ss[3]);
    count+=ss[2]/2;
    if(ss[2]%2!=0){
        count++;
        ss[1] = max(0, ss[1] - 2);
    } 
    count+=(ss[1]+3)/4;
    cout<<count;
}