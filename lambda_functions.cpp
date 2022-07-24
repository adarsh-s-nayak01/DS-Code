#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x>0;
}


int main(){
    //lambda function examples.
    cout<< [](int x){return x*2;}(5)<<endl;

    auto sum = [](int x,int y){return x+y;};
    cout<<sum(8,5)<<endl;

    //all of function.
    vector<int> v={2,3,5};
    //lambda function.
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
    //normal function.
    cout<<all_of(v.begin(),v.end(),is_positive);
    cout<<endl;


    //any of function.
    cout<< any_of(v.begin(),v.end(),[](int x){return x>0;});
    //even if one ele is pos return 1 
    // if all are negative then 0

    //none of function.
    //returns only if none of the elements match the given condition.
    // cout<<none_of(v.begin(),v,end(),[](int x){return x>0;});



    


}