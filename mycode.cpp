A//practice code
#include "bst.h"

//find predecessor
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

//remove the 2 smallest numbers
void bst::remove2()
{
  remove_2small(root, root);
  remove_2small(root, root);
}

void bst::remove_2small(node* &current, node* parent)
{
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
	  current = NULL;
	}
    }
}

//remove right subtree
void bst::removeRight()
{
  if (root->right != NULL)
    {
      remove_rightsub(root->right);
    }
  else
    {
      cout << "there is no right subtree" << endl;
    }
}

void bst::remove_rightsub(node* &current)
{
  if (current != NULL)
    {
      remove_rightsub(current->left);
      remove_rightsub(current->right);
      delete current;
      current = NULL;
    }
  else
    {
      return;
    }
}

void bst::add(int value)
{
  add_new(root, root, root, value);
}

void bst::add_new(node* &root, node* current, node* parent, int number)
{
  if (current == NULL)
    {
      node* newNode = new node();
      newNode->data = number;
      current = newNode;
      if (number >= parent->data)
	{
	  parent->right = current;
	}
      else if (number < parent->data)
	{
	  parent->left = current;
	}
      current->left = NULL;
      current->right = NULL;
    }
  else
    {
      parent = current;
      if (number < current->data)
	{
	  current = current->left;
	}
      else if (number >= current->data)
	{
	  current = current->right;
	}
      add_new(root, current, parent, number);
    }
}

void bst::copy()
{
  if (root->left != NULL)
    {
      node* newtree = NULL;
      copy_left(root->left, newtree);
      root = newtree;
    }
  else
    {
      cout << "there is no left subtree" << endl;
    }
}
void bst::copy_left(node* current, node* &ncopy)
{
  if (current == NULL)
    {
      ncopy = NULL;
    }
  else
    {
      ncopy = new node();
      ncopy->data = current->data;

      copy_left(current->left, ncopy->left);
      copy_left(current->right, ncopy->right);
    }
}
