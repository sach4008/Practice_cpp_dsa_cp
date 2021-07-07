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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        int a=0;
        ListNode* head=NULL;
        ListNode* tmp=new ListNode((l1->val + l2->val)%10);
        head=tmp;
        a=(a+l1->val + l2->val)/10;
        l1=l1->next;
        l2=l2->next;
        while(l1!=NULL && l2!=NULL){
            
            tmp->next=new ListNode((l1->val + l2->val+a)%10);
            a=(a+l1->val + l2->val)/10;
            l1=l1->next;
            l2=l2->next;
            tmp=tmp->next;
        }
        
        while(l1!=NULL){
            
            tmp->next=new ListNode((l1->val + a)%10);
            a=(a+l1->val)/10;
            l1=l1->next;
            tmp=tmp->next;
        }
        while(l2!=NULL){
            
            tmp->next=new ListNode((l2->val+a)%10);
            a=(a+l2->val)/10;
            l2=l2->next;
            tmp=tmp->next;
        }
        if(a!=0){
            tmp->next=new ListNode(a%10);
        }
        return head;
    }
};
