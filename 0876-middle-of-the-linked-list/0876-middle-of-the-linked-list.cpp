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
    ListNode* middleNode(ListNode* head) {
        
        ListNode *hare;
        ListNode *tortoise;
        hare=tortoise=head; // every pointer pointing to head;// 1st element
        
        while(hare&&hare->next!=NULL)
        {
            hare=hare->next->next;  // if next not null so next next appoint the value
            tortoise=tortoise->next; // move only one step ahead;
        }
        return tortoise; // for every 2 step move 1 step for tortoise  
        
        
    }
};