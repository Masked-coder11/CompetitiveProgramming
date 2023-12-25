#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        
        int x=s.length();
        if(x>10){
            s=s[0]+to_string(x-2)+s[x-1];
        }
        cout<<s<<endl;
    }
    
    return 0;
}
