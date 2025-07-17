
/*
21. Merge Two Sorted Lists
Easy
Topics
premium lock icon
Companies
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		if (list1 && list2 == nullptr)
			return list1;
		if (list1 == nullptr && list2)
			return list2;
		
		ListNode *head = *newlist = nullptr;
		
		while (list1 || list2) {
			
			
			
			if (list1->val < list2->val) {
				newlist = list1;
				list1 = list1->next;
			}
			else {
				newlist = list2;
				list2 = list2->next;
			}
		}
    }
	
	ListNode* getSmallerOne(ListNode* l1, ListNode* l2) {
		if (list1 && list2 == nullptr) {
			
		}
	}
};