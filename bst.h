//bst.h
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node
{
    int data;   //some questions use char * data;
    node * left;
    node * right;
};

class bst
{
    public:
    	//These functions are supplied already
    	bst();			//supplied
        void build(); 		//supplied
        void display(); 	//supplied

/* ************** PLACE YOUR PROTOTYPE HERE ***************** */
  int predecessor();
  void remove2();
  
 
 	private:
 		node * root;
		void display_tree(node*, int);

  /* ********************** MY CODE ******************** */
  node* predecessor_tree(node* current);
  void remove_2small(node* &current, node* parent);
  //node* findparent(node* current);
  //void remove_small2(node* &root, node* current);
};
