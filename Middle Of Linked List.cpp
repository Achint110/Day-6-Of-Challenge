class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // Method 1
    //     int count=0;
    //     ListNode* temp=head;
    //     while(temp!=NULL){
    //         count++;
    //         temp=temp->next;
    //     }
    //     count =count/2;
    //     temp=head;
       
    //    while(count--){
    //        temp=temp->next;
    //    }
    //    return temp;

        //  Method 2
        ListNode *slow=head;
       ListNode *fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=(fast->next)->next;
        }
        return slow;


    }
};