#include<bits/stdc++.h>
using namespace std;

bool func(int count){
    string s=to_string(count);
    for(int i=0;i<s.length();i++){
        if(s[i]!='4'  && s[i]!='7'){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    
    if(count==4 || count==7 || func(count)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
