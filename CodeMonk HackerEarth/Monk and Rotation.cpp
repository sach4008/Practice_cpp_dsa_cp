/*

https://www.hackerearth.com/practice/codemonk/

problem link above

// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,k;
    cin>>n>>k;

    k=k%n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}

int main()
{
	ll test=1;
	cin>>test;

	while(test--){
		solve();
	}

	return 0;
}
