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
    ListNode* rotateRight(ListNode* head, int k) {
     if(head==NULL  || head->next==NULL || k==0) return head;
        ListNode *count=head;
        int cnt=1;
        while(count->next)
        {
            cnt++;
            count=count->next;
        }
          count -> next=head;
          k=k%cnt;   
        k=cnt-k;
      
       while(k--) count=count->next;
        head=count->next;
        count->next=NULL;
        return head;
    }
};
