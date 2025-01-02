#include<bits/stdc++.h>
 using namespace std;
 int main(){

     vector<int>v = {1,2,3,4,5};
     vector<int>v2;
     vector<int>v3 = {10 , 223 , 45, 43 };
     v2 = v;

    //  v2.pop_back();

    //  v2.insert(v2.begin()+2 , 10);
    // v2.insert(v2.begin()+3 , v3.begin() , v3.end());

    v2.erase(v2.begin()+1 , v2.end()-1);



     for(int x : v2){
        cout << x << " ";
     }

    return 0;
 }