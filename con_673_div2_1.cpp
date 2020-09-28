#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl

void test()
{     
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    map<int,int>mp1;
    map<int,int>mp2;
    vector<int>arr1;
    vector<int>arr2;
    //printing 1 for mp1 and 0 for mp2
    for(int i=0;i<n;i++)
    {
        if(mp1.find(k-vec[i])!=mp1.end() && mp2.find(k-vec[i])!=mp2.end())
        {
           if(mp1[k-vec[i]]>mp2[k-vec[i]])
                cout<<"0"<<" ";
            else
            {
                cout<<"1"<<" ";
            }  
        }
        else if(mp1.find(k-vec[i])==mp1.end())
        {
            mp1[k]++;
            cout<<"1"<<" ";
        }
        else 
        {
            mp2[k]++;
            cout<<"0"<<" ";
        }

    }
    cout<<endl;
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