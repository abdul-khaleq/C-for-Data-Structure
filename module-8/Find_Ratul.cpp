#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int ratul = 0;
    while (ss>>word){
        if(word == "Ratul"){
        ratul = 1;
        break;
        }
    }
    if(ratul){
    cout<<"YES";
    }else{
       cout<<"NO"; 
    }
    
  return 0;
}