class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int len=dist.size();
        vector<double> res(len);
        for(int i=0;i<len;i++)  res[i]=(double)dist[i]/(double)speed[i];
        
        sort(res.begin(),res.end());
        
        int time=0;
        int cnt=0;
        for(int i=0;i<len;){
            
            if(res[i]==time) break;
            
            else if(((res[i]-time)>0)   ){
                cnt++;
                i++;
                time++;
            }
            else break;
        }
        return cnt;
    }
};
