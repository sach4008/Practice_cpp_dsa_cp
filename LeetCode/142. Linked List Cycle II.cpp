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
    ListNode *detectCycle(ListNode *head) {
        
        if (head == NULL || head->next == NULL) return NULL;
    
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(slow != NULL && fast != NULL) {
            slow = slow->next;
            if (fast->next == NULL) return NULL;
            fast = fast->next->next;
            if (slow == fast) { isCycle = true; break; }
        }

        if(!isCycle) return NULL;
        slow = head;
        while( slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};
        // unordered_set<ListNode*> s;
        // bool var=true;
        // ListNode* slow = head;
        // ListNode* ans;
        // if(head==NULL || head->next==NULL) return NULL;
        // ListNode* fast = head->next;
        // while(slow!=fast){
        //     if(fast->next==NULL || fast->next->next==NULL) return NULL;
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     s.insert(slow);
        //     if(s.find(fast)!=s.end()&&var){
        //         ans=fast;
        //         var=false;
        //     }
        // }
        // return ans;
