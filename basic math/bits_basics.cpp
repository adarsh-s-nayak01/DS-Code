#include<bits/stdc++.h>
#define ll long long
using namespace std;

void print_binary(int num){
    for(int i=10;i>=10;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main()
{
    int a=9;
    print_binary(a);
    int i=3;;//checking if i'th bit is set or not
    if(a & (1<<i) == 0){cout<<"not set"<<endl;}
    else{cout<<"set"<<endl;}

    char c='A';
    char d= c | (1<<5);//will set 5th bit and will make it lowercase
    cout<<d<<endl;

    char e='a';
    char f= e & ~(1<<5);
    cout<<f<<endl; 
    
    
}