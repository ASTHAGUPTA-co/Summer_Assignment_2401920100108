class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head;
        ListNode* dummy = NULL;
        while(temp){
            ListNode* newNode = temp;
            temp=temp->next;
            newNode->next = dummy;
            dummy=newNode;
        }
        return dummy;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newNode = reverse(slow);
        ListNode* last = newNode;
        while(last!=NULL){
            if(head->val!=last->val) return false;
            head=head->next;
            last=last->next;
        }
        reverse(newNode);
        return true;
    }
};
