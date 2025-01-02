#include<bits/stdc++.h>
 using namespace std;
 int main(){

     vector<int>v = {1,2,3,4,5};
     vector<int>v2 = {6,7,8,9,10};

     replace(v.begin(),v.end(),2,100);
    vector<int>:: iterator it = find(v.begin(),v.end(),4);

       if(it == v.end()){
        cout << "Not Found";
       }else{
        cout << "Found";
       }

    //  for(int x : v){
    //     cout << x << " ";
    //  }

    return 0;
 }