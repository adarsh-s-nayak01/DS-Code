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
    ll n,l,r;cin>>n>>l>>r;
    // if(r-l+1<n){cout<<"NO"<<endl;return;}
    
    vector<ll> v;ll ct=0;
    for(ll i=1;i<=n;++i){
        ll val=r-r%i;
        if(val<l || val>r){cout<<"NO"<<endl;return;}
        else{
            v.push_back(r-r%i);
        }
    }
    cout<<"YES"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    } 
    cout<<endl;
    

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