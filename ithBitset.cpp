#include<bits/stdc++.h>
using namespace std;
bool check(int n,int i){
    if(n & (1<<i)) return true;       //or ((n>>i)&1)
    return false;
}
int main(){
    int n = 10;
    int i = 2;
    cout<<check(n,i);
    
}