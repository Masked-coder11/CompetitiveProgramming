#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int final_x=0;
    int final_y=0;
    int final_z=0;
    for(int i=0;i<n;i++){
        int x, y, z;
        cin>>x>>y>>z;
        final_x += x;
        final_y += y;
        final_z += z;
    }

    if(final_x==0 && final_y==0 && final_z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}
