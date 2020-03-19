/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/

TreeNode *newNode(int data)
{
    TreeNode *temp;
    //cout<<"pass"<<endl;
    temp = (TreeNode *)malloc(sizeof(TreeNode));
    //cout<<"pass1"<<endl;
    temp->val = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

TreeNode *cal(vector<int> &v,int start,int end)
{
    if(start>end)
        return NULL;
    if(start == end)
        return newNode(v[start]);
    int mid = (start+end)/2;
    TreeNode *head = newNode(v[mid]);
    head->left = cal(v,start,mid-1);
    head->right = cal(v,mid+1,end);
    return head;
}
 
TreeNode* Solution::sortedListToBST(ListNode* A) {
    vector<int> v;
    ListNode *temp = A;
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    int size = v.size();
    TreeNode *head;
    head = cal(v,0,size-1);
    return head;
 
}
