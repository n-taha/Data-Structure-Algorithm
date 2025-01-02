#include<bits/stdc++.h>
 using namespace std;
 int main(){

    //  int n;
    //  cin >> n;

    //  vector<string> v(n);

    //  for(int i = 0 ; i < n ; i++){
    //     cin >> v[i];
    //  }

    //  for(int i = 0 ; i < n ; i++){
    //     cout << v[i] << " ";
    //  }

    // vector input with getline;

    int n;
    cin >> n;
    cin.ignore();

    vector<string>s(n);

    for(int i = 0 ; i < n ; i++){
        getline(cin , s[i]);
    }

    for(int i = 0 ; i < n ; i++){
        cout << s[i] << " ";
    }

    return 0;
 }