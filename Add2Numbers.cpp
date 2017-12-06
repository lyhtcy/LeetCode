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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* v1 = l1;
		ListNode* v2 = l2;
		ListNode* first = new ListNode(0);
		ListNode* temp = first;
		int sum = 0;
		while (v1 != NULL || v2 != NULL) {
			sum = sum / 10;
			if (v1 != NULL) {
				sum += v1->val;
				v1 = v1->next;
			}
			if (v2 != NULL) {
				sum += v2->val;
				v2 = v2->next;
			}
			temp->next = new ListNode(sum % 10);
			temp = temp->next;
		}
		if (sum >= 10) {
			temp->next = new ListNode(1);
		}
		return first->next;
	}
};