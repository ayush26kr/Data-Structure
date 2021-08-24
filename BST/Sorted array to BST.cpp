TreeNode* buildTree(int left, int right, vector<int>& nums) {
        if(left > right)
            return 0;
        int mid = (left + right)>>1;   //right shift   num=num/2^y  (num=mid , y=1)
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildTree(left, mid-1, nums);
        root->right = buildTree(mid+1, right, nums);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(0, nums.size()-1, nums);
    }
