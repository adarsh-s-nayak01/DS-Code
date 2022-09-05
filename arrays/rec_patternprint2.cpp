#include<bits/stdc++.h>
using namespace std;
/* 
1 2 3 4 5 ' ' ' n
1 2 3 4 5 ' 'n-1
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 '' n
*/
void pattern_print(int n){
    if(n==1){cout<<1<<endl;return;}
    for(int i=1;i<=n;++i){
        cout<< i<< " ";
    }
    cout<<endl;

    pattern_print(n-1);

    for(int i=1;i<=n;++i){
        cout<< i<< " ";
    }
    cout<<endl;

}

int main(){
    pattern_print(6);
}