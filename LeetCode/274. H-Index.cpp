class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        
        int ans, n= citations.size();
        
        // if(citations[0]>=n)
        //     ans = n;
        
        for(int i=0;i<n;i++){
            while(i+1<n && citations[i]==citations[i+1])
                i++;
            
            int freq = upper_bound(citations.begin(),citations.end(),citations[i]) - lower_bound(citations.begin(),citations.end(),citations[i]);
            int up = n-(upper_bound(citations.begin(),citations.end(),citations[i])-citations.begin());
            
            if(citations[i]>up){
                // cout<<i<<" "<<up<<"\n";
                ans = min(citations[i],up+freq);
                break;
            }
            if(citations[i]<=up+freq)
                ans = citations[i];
        }
        
        return ans;
    }
};
