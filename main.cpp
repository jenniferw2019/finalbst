#include "bst.h"

int main()
{
    bst object;
    object.build(); 	//builds a BST
    object.display();	//displays a BST

    /*  PLACE YOUR FUNCTION CALL HERE */
    /*
    int value = 0;
    value = object.predecessor();
    if (value > 0)
      {
	cout << "predecessor: " << value << endl;
      }
    */

    object.remove2();
    object.display();	//displays again after!
   
    return 0;
}
