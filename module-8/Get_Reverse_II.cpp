#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
};

int main() {
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].nm;
        cin>>a[i].cls>>a[i].s>>a[i].id;
        cin.ignore();
    }
  int aa = 0;
  int bb = n-1;
  while (aa < bb) {
    swap(a[aa].id, a[bb].id);
    aa++;
    bb--;
  }
    for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
  return 0;
}