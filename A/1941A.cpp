#include<bits/stdc++.h>
using namespace std;
int ticketPurchase(vector<int> a, vector<int> b, int k){
    int count = 0;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]+b[j]<=k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a1, a2, k, temp;
        cin >> a1 >> a2 >> k;
        vector<int> left, right;
        for(int j=0; j<a1; j++){
            cin >> temp;
            if(temp<k){
                left.emplace_back(temp);
            }
        }
        for(int j=0; j<a2; j++){
            cin >> temp;
            if(temp<k){
                right.emplace_back(temp);
            }
        }
        cout<<ticketPurchase(left, right, k)<<"\n";
    } 
}