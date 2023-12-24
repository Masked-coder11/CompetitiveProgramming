#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, col;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x;
            cin>>x;
            if(x==1){
                row=i;
                col=j;
            }
        }
    }
    int ans= abs(3-row)+ abs(3-col);
    cout<<ans;
    

    return 0;
}
