#include<bits/stdc++.h>
#define ll long long

#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                (a/gcd(a,b))*b

#define pb(x)                   push_back(x)

//vectors
#define maxofvec(v)                *max_element(v.begin(),v.end())
#define minofvec(v)                *min_element(v.begin(),v.end())
#define sumof(v)                accumulate(v.begin(),v.end(),0)
#define countn(v,n)              count(v.begin(),v.end(),n) //count the occurence of the n in vec.
#define maxofarr(arr)                *max_element(arr,arr+n)
#define minofarr(arr)                *min_element(arr,arr+n)

//bit operations.
#define noLeading0sLL(x)        __builtin_clzll(x)
#define countTrailing0SLL(x)    __builtin_ctzll(x)
#define setbits(x)              __builtin_popcountll(x)//no of set bits

#define yes                     cout<<'YES'<<endl
#define no                     cout<<'NO'<<endl



using namespace std;
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i){
        cin>>a[i];
    }
    ll one=0,ct=0;bool fd=false;
    for(ll i=0;i<n-1;++i){
        if(fd){
            if(a[i]==0) one++;
        }
        if(a[i]>0){fd=true;}
        ct+=a[i];
    }
    cout<<ct+one<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}