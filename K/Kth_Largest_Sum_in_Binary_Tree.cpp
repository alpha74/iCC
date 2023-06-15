// Return kth largest level order sum in binary tree
// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/
// Aman Kumar

// Runtime 216 ms Beats 77.89%
// Memory 98.1 MB Beats 75.36%
long long kthLargestLevelSum(TreeNode* root, int k) 
{
    queue<TreeNode*> q ;

    if(root == NULL)
        return -1 ;

    vector<unsigned long long> allSums ;

    q.push(root) ;

    while(!q.empty())
    {
        int qsize = q.size() ;
        unsigned long long levelSum = 0 ;

        for(int i = 0 ; i < qsize ; i++)
        {
            TreeNode *curr = q.front() ;
            q.pop() ;

            levelSum += curr -> val ;

            if(curr -> left)
                q.push(curr -> left) ;
            if(curr -> right)
                q.push(curr -> right) ;
        }

        allSums.push_back(levelSum) ;
    }    

    if(allSums.size() < k)
        return -1 ;

    sort(allSums.rbegin(), allSums.rend()) ;

    return allSums[k-1] ;
}
