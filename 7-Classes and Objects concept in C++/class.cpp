#include<bits/stdc++.h>
using namespace std;

class students{
string passcode;

public:
string name;
int id;

void into(){
    cout<<"MY name is "<<name<<" , my id is "<<id<<" passcord is "<<passcode<<endl;
}
void setPass(string s){
    passcode = s;
}


};


int main() {
students s1;
s1.name = "Gagan";
s1.id = 1;
s1.setPass("001");
s1.into();

return 0;

}