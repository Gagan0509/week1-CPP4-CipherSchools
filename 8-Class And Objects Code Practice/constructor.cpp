#include<bits/stdc++.h>
using namespace std;


class students{
string passcode;

public:
string name;
int id;
students(){

}
// students(string passcode, string name, int id){
// //  name = n;
// //  id = i;
// this->name = name;
//  this->id = id;
//  this->passcode = passcode;
// }

students(string pascode, string name , int id) : name(name), passcode(passcode), id(id) {

}

void into(){
    cout<<" My name is "<<name <<" , my id is "<<id<<"passcode is "<<passcode<<endl;
}
void setpass(string s){
    passcode = s;
}
    
};


int main(){
students s1;
students s2("10","Gagan" , 1);
students s3;

s3 = s2;
s3.into();
// int a = 10;
// int *ptri = &a;
 students *ptrs = &s2;

cout<<(*ptrs).name<<endl;
return 0;

}