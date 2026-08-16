#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 9;
    int b = 8;
    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}