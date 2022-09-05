#include<bits/stdc++.h>
#define ll long long
using namespace std;




//O(n^2) solution
void printRotatedString(string &str){
    for(int i=0;i<str.length();++i){
        cout<<str<<endl;
        char rem=str[0];
        int j;
        for( j=0;j<str.length()-1;++j){
            str[j]=str[j+1];
        }
        str[j]=rem;
    }
    
}


int main()
{
    string str = "geeks";
    printRotatedString(str);
    return 0;
}
