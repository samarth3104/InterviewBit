int ans, counter;
int final=0;

void f(TreeNode*A) {
    if(A != NULL) {
        f(A->left);
        if(A->val > ans) {
            ans = A->val;
            counter = counter - 1;
            if(counter == 0){
                final=ans;
                return;
            }
        }
        f(A->right);
    }
}

int Solution::kthsmallest(TreeNode* A, int B) {
    ans = INT_MIN, counter = B;
    f(A);
    return final;
}
