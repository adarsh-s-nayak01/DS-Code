#include<bits/stdc++.h>
using namespace std;

//10 9 8 7 6 5 4 3 2 1
void search(vector<int>& v,int val){
    int start=0,end=v.size()-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(v[mid]==val){
            cout<<mid<<endl;return;
        }
        if(v[mid]>val){
            start=mid+1;//end=mid-1; in ascending order.
        }
        else{
            end=mid-1;//start=mid+1; in ascending order.
        }
    }
}