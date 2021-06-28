class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>> s;
    int next(int price) {
        int res = 1;
        while (!s.empty() && s.top().first <= price) {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */


//     stack<pair<int,int>> res;
//     res.push({v[0],0});
//     int len=v.size();
//     vector<int> ans(len,1);
//     pair<int,int> pr;
//     for(int i=1;i<len;i++){
//         pr=res.top();
//         while((res.empty()==false)&&(pr.first<=v[i])){
//             res.pop();
//             if(res.empty()==false) pr=res.top();
//         }
//         if(res.empty()) ans[i]=i+1;
//         else ans[i]=(i-pr.second);
        
//         res.push({v[i],i});
//     }
//     return ans;
