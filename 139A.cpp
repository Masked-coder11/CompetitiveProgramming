#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int>pages;
    int sum=0;
    for(int i=0;i<7;i++){
        int z;
        cin>>z;
        
        pages.push_back(z);
        sum+=z;
    }
    
    n=n % sum;
    
    // if(n==0){
    //     for(int i=6;i>=0;i--){
    //         if(pages[i]!=0){
    //             cout<<i+1;
    //             break;
    //         }
    //     }
    //     return 0;
    // }
    
    int i=0;
    while(n>=0){
        if(pages[i] >= n){
            cout<<i+1;
            break;
        }
        // cout<<n<<" "<<i<<endl;
        n-=pages[i];
        i++;
    }        
    
    return 0;
}
