#include<bits/stdc++.h>
 using namespace std;
 int main(){

     int n;
     cin >> n;

     vector<int> v(n);

     for(int i = 0; i < n ; i++){
        cin >> v[i];
     }
     int value;
     cin >> value;

      bool flag = false;
     int l = 0;
     int r = n - 1;


     while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] == value){
            flag = true;
            break;
        }
        else if(v[mid] < value){
            l = mid + 1;
        }
        else {
            if(v[mid] > value){
              r = mid - 1;
            }
        }
     }

     if(flag){
        cout << "Found" << endl;
     }else{
        cout << "Not Found";
     }
    return 0;
 }