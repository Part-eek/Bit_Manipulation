#include<iostream>
using namespace std;

void set(int &n,int i){
    n = n | (1<<i);
}

int main(){
 int n =9;
 set(n,2);
 cout<<n;
 return 0;
}