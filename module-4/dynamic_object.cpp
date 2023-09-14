#include<bits/stdc++.h>
using namespace std;
class Student {
  public:
  char name[100];
  float height;
  int age;
    Student(char* nm, float hig,int ag) {
      strcpy(name, nm);
      height = hig;
      age = ag;
    }
};

int main() {
    char name[100]="Abdul Khaleq";
    char name2[100]="AK";
  Student* abdulKhaleq = new Student(name, 5.9, 24);
  Student* ak = new Student(name2, 5.9, 25);
  if(abdulKhaleq->age > ak->age){
    cout<<abdulKhaleq->age<<endl;
  }else{
    cout<<ak->age<<endl;
  }

  return 0;
}