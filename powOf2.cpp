#include<iostream>
using namespace std;

bool powOf2(int &n,int i){
    if((n&(n-1)) == 0) return true;
    return false;
}

int main(){
 int n =8;
 cout<<powOf2(n,2);
 
 return 0;
}