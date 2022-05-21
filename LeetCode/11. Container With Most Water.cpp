class Solution {
public:
    int maxArea(vector<int>& height) {
        /*long long area=INT_MIN;
        int len=height.size();
        for(int ptr1=0;ptr1<len;ptr1++){
            for(int ptr2=len-1;ptr2>ptr1;ptr2--){
                if(height[ptr1]>height[ptr2]){
                    if(height[ptr2]*(ptr2-ptr1)>area){
                        area=height[ptr2]*(ptr2-ptr1);
                    }
                    continue;
                }
                if(height[ptr1]*(ptr2-ptr1)>area){
                    area=height[ptr1]*(ptr2-ptr1);
                }
            }
        }
        return area;*/
        int j=height.size()-1,i=0,area=INT_MIN;
        
        while(i<j){
            area=max(area,((j-i)*(min(height[i],height[j]))));
            
            if(height[i]<height[j])
             i++;
             else if(height[i]>=height[j])
             j--;
        }
        return area;
    }
};