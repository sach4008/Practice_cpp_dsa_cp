class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1; 
        vector<int> numbers; 
        for(int i = 1;i<n;i++) {
            fact = fact * i; 
            numbers.push_back(i); 
        }
        numbers.push_back(n); 
        string ans = ""; 
        k = k - 1; 
        while(true) {
            ans = ans + to_string(numbers[k / fact]); 
            numbers.erase(numbers.begin() + k / fact); 
            if(numbers.size() == 0) {
                break; 
            }
            
            k = k % fact; 
            fact = fact / numbers.size();
        }
        return ans; 
    }
};


// class Solution {
// public:
//     string getPermutation(int n, int k) {
//         int arr[] = { 1,2,3,4,5,6,7,8,9};
//         while(--k){
//             next_permutation(arr, arr + n);
//         }
//         string ans;
//         for(int i=0;i<n;i++){
//             ans+=to_string(arr[i]);
//         }
//         return ans;
//     }
// };
