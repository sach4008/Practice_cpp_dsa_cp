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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *tmp,*curr;
        ListNode *ans = new ListNode(0);
        curr = ans;
        
        tmp = head->next;
        int sum = 0;
        
        while(tmp!=NULL){
            if(tmp->val == 0){
                curr -> next = new ListNode(sum);
                curr = curr->next;
                sum = 0;
            }
            else sum += tmp->val;
            tmp = tmp->next;
        }
        return ans->next;
    }
};