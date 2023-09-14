#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    char s;
    int marks;

};
int main(){
    Student a[3];
    for(int i=0;i<3;i++){
        cin>>a[i].name;
        cin>>a[i].roll>>a[i].s>>a[i].marks;
        cin.ignore();
    }
    for(int i=0;i<3;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].s<<a[i].marks<<endl;
    }

    return 0;
}