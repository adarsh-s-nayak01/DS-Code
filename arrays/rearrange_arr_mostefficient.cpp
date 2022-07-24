// C++ program for rearrange an
// array such that arr[i] = i.
#include <bits/stdc++.h>
using namespace std;

void fixArray(int arr[], int n)
{
    int i;
    for(int i=0;i<n;++i){
        if(arr[i]>=0 and arr[i]!= i){
            arr[arr[i]]=(arr[arr[i]]+arr[i])-(arr[i]=arr[arr[i]]);
        }
        else{
            i++;
        }
    }

}

// Driver Code
int main()
{
	int arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	fixArray(arr, n);

	// Print output
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

// This Code is Contributed by kothavvsaakash
