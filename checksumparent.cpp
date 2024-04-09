int solve(Node* root,bool &flag){
        
        if(root==NULL){
            return 0; 
        }
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
        int left=(root->left,flag);
        int right=(root->right,flag);
    
        if(left+right!=root->data){
            flag=false;
        }
        return root->data;
        
    }
    int isSumProperty(Node *root)
    {
     bool flag=true;
     solve(root,flag);
     return flag;
    }