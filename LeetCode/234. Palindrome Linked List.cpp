/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        stack<ListNode*> stt;
        if(head==NULL) return true;
        while(fast!=NULL && fast->next!=NULL){
            stt.push(slow);
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL && fast->next==NULL){
            slow=slow->next;
        }
        while(stt.empty()!=true){
            ListNode* tmp=stt.top();
            stt.pop();
            if(tmp->val != slow->val) return false;
            
            slow=slow->next;
            if(slow==NULL) break;
        }
        
        return true;
    }
};



// class Solution {
// public:
//     bool ans=true;
//     void compare(ListNode* pt,ListNode* st){
//         if((pt->val)!=(st->val)) ans=false;
//     }
    
//     ListNode* iterato(ListNode* pt,ListNode* st){
//         if(pt->next==NULL){
//            if((pt->val)!=(st->val)) ans=false;
//             return st->next;
//         }
//         ListNode* rt=iterato(pt->next,st);
//         compare(pt,rt);
//         return rt->next;
//     }
    
//     bool isPalindrome(ListNode* head) {
//         ListNode* rt=iterato(head,head);
//         return ans;
//     }
// };
