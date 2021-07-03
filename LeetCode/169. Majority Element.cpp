class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,element;
        
        for(int x:nums){
            if(cnt==0){
                element = x;
                cnt=1;
            }
            else{
                if(x==element){
                    cnt++;
                }
                else {
                    cnt--;
                }
            }
        }
        
        return element;
    }
};



// space complexity O(n);
        // unordered_map<int,int> mp;
        // int cnt=INT_MIN,element;
        // for(int i:nums){
        //     mp[i]++;
        //     if(mp[i]>cnt){
        //         cnt=mp[i];
        //         element=i;
        //     }
        // }
        // return element;
