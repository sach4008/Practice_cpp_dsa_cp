
// O(n) time complexity


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int len=arr.size();
        if(len<3) return 0;
        int maxsize=0,prev=0,next=0;
        for(int i=1;i<=len-2;){
            if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
                prev=0;int x=i;next=0;
                while((x>=1)&&(arr[x]>arr[x-1])){
                    prev++;x--;
                }
                while((i<=len-2)&&(arr[i]>arr[i+1])){
                    next++;i++;
                }
                maxsize=max(maxsize,prev+next+1);
            }
            else i++;
        }
        return maxsize;
    }
};
