#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin>>str;
    int length = str.size();
    int arrsize = (length+1)/2;
    int arr[arrsize];
    int temp;
    int j=0;
    for(int i=0; i<length; i++){
      temp = str[i];
      if(temp!=43){
        arr[j] = temp-48;
        j++;
      }
    }

    int n = sizeof(arr)/sizeof(arr[0]);
 
    // Sort array (by default in ascending order)
    sort(arr, arr + n);
 
    for (int i=0; i<arrsize ; i++) {
        if(i!=arrsize-1){
          cout << arr[i] << "+";
        }
        else {
          cout<<arr[i];
        }
    }
}