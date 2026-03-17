#include <iostream>
using namespace std;

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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int upper=0;
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* result = new ListNode;
        ListNode* resultelem = result;
        resultelem->val = (i->val + j->val + upper)%10;
        upper = (i->val + j->val + upper)/10;
        resultelem->next =nullptr;
        i = i->next;
        j = j->next;
        int ival,jval;
        while(i != nullptr && j != nullptr)
        {
            if()
            ival = i->val;
            jval = j->val;

            resultelem->next = new ListNode;
            resultelem = resultelem->next;
            resultelem->val = (ival + jval + upper)%10;
            upper = (ival + jval + upper)/10;
            i = i->next;
            j = j->next;
        }
        return result;
    }
};

int main()S
{
    ListNode a1,a2,a3,b1,b2,b3;
    a1.val = 2;
    a1.next = &a2;
    a2.val = 4;
    a2.next = &a3;
    a3.val = 3;
    a3.next = nullptr;
    b1.val = 5;
    b1.next = &b2;
    b2.val = 6;
    b2.next = &b3;
    b3.val = 4;
    b3.next = nullptr;
    Solution solution;
    ListNode * result = solution.addTwoNumbers(&a1,&b1);
    for(ListNode* i = result;i != nullptr ;i = i->next)
    {
        cout << i->val << " ";
    }
    return 0;
}