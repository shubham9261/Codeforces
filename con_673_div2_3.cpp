#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
int pres(vector<int>&vec,int k, map<int,int> &mp)
{
    int n=vec.size();
    for(int i=0;i<k;i++)
        mp[vec[i]]++;
    for(int i=k;i<n;i++)
    {
        if(mp.find(vec[i])!=mp.end())
            continue;
        int ind=i-k;
        mp.erase(vec[ind]);

    }
    return (int)mp.size();
}
void test()
{     
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    int low=1;
    int high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        map<int,int>mp;
        if(low==high)
        {
            if(pres(vec,mid,mp))
            {
                int val=(mp.begin())->first;
                for(int i=0;i<mid;i++)
                    cout<<"-1 ";
                for(int i=mid;i<n;i++)
                    cout<<val<<" ";
                cout<<endl;
                return;
            }
            else
            {
                for(int i=0;i<n;i++)
                    cout<<"-1 ";
                cout<<endl;
                return;
            }
            
        }
        if(pres(vec,mid,mp)>0)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mp.clear();
    }
    
    for(int i=0;i<n;i++)
        cout<<"-1 ";
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