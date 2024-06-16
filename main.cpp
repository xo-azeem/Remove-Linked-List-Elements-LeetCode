// Code
// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
