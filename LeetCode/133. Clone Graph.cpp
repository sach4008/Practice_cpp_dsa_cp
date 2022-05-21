/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        map<Node*,Node*> mp;
        
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()){
            Node* tmp = q.front();
            q.pop();
            if(mp.find(tmp) != mp.end()){
                continue;
            }
            else{
                Node* res = new Node(tmp->val);
                mp.insert({tmp,res});
            }
            
            for(auto x:tmp->neighbors) q.push(x);
        }
        
        for(auto x:mp){
            for(auto y:(x.first)->neighbors){
                ((x.second)->neighbors).push_back(mp[y]);
            }
        }
        
        return mp[node];
    }
};