class Solution {
    int func(vector<int> &tops,vector<int> &bottoms){
        int n = tops.size();
        
        vector<int> freq(7,0);
        
        for(int i=0;i<n;i++){
            freq[tops[i]]++;
        }
        int m=0;
        for(int i=1;i<=6;i++) m = max(m,freq[i]);
        
        int ans = INT_MAX;
        
        for(int i=0;i<7;i++){
            if(freq[i]==m){
                int cnt = 0;
                for(int j=0;j<n;j++){
                    
                    if(tops[j]!=i && bottoms[j]!=i){
                        cnt = INT_MAX;
                        break;
                    }
                    else if(tops[j]!=i) cnt++;
                }
                ans = min(cnt,ans);
            }
        }
        return ans;
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans;
        int a = func(tops,bottoms);
        int b = func(bottoms,tops);
        ans = min(a,b);
        
        return (ans==INT_MAX ? -1:ans);
    }
};