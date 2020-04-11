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
    ListNode* middleNode(ListNode* head) {
        ListNode *i=head,*j=head; 
        while(i && i->next){
            j=j->next;
            i=i->next->next;
        }       
        return j;
    }
};
