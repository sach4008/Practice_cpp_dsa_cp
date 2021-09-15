// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
	// using memoizations;
    int helper(int W, int wt[], int val[], int n, vector<vector<int> > &memory){
        if(n==0 || W==0){
            return memory[W][n];
        }
       
        if(wt[n-1] <= W){
            int a,b;
            if(memory[W-wt[n-1]][n-1] == -1){
                memory[W-wt[n-1]][n-1] = helper(W-wt[n-1] , wt, val, n-1, memory);
            }
            if(memory[W][n-1] == -1){
                memory[W][n-1] = helper(W, wt, val, n-1, memory);
            }
            
            return max(val[n-1] + memory[W-wt[n-1]][n-1] ,memory[W][n-1]);
        }
        else{
            if(memory[W][n-1] == -1){
                memory[W][n-1] = helper(W, wt, val, n-1, memory);
            }
            return memory[W][n-1];
        } 
    }
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int> > memory(W+1,vector<int>(n+1,-1));
       for(int i=0;i<=W;i++){
           memory[i][0] = 0;
       }
       for(int i=0;i<=n;i++){
           memory[0][i] = 0;
       }
       return helper(W, wt, val, n, memory);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
