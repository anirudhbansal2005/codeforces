    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int s, l, mx , mn, mnb=INT_MAX;
        cin >> s >> l;
        vector<int> a(l);
        for(int i=0; i<l; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i=0; i<l-s+1; i++){
            mx = *max_element(a.begin()+i, a.begin()+s+i);
            mn = *min_element(a.begin()+i, a.begin()+s+i);
            mnb = min(mnb, mx-mn);
        }
            cout<<mnb;
    }