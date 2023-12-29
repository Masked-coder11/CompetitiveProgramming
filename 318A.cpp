#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    //n is odd
    long long int odds;
    long long int evens;
    if(n%2==1){
        odds = n/2 +1;
        evens = n-odds;
    }
    else{
        odds=n/2;
        evens=n/2;
    }
    
    if(k<=odds){
        cout<<2*k - 1;
    }
    else{
        k-=odds;
        cout<<2*k;
    }
    
    
    return 0;
}
