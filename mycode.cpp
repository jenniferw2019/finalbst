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


void bst::remove2()
{
  remove_2small(root, root);
  remove_2small(root, root);
}

void bst::remove_2small(node* &current, node* parent)
{
  /*
  if (root->left == current)
    {
      current = current->right;
      parent = current->right;
      delete current;
    }
  */
  if (current->left != NULL)
    {
      remove_2small(current->left, current);
    }
  else 
    {
      if (current == root)
	{
	  current = current->right;
	  parent = current->right;
	  delete current;
	}
      else if (current->right != NULL)
	{
	  parent->left = current->right;
	  delete current;
	}
      else if (current->right == NULL)
	{
	  parent->left = NULL;
	  delete current;
	}
    }
}


/*
node* bst::findparent(node* current)
{
  if ((current->left)->left) != NULL)
  {
    findparent(current->left);
  }
  else
    {
      return current;
    }
}

void bst::remove_small2(node* &root, node* current)
{
  if (current->left == NULL)
    {
      current->left = NULL;
      delete current->left;
    }
  if (current->left == NULL && current->right != NULL)
    {
      if (
    }
}
*/
