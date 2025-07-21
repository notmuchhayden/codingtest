
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
		if (list1 == nullptr && list2 == nullptr)
			return nullptr;
		if (list1 && list2 == nullptr)
			return list1;
		if (list1 == nullptr && list2)
			return list2;
		
		ListNode *newHead, *newList;
		newHead = newList = nullptr;
		
		ListNode* curList1 = list1;
		ListNode* curList2 = list2;
		
		if (curList1->val < curList2->val) {
			newHead = newList = curList1;
			curList1 = curList1->next;
		}
		else {
			newHead = newList = curList2;
			curList2 = curList2->next;
		}
		
		while (curList1 || curList2) {
			if (curList1 && curList2 == nullptr) {
				newList->next = curList1;
				newList = newList->next;
				curList1 = curList1->next;
			}
			else if (curList1 == nullptr && curList2) {
				newList->next = curList2;
				newList = newList->next;
				curList2 = curList2->next;
			}
			else {
				if (curList1->val < curList2->val) {
					newList->next = curList1;
					newList = newList->next;
					curList1 = curList1->next;
				}
				else {
					newList->next = curList2;
					newList = newList->next;
					curList2 = curList2->next;
				}
			}
		}
		
		return newHead;
    }
};