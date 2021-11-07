class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int cnt = 0,ans = INT_MIN;
        
        map<int,int> mp;
        
        // mp.insert({0,0});
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]) cnt++;
            else cnt--;
            
            if(cnt == 0){
                ans = max(ans,i+1);
            }
            else if(mp.find(cnt) == mp.end()){
                mp.insert({cnt,i});
            }
            else{
                ans = max(ans,i-mp[cnt]);
            }
        }
        return (ans==INT_MIN)?0:ans;
    }
};