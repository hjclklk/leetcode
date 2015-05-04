/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
**/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* ans = NULL;
        ListNode* ansend;
        ListNode* temp;
        int carry = 0;

        while (p1 != NULL && p2 != NULL){
        	/**new 的用法- -！都忘了！！！！- -！**/
        	temp = new ListNode((p1->val + p2->val +carry) % 10);
        	temp->next = NULL;
        	if (ans == NULL) ans = temp;
        		else ansend->next = temp;
        	ansend = temp;
        	carry = (p1->val + p2->val +carry) / 10;

        	p1 = p1->next;
        	p2 = p2->next;
        }
        while (p1 != NULL){
        	temp = new ListNode((p1->val +carry) % 10);
        	temp->next = NULL;
        	if (ans == NULL) ans = temp;
        		else ansend->next = temp;
        	ansend = temp;
        	carry = (p1->val +carry) / 10;

        	p1 = p1->next;
        }
        while (p2 != NULL){
        	temp = new ListNode((p2->val +carry) % 10);
        	temp->next = NULL;
        	if (ans == NULL) ans = temp;
        		else ansend->next = temp;
        	ansend = temp;
        	carry = (p2->val +carry) / 10;

        	p2 = p2->next;
        }
        /** consider the carry finally**/
        if (carry != 0){
        	temp = new ListNode(carry);
        	temp->next = NULL;
        	ansend->next = temp;
        }
        return ans;
    }
};