#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

bool containsCycle(node *head){
    //Complete this function 
    if(head==NULL||head->next==NULL) return false;
    node* slow=head;
    node* fast=head->next;
    
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
        if(fast==NULL) return false;
        fast=fast->next;
        if(fast==NULL) return false;
    }
    return true;
}
