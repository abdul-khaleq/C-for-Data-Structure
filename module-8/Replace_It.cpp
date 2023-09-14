#include<bits/stdc++.h>
using namespace std;
int main() {
int size;
cin>>size;
for(int i=1; i<=size; i++){
string s;
string x;
cin>>s;
cin>>x;
int len= x.size();
while (s.find(x)!=-1){
  s.replace(s.find(x), len, "$");
};
cout<<s<<endl;
}

  return 0;
}