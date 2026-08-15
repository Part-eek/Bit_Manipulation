#include <bits/stdc++.h>
using namespace std;

int convert(string s){
    int n = s.length();
    int p2 = 1, num = 0;
    for(int i = n-1; i>=0; i--){
        if(s[i]=='1'){
            num+=p2;
        }
        p2=p2*2;
    }
    return num;
}

int main(){
    cout<<convert("111");
    return 0;
}