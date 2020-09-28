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
    int ans=0;
    mp[0]=-1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        sum+=m;
        if(mp.find((-1)*(m))!=mp.end())
        {
            ans++;
        }
        mp[sum]++;
    }
    cout<<ans<<endl;
    
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    freopen("../output.txt", "w", stdout);
#endif
    int t = 1;
   //  cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}