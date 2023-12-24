// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    
    string s1, s2;
    cin>>s1>>s2;
    
    string ans="";
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            ans+='1';
        }
        else{
            ans+='0';
        }
    }
    
    cout<<ans;
    
    return 0;
}
