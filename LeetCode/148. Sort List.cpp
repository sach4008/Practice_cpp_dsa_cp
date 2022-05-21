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
    ListNode* findMid(ListNode* node){
        if(node==NULL || node->next==NULL) return node;
        
        ListNode *slow = node, *fast = node->next->next;
        
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        if(l1->val  > l2->val){
            swap(l1,l2);
        }
        ListNode* head=l1;
        
        while(l1!=NULL && l2!=NULL){
            ListNode* tmp=NULL;
            while(l1!=NULL && l1->val <= l2->val){
                tmp=l1;
                l1=l1->next;
            }
            tmp->next=l2;
            
            swap(l1,l2);
        }
        
        return head;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* mid = findMid(head);
        ListNode* l1 = NULL;
        if(mid!=NULL){
            l1 = sortList(mid->next);
            mid->next = NULL;
        }
        ListNode* l2 = sortList(head);
        
        head = merge(l1,l2);
        
        return head;
    }
};