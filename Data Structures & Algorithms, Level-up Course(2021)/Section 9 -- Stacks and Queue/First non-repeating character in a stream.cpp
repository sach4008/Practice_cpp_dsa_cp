///// GFG question;


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string S){
		    // Code here
		    
            queue<char> q;
            // vector<char> ans;
            string ans;
            int len=S.size();
            int arr[26]={};
            for(int i=0;i<len;i++){
                q.push(S[i]);
                arr[S[i]-'a']++;
                
                while (!q.empty() && arr[q.front()-'a']>1 ) q.pop();
                
                if (!q.empty()) ans+=q.front();
                else ans+="#";
            }
            return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
