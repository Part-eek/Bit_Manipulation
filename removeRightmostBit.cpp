#include<iostream>
using namespace std;

void removeRightmost(int &n,int i){
    n = n & (n-1);
}

int main(){
 int n =13;
 removeRightmost(n,2);
 cout<<n;
 return 0;
}