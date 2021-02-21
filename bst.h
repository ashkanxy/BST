#include <iostream>
#include <vector>

using namespace std;


class BST { 
  int data; 
  BST *left, *right; 
public: 
  BST();
  BST(int value);
  int getVal (BST *r);
  BST* getLeft(BST *r);
  BST* getRight(BST *r);
  BST* insert(BST* root, int value);
  BST* deleteNode(BST* root, int key);
  BST* minValueNode (BST *r);
  void inorderT (BST* r, vector<int> &res);
};



