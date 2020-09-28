#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl

void test()
{     
    int n,k;
    cin>>n;
    map<int,int>mp;
    int val1=ceil((float)sqrt(n));
    int val2=sqrt(n);
    if(val2*val2>=n)
    {
        cout<<val2-1+ceil((float)(n-val2)/val2)<<endl;
        return;
    }
    if(val1*val1>=n)
    {
        cout<<val1-1+ceil((float)(n-val1)/val1)<<endl;
        return;
    }
    // int ans1=val1-1+(n-val1)/val1;
    // int ans2=val2-1+(n-val2)/val2;
   // cout<<min(ans1,ans2)<<endl;
    
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