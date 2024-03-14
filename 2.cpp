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
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        int c = 0;
        while (l1 || l2)
        {
           int a = l1 ? l1->val : 0;
           int b = l2 ? l2->val : 0;
           int r = a + b + c;
            if(r >= 10)
            {
                r = r - 10;
                c = 1;
            }
            else
            {
                c = 0;
            }
            if(!head)
            {
                head = tail = new ListNode();
                head->val = r;
            } else
            {
                tail->next = new ListNode();
                tail->next->val = r;
                tail = tail->next;
            }
            if(l1)
            {
                l1 = l1->next;
            }
            if(l2)
            {
                l2 = l2->next;
            }

        }
        if(c)
        {
            tail->next = new ListNode(c);
        }
        return head;
    }
};