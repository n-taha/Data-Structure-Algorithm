#include<bits/stdc++.h>
 using namespace std;
 int main(){

     int n;
     cin >> n;

     vector<int>v(n);

     for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
     }

     vector<int>pre(n + 1);
      pre[1] = v[1];

     for(int i = 2 ; i <= n ; i++){
         pre[i] = pre[i-1] + v[i];
     }

     for(int i = 1 ; i <= n ; i++){
        cout << pre[i] << " ";
     }



    return 0;
 }