#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int x=0;x<n-1;x++){
            if(s[x]=='B' && s[x+1]=='G'){
                s[x]='G';
                s[x+1]='B';
                x++;
            }
        }
    }
    
    cout<<s;
    
    

    return 0;
}
