#include<iostream>
using namespace std;

void clear(int &n,int i){
    n = n & ~(1<<i);
}

int main(){
 int n =13;
 clear(n,2);
 cout<<n;
 return 0;
}