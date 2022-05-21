class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> pre(n+1,0);
        
        vector<int> a(n+1),b(n+1);
        b[n] = n;
        a[0] = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='|')
                b[i] = i;
            else
                b[i] = b[i+1];
        }
        for(int i=1;i<=n;i++){
            if(s[i]=='|')
                a[i]=i;
            else
                a[i]=a[i-1];
        }
        int tmp = 0;
        bool var = false;
        if(s[0]=='|')
            var = true;
        
        for(int i=1;i < n;i++){
            
            if(s[i]=='|'){
                if(var){
                    pre[i]= pre[i-1] + tmp;
                }
                var = true;
                tmp = 0;
            }
            else{
                pre[i] = pre[i-1];
                tmp++;
            }
        }
        pre[n]=pre[n-1];
        
        vector<int> ans;
        
        for(auto &x:queries){
            ans.push_back(max(pre[a[x[1]]]-pre[b[x[0]]],0));
        }
        // print(a);
        // print(b);
        // print(pre);
        // cout<<"\n\n";
        
        return ans;
    }
    
    // void print(vector<int> &v){
    //     for(auto &x:v){
    //         cout<<x<<" ";
    //     }
    //     cout<<"\n";
    // }
};
