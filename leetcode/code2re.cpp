#include<iostream>
#include<unordered_map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution {
    public: ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }

int main() {
    ListNode* l1 = new ListNode(2,new ListNode(4,new ListNode(3)));
    ListNode* l2 = new ListNode(5,new ListNode(6,new ListNode(4)));
    Solution s;
    ListNode* res = s.addTwoNumbers(l1,l2);
    for(ListNode* p = res; p!=nullptr; p=p->next){
        cout<<p->val<<" ";
    }
    return 0;

}