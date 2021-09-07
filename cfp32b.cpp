#include <bits/stdc++.h>
using ll= long long;
using namespace std;
int main(){
    ll n,cnt=1,mx=0;
    cin>>n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll base =a[0];
    for(ll i=1;i<n;i++)
    {
        if(a[i]-base <= 1)
        {
            cnt++;
        }
        
        else{
            mx=max(mx,cnt);
            base=a[i];
            cnt=1;
        }
    }
   if(mx<cnt)
   cout<<cnt;
   else
    cout<<mx;
    return 0;
}