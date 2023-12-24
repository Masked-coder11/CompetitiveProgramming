#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    
    n+=1;
    
    while(true){
        string s=to_string(n);
        int check=0;
        sort(s.begin(), s.end());
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                check++;
                break;
            }
        }
        if(check==0){
            cout<<n;
            break;
        }
        else{
            n+=1;
        }
    }
    
    
    
    

    return 0;
}
