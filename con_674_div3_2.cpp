#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl

void test()
{     
    int n,k;
    cin>>n;
    int m;
    cin>>m;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b==c)
            flag=1;
    }
    if(m%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(flag)
        {
            cout<<"YES"<<endl;
            return;
        }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
    
    
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    freopen("../output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}