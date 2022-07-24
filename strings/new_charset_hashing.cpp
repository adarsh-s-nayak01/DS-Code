// CPP program to change the sentence
// with virtual dictionary
#include<bits/stdc++.h>
using namespace std;

// Converts str to given character set
void conversion(char charSet[], string &str)
{
    int n=str.length();

    char hashchar[26];
    for(int i=0;i<27;++i){
        hashchar[charSet[i]-'a']='a'+i;
    }
    for(int i=0;i<n;++i){
        str[i]=hashchar[str[i]-'a'];
    }
}

// Driver code
int main()
{
	char charSet[27] = "qwertyuiopasdfghjklzxcvbnm";
	string str = "egrt";
	conversion(charSet, str);
	cout << str;
	return 0;
}
