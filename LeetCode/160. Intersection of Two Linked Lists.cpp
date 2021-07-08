/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* a=headA;
        ListNode* b=headB;
        
        while(a!=b){
            
            a=(a==NULL ? headB : a->next);
            b=(b==NULL ? headA : b->next);
        }
        return a;
        
    }
};



    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     unordered_set< ListNode* > st;
    //     ListNode* tmp=headA;
    //     while(tmp!=NULL){
    //         st.insert(tmp);
    //         tmp=tmp->next;
    //     }
    //     tmp=headB;
    //     while(tmp!=NULL){
    //         if(st.find(tmp)!=st.end()){
    //             return tmp;
    //         }
    //         tmp=tmp->next;
    //     }       
    //     return NULL;
    // }
