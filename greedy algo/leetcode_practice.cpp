#include <bits/stdc++.h>
using namespace std;

int fillCups(vector<int> &a)
{
    int ct = 0;
    sort(a.begin(), a.end());
    int n = a.size();
    while (a[n - 1] != 0)
    {
        if (a[n - 2] != 0)
        {
            --a[1];
            --a[2];
            ct++;
        }
        else
        {
            ct += a[2];
            break;
        }
        sort(a.begin(), a.end());
    }
    return ct;
}
int longestPalindrome(string s){
    int tot=0;
    int n=s.size();
    map<char,int> m;
    for(int i=0;i<n;++i){
        m[s[i]]++;
    }
    int ones=0;
    for(auto &it:m){
        if(it.second==1){
            ones++;
        }
        else{
            if(it.second&1){ones++;--it.second;}
            tot+=it.second;
        }
    }
    if(ones!=0){cout<<tot+1<<endl;}
    else{cout<<tot<<endl;}
}
int findContentChildren(vector<int>& g, vector<int>& s) {
    int ct=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i=0;
    for(int j=0;j<s.size();++j){
        if(i<g.size()){
            if(s[j]>=g[i]){
                i++;ct++;
            }
        }
        else{
            break;
        }
    }
    return ct;
}
bool canThreePartsEqualSum(vector<int>& arr) {
    int sum=accumulate(arr.begin(),arr.end(),0);
    if(sum%3!=0) return false;
    
    bool firstfound=false,secondfound=false,thirdfound=false;
    int subsum=sum/3;
    int prefixsum=0;
    for(auto ele:arr){
        prefixsum+=ele;
        if(!firstfound and prefixsum==subsum) firstfound=true;
        else if(firstfound and !secondfound and prefixsum==2*subsum) secondfound=true;
        else if(firstfound and secondfound and prefixsum==3*subsum) thirdfound=true;

    }
    return (firstfound && secondfound && thirdfound);
}
int maxMeetings(int start[], int end[], int n){
    map<int,int> m;
    for(int i=0;i<n;++i){
        m[end[i]]=start[i];
    }
    int ct=0;int prev;
    ct++;
    auto it=m.begin();
    prev=it.first;
    for(it=++m.begin();it!=m.end();++it){
        if((*it).second<prev){
            ct++;
            prev=it.first;
        }
    }
    return ct;
        
}
bool lemonadeChange(vector<int>& bills) {
    int five=0,ten=0;
    for(auto i:bills){
        if(i==5) five++;
        else if(i==10) five--,ten++;
        else if(ten>0) ten--,five--;
        else five-=3;
        if(five<0) return false;
    }
    return true;
}

bool canPlaceFlowers(vector<int>& f, int n) {
    if(f[0]==0 and f[1]==0){
        --n;
        f[0]=1;
    }
    for(int i=1;i<f.size()-2;++i){
        if(f[i]==0){
            if(f[i-1]==0 and f[i+1]==0){n--;}
        }
    }    
    if(n<=0) return  true;
    return false;  
}






















