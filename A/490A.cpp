#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, temp;
    int coun1=0, count2 = 0, count3 = 0;
    cin >> l;
    vector<int> a, b, c;
    for (int i = 0; i < l; i++){
        cin >> temp;
        if(temp==1){
            coun1++;
            a.push_back(i+1);
        }
        else if(temp==2){
            count2++;
            b.push_back(i+1);
        }
        else if(temp==3){
            count3++;
            c.push_back(i+1);
        }
    }

    int minCount = min({coun1, count2, count3});
    cout<<minCount<<"\n";
    for (int i = 0; i < minCount; i++) {
        cout << a[i] << " " << b[i] << " " << c[i] << "\n";
    }
       
}