class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st; 
        int maxA = 0; 
        int n = heights.size(); 
        for(int i = 0;i<=n;i++) {
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop(); 
                int width; 
                if(st.empty()) width = i; 
                else width = i - st.top() - 1; 

                // cout << i << " " << width << " " << height << endl; 
                maxA = max(maxA, width * height); 
            }
            st.push(i); 
        }
        return maxA;
    }
};




// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
        
//     }
// };


// // two pass solution
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size(); 
//         stack<int> st; 
//         int leftSmall[n], rightSmall[n];
//         for(int i = 0;i<n;i++) {
//             while(!st.empty() && heights[st.top()] >= heights[i]) {
//                 st.pop(); 
//             }
            
//             if(st.empty()) leftSmall[i] = 0; 
//             else leftSmall[i] = st.top() + 1; 
//             st.push(i); 
//         }
        
//         // clear the stack to be re-used
//         while(!st.empty()) st.pop(); 
        
//         for(int i = n-1;i>=0;i--) {
//             while(!st.empty() && heights[st.top()] >= heights[i]) {
//                 st.pop(); 
//             }
            
//             if(st.empty()) rightSmall[i] = n-1; 
//             else rightSmall[i] = st.top() - 1;
            
//             st.push(i); 
//         }
        
//         int maxA = 0; 
//         for(int i = 0;i<n;i++) {
//             maxA = max(maxA, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
//         }
//         return maxA; 
//     }
// };
