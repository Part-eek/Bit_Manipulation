#include<iostream>
using namespace std;

int cnt(int &n){
    int cnt = 0;
    while(n!=0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

int main(){
 int n =13;
 cout<<cnt(n);
}