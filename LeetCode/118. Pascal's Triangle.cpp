// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
        
//     }
// };

// Pascal triangle
// signed integer overflow

class Solution {
public:
    int fun(int i,int j){
        long long sum=1;
        int mn=min(j,i-j),mx=max(j,i-j);
        for(int k=mx+1;k<=i;k++){
            sum*=k;
        }
        for(int k=1;k<=mn;k++){
            sum/=k;
        }
        return sum;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        if(numRows==0) return ans;
        ans.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> tmp;
            for(int j=0;j<=i;j++){
                tmp.push_back(fun(i,j));
            }
            ans.push_back(tmp);
        }
        
        return ans;
    }
};
