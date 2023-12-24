#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, ans="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            ans=ans+"0";
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                ans+='1';
            }
            else{
                ans+='2';
            }
            i++;
        }
    }
    cout<<ans;
    
    

    return 0;
}
