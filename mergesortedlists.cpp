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
   
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val>list2->val) std::swap(list1,list2);
       /* {
            ListNode *temp=l1;
            l1=l2;
            l2=temp;
        }*/
        ListNode *res=list1;
        while(list1!=NULL && list2!=NULL)
        {ListNode *tmp=NULL;
           
            while(list1!=NULL && list1->val <=list2->val)
            {
                
                tmp=list1;
                list1=list1->next;
            }
            tmp->next=list2;
            /*ListNode *temp=l1;
            l1=l2;
            l2=temp;*/
            std::swap(list1,list2);
        }
       return res; 
    }
};
