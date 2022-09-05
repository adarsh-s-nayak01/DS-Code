#include<bits/stdc++.h>
using namespace std;

//always TRUST THE FUNCTION
// RECURSIVE LEAP OF FAITH
/* 
1
1 2 
1 2 3 
1 2 3 4 
' ' ' ' '
1 2 3 4 5 n
*/
void pattern_print(int n){
    if(n==0){return;}
    pattern_print(n-1);
    for(int i=1;i<=n;++i){cout<<i<<" ";}
    cout<<endl;
}

int main(){
    pattern_print(8);
}