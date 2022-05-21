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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode* tmp=head,*t=head;
        int i=1,cnt=0;
        while(tmp!=NULL && i<=k){
            tmp=tmp->next;
            i++;
            cnt++;
        }
        if(tmp==NULL){
            i=1;k=k%cnt;
            tmp=head;
            while(i<=k){
                tmp=tmp->next;
                i++;
            }
        }
        while(tmp->next!=NULL){
            tmp=tmp->next;
            t=t->next;
        }
        
        tmp->next=head;
        head=t->next;
        t->next=NULL;
        return head;
    }
};