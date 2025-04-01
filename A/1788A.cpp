#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, count_two = 0, count_one = 0, temp=0;
        cin >> n;
        vector<int> h(n);
        for(int j=0; j<n; j++){
            cin >> h[j];
            if(h[j]==2){
                count_two++;
            }
            else {
                count_one++;
            }
        }
        if(count_two%2==1){
            cout<<"-1\n";
        }
        else if(count_two%2==0 && count_two>0){
            for(int k=0; k<n; k++){
                if(h[k]==2){
                   temp++;
                }
                if(temp==count_two/2){
                    temp=k+1;
                    break;    
                }
            }
            cout<<temp<<"\n";
        }
        else {
            cout<<"1\n";
        }
    }
}