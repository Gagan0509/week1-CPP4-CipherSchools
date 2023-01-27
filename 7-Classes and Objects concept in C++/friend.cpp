#include<bits/stdc++.h>
using namespace std;

class students{
string passcode;
friend class bestfriend;
protected:

int age;
public:
string name;
int id;

void into(){
    cout<<"MY name is "<<name<<" , my id is "<<id<<" passcord is "<<passcode<<endl;
}
void setPass(string s, int a){
    passcode = s;
    age = a;
}
friend void hacker(students s);

 
};

void hacker(students s){
    cout<<s.passcode<<" "<<s.age<<endl;
}
class bestfriend{
    public :
  void sharingsecret(students s){
    cout<<s.passcode<<s.age<<endl;;
  }

};

int main() {
students s1;

s1.setPass("001");
bestfriend bff;
hacker(s1);
bff.sharingsecret(s1);

return 0;

}