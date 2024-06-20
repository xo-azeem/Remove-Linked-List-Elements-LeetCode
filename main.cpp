// Code

// Definition for singly-linked list.
/*
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int v) 
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* temp = &dummy;

        while (temp->next)
        {
            if (temp->next->val == v)
            {
                ListNode* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            }
            else
                temp = temp->next;
        }

        return dummy.next;
    }
};
