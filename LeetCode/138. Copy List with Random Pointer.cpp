/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL) return NULL;
        Node* tmp=head;
        
        while(tmp!=NULL){
            Node* temp = new Node(tmp->val);
            temp->next=tmp->next;
            tmp->next=temp;
            tmp=tmp->next->next;
        }
        
        tmp=head;
        while(tmp!=NULL){
            if(tmp->random!=NULL) tmp->next->random=tmp->random->next;
            else tmp->next->random=NULL;
            
            tmp=tmp->next->next;
        }
        Node* ans=head->next;
        tmp=head;
        while(tmp!=NULL){
            
            Node* a=tmp->next;
            tmp->next=tmp->next->next;
            
            if(a->next!=NULL) a->next=a->next->next;
            
            tmp=tmp->next;
        }
        
        return ans;
    }
};


////  Time complexity O(n)  space complexity O(n)
// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
        
//         if(head==NULL) return NULL;
//         Node* tmp=head;
//         unordered_map<Node*,Node*>  mpp;
//         mpp.insert({NULL,NULL});
//         while(tmp!=NULL){
//             Node* temp = new Node(tmp->val);
//             mpp.insert({tmp,temp});
//             tmp=tmp->next;
//         }
//         tmp=head;
//         while(tmp!=NULL){
//             mpp[tmp]->next=mpp[tmp->next];
//             mpp[tmp]->random=mpp[tmp->random];
//             tmp=tmp->next;
//         }
        
//         return mpp[head];
//     }
// };
