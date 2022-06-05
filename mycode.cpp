//practice code
#include "bst.h"

int bst::predecessor()
{
  if (root->left != NULL)
    {
      node* pre = predecessor_tree(root->left);
      return pre->data;
    }
  else
    {
      cout << "root has no predecessor" << endl;
      return -1;
    }
}

node* bst::predecessor_tree(node* current)
{
  if (current->right != NULL)
    {
      return predecessor_tree(current->right);
    }
  else
    {
      return current;;
    }
  
}
