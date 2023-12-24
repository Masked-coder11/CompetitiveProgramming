#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int i=0;
    if(s[i]>='a' && s[i]<='z'){
        int x=s[i]-'a';
        s[i]=char('A'+x);
    }
    
    cout<<s;
    
    return 0;
}
