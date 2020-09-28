#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl

void test()
{     
    int n,k;
    cin>>n;
    int x;
    cin>>x;
    int i=1;
    int val=2;
    while(true)
    {
        if(val>=n)
        {
            cout<<i<<endl;
            return;
        }
        i++;
        val+=x;
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