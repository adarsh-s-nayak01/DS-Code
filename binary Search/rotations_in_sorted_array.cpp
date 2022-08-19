#include<bits/stdc++.h>
using namespace std;

//no of rotations the sorted array has seen--anti-clockwise.
//it breaks down to the problem of finding the index of the minimum value.
//return the index of the minimum index.
int no_of_rotations(vector<int> v){
    int start=0,end=v.size()-1;
    int n=v.size()-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        int prev= (mid+n-1)%n;
        int next=(mid+1)%n;
        if(v[mid]<=v[prev] && v[mid]<=v[next])
            return mid;
        if(v[start]<v[mid]){start=mid+1;}
        else if(v[end]>v[mid]){end=mid-1;}
    }
}