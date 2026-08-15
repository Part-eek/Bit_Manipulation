#include <bits/stdc++.h>
using namespace std;

string convert(int n){
    string ans="";
    while(n!=0){
        if(n%2==1) ans+='1';
        else ans+='0';
        n/=2;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    cout<<convert(7);
    return 0;
}