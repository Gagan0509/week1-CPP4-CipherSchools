#include<bits/stdc++.h>
using namespace std;


// itrative fun.
// int power(int base, int pow){
//     int num = 1;
//     for(int i = 0; i<pow; i++){
//         num *= base;

//     }
//     return num;

// }


// recursive fun
int power(int base, int pow){

    if(pow == 0)return 1;
    int ans = power(base , pow-1);
   return ans*base;

 }

int main(){

cout<<power(2,3);
return 0;
}