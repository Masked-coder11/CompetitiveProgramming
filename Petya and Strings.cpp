#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            int x=s1[i]-'a';
            s1[i]=char('A'+x);
        }
    }
    
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='a' && s2[i]<='z'){
            int x=s2[i]-'a';
            s2[i]=char('A'+x);
        }
    }
    
    if(s1<s2){
        cout<<"-1";
    }
    else if(s2 < s1){
        cout<<'1';    
    }
    else{
        cout<<'0';
    }
    
    return 0;
}
