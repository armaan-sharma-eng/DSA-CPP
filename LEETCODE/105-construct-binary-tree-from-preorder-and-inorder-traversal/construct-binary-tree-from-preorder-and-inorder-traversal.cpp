/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* maketree(vector<int> pre,int ps,int pe,vector<int> in,int is,int ie)
    {
        if(is>ie)
            return NULL;

        int root_data=pre[ps];

        TreeNode* root= new TreeNode(root_data);
        int mid=0;
        int i=0;
        while(1)
        {
            if(in[i++]==root_data)
            {
                mid=i-1;
                break;
            }
        }

        int lis=is;
        int lie=mid-1;
        int ris=mid+1;
        int rie=ie;

        int lps=ps+1;
        int lpe=lie-lis+lps;
        int rps=lpe+1;
        int rpe=pe;

        root->left=maketree(pre,lps,lpe,in,lis,lie);
        root->right=maketree(pre,rps,rpe,in,ris,rie);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        return maketree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
};