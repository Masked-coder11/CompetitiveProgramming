#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int zero=0, five=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==0) zero++;
        else five++;
    }
    if(zero==0){
        cout<<"-1";
    }
    else if(five < 9){
        cout<<"0";
    }
    else{
        int x= five%9;
        five-=x;
        string ans="";
        for(int i=0;i<five;i++){
            ans+='5';
        }
        for(int i=0;i<zero;i++){
            ans+='0';
        }
        cout<<ans;
    }
    
    
    return 0;
}
