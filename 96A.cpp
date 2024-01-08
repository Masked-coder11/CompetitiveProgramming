#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;cin>>s;
    
    int n=s.length();
    int i=0,j=0;
    int check=0;
    while(j<n){
        while(s[j]==s[i]){
            j++;
        }
        if(j-i >= 7){
            check=1;
            break;
        }
        i=j;
    }
    if(check==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    
    
    return 0;
}
