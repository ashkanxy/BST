#include "bst.h"
using namespace std;


// Default constructor. 
  BST::BST():data(),left(NULL),right(NULL) { 
  } 
 
  BST::BST(int value) { 
    data = value; 
    left = right = NULL; 
  }  
  
  int BST::getVal (BST *r) {
      return r->data;
  }
  
  BST* BST::getLeft(BST *r){
      return r->left;
  }

  
  BST* BST::getRight(BST *r){
      return r->right;
  }

  
  BST* BST::insert(BST* root, int value) { 
    if (!root) { 		
      return new BST(value); 
    } 
    if (value > root->data) { 		
	root->right =
           insert(root->right, value); 
   } else { 		
       root->left = 
           insert(root->left, value); 
   } 
   return root; 
  }
  
  BST* BST::deleteNode(BST *root, int key) {
    if (root == NULL)
      return root;
    if (key < root->data)
        root->left = 
            deleteNode(root->left, key);
    else if (key > root->data)
        root->right =
            deleteNode(root->right, key);	/*continued from end of previous column*/
 else { /*key == root->val*/
        
 /* node with only one child or no child */
   if (root->left == NULL) {
      BST* temp = root->right;
      delete (root);
      return temp;
   } else if (root->right == NULL) {
      BST* temp = root->left;
      delete (root);
      return temp;
   }
/* node with two children: Get the inorder successor(smallest in the right subtree)*/
   BST* temp =
            minValueNode(root->right);
 
   root->data = temp->data;
   root->right = 
   deleteNode(root->right, temp->data);
  }
  return root;
 }


BST* BST::minValueNode (BST *r) {
      if (!r)
        return r;
      while(r->left)
        r= r->left;
      return r;    
  }

  
  void BST::inorderT (BST * r, vector<int> &res) {
    if(!r)
     return;
    inorderT (r->left, res);
    res.push_back(r->data);
    inorderT (r->right, res);
 }
