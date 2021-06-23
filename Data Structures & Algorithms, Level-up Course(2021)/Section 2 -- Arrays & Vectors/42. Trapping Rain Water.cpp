
// O(n) solution


class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int len=height.size();
        if(len<3) return 0;
        vector<int> left(len,0), right(len,0);
        left[0] = height[0];
     	right[len-1] = height[len-1];
        
        int a=0,b=1;
        for(int i=1;i<len;i++){
            left[i] = max(left[i-1],height[i]);
     		right[len-i-1] = max(right[len-i],height[len-i-1]);
        }
        for(int i=0;i<len;i++){
 		    water += min(left[i],right[i]) - height[i];
 	    }
        
        return water;
    }
};
