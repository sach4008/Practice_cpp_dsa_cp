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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = new ListNode(101);
        prev->next = head;
        ListNode* ptr = prev;
        head = prev;
        
        while(ptr!=NULL && ptr->next!=NULL){
            if(ptr->val == ptr->next->val){
                int a = ptr->val;
                while(ptr->next!=NULL && ptr->val == ptr->next->val){
                    ptr->next = ptr->next->next;
                }
                prev->next = ptr->next;
                ptr = ptr->next;
            }
            else{
                prev = ptr;
                ptr = ptr->next;
            }
        }
        
        return head->next;
    }
};