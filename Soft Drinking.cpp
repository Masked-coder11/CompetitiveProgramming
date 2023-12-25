#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int drink=k*l/nl;
    int slices=c*d;
    int salt=p/np;
    
    drink=drink/n;
    slices/=n;
    salt/=n;
    
    cout<<min(drink, min(slices,salt));
    
    return 0;
}
