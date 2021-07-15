class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size(),n2=nums2.size();
        
        vector<int> ans(n1);
        stack<int> st;
        vector<int> res(n2);
        
        for(int i=n2-1;i>=0;i--){
            
            if(st.empty()){
                st.push(nums2[i]);
                res[i]=-1;
            }
            else{
                int x=-1;
                while(!st.empty()){
                    x=st.top();
                    if(x>nums2[i]){
                        break;
                    }
                    else{
                        x=-1;
                        st.pop();
                    }
                }
                st.push(nums2[i]);
                res[i]=x;
            }
        }
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    ans[i]=res[j];
                    break;
                }
            }
        }
        
        return ans;
    }
};
