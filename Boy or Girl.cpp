#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    set<char>st;
    for(int i=0;i<s.length();i++){
        st.insert(s[i]);
    }
    
    int n=st.size();
    if(n%2==1){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    
    return 0;
}
