#include<iostream>
using namespace std;

void toggle(int &n,int i){
    n = n ^ (1<<i);
}

int main(){
 int n =13;
 toggle(n,1);
 cout<<n;
 return 0;
}