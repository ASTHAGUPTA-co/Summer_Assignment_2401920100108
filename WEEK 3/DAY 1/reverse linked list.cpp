class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = NULL;
        ListNode* temp = head;
        while(temp){
            ListNode* newNode = temp;
            temp=temp->next;
            newNode->next=dummy;
            dummy=newNode;
        }
        return dummy;
    }
};
