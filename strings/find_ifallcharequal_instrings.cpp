// C++ program for above approach
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

// Function to check is all the
// characters in string are or not
void allCharactersSame(string s)
{
    set<char> set;
    for(int i=0;i< s.length();++i)//n times
        set.insert(s[i]);//logn function
    //O(nlogn) function
    if(set.size()==1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}

// Driver code
int main()
{
	string str = "nnnn";
	allCharactersSame(str);
	return 0;
}
