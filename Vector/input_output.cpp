#include<bits/stdc++.h>
using namespace std;
int main(){

  // vector input ike array;

    // int n;
    // cin >> n;

    // vector<int> v(n);

    // for(int i = 0 ; i < n ; i++){
    //     cin >> v[i];
    // }

    // for(int i = 0 ; i < n ; i++){
    //     cout << v[i] << " ";
    // }


    // vector input with push back;


  vector<int>c;
  int n;
  cin >> n;

  for(int i = 0 ; i < n ; i++){
    int x;
    cin >> x;
    c.push_back(x);
  }

  for(int i = 0 ; i < n ; i++){
    cout << c[i] << " ";
  }


    return 0;
}