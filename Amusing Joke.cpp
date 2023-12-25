#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest;
    string host;
    string pile;
    cin>>guest>>host>>pile;
    
    vector<int>v(26,0);
    for(int i=0;i<guest.length();i++){
        v[guest[i]-'A']++;
    }
    for(int i=0;i<host.length();i++){
        v[host[i]-'A']++;
    }
    for(int i=0;i<pile.length();i++){
        v[pile[i]-'A']--;
    }
    
    
    int check=0;
    for(auto it:v){
        if(it!=0){
            cout<<"NO";
            check=1;
            break;
        }
    }
    if(check==0){
        cout<<"YES";
    }
    
    
    return 0;
}
