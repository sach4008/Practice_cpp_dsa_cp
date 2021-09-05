// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int maxi(int a,int b){
        if(a>b) return a;
        
        return b;
    }
    bool static com(pair<int ,int> a,pair<int,int> b){
        if(a.first == b.first){
            return a.first < b.second;
        }
        
        return a.first < b.first;
    }
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int , int> > pr(n);
    	
    	for(int i=0;i<n;i++){
    	    pr[i].first = arr[i];
    	    pr[i].second = dep[i];
    	}
    	sort(pr.begin(),pr.end(),com);
    	
        priority_queue<int,vector<int> ,greater<int> > pq;
        
        int ans = 0;
        pq.push(pr[0].second);
        
        for(int i=1;i<n;i++){
            
            int tmp = pq.top();
            
            while((!pq.empty()) && (tmp < pr[i].first )){
                pq.pop();
                if(!pq.empty()) tmp = pq.top();
                else tmp = INT_MAX;
            }
            pq.push(pr[i].second);
            
            ans = maxi( ans , pq.size());
        }
        return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
