#include "bst.h"

int main()
{
    bst object;
    int input;
    
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

    //object.remove2();

    //object.removeRight();

    /*
    cout << "Enter a number to add" << endl;
    cin >> input;
    cin.get();
    object.add(input);
    */

    object.copy();
    object.display();
    
    //object.display();	//displays again after!
   
    return 0;
}
