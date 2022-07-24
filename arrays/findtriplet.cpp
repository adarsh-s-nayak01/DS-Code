#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool find3numbers(int a[],int n,int sum){
    for(int i=0;i<n-2;++i){
        unordered_set<int> s;
        int curr_sum = sum-a[i];
        for(int j=i+1;j<n;++j){
            if(s.find(curr_sum-a[j]) != s.end()){
                cout<<"triplets are "<<a[i]<<" "<<a[j]<<" "<<curr_sum-a[j];
                return true;
            }
            s.insert(a[j]);
        }

    }
    return false;

}

int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3numbers(A, arr_size, sum);
    return 0;
}