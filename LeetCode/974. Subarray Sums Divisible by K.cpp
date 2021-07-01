class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int cnt=0;
        vector<int> sum(k,0);
        sum[0]=1;
        int prefix=0;
        for(int i=0;i<arr.size();i++){
            prefix=(prefix+arr[i]%k+k)%k;
            cnt+=sum[prefix]++;
        }
        return cnt;
    }
};

// //TLE
//         int cnt=0;
//         vector<int> sum(arr.size()+1,0);
//         for(int i=0;i<arr.size();i++){
//             sum[i+1]=sum[i]+arr[i];
//         }
//         for(int i=0;i<arr.size();i++){
//             for(int j=i+1;j<=arr.size();j++){
//                 if((sum[j]-sum[i])%k==0) cnt++;
//             }
//         }

//         return cnt;


int subarraysDivByK(vector<int>& A, int K) {
        vector<int> count(K);
        count[0] = 1;
        int prefix = 0, res = 0;
        for (int a : A) {
            prefix = (prefix + a % K + K) % K;
            res += count[prefix]++;
        }
        return res;
    }
