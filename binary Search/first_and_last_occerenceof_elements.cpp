#include<bits/stdc++.h>
using namespace std;

// find the first occurence of the element in the sorted array
// it'll return the index of the the first occurence.
int first_occurence(vector<int>& arr,int ele){
    int start=0,end=arr.size()-1;

    int index=-1;//if -1 is returned at the end , then the element doesn't exist.

    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==ele){
            index=mid;
            end=mid-1;//*************
        }
        else if(arr[mid]>ele){
            end=mid-1;
        }
        else start=mid+1;
    }
    return index;
}

//find the last occurences of the element in the sorted array.
//it'll return the index of the last occurence.
int last_occurence(vector<int>& arr, int ele){
    int start=0,end=arr.size()-1;
    int index=-1;
    while(start<=end){
        int mid= start + (end-start)/2;
        if(arr[mid]==ele){
            index=ele;
            start=mid+1;//**********
        }
        else if(arr[mid]>ele){
            end=mid-1;
        }
        else start=mid+1;
    }
    return index;
    
}


int main(){

}