#include <iostream>
#include "unorderedArrayListType.h"

using namespace std; 

int main()
{

    cout << "LIST 1: creating list1 object of unorderedArrayListType with size of 15" << endl;
    cout << "LIST 1: list1 will be accessed through a base class ptr to test all virtual functions" << endl;
    arrayListType *arrayListPtr; 
    unorderedArrayListType list1(15);
    arrayListPtr = &list1;
    cout << "LIST 1: using insertAt to place a 2 at location 0 " << endl; 
    arrayListPtr->insertAt(0, 2);
    cout << "LIST 1: inserting numbers 6, 4, 8, 12, 10 in accending locations" << endl;
    arrayListPtr->insertAt(1, 6);
    arrayListPtr->insertAt(2, 4);
    arrayListPtr->insertAt(3, 8);
    arrayListPtr->insertAt(4, 12);
    arrayListPtr->insertAt(5, 10);
    arrayListPtr->print(); 
    cout << "LIST 1: using insertEnd to place a 30 at the end of the list" << endl; 
    arrayListPtr->insertEnd(30);
    arrayListPtr->print();   
    cout << "LIST 1: using replaceAt to replace 30 with 14" << endl;
    arrayListPtr->replaceAt(6, 14);
    arrayListPtr->print(); 
    cout << "LIST 1: using seqSearch to search for 15. Should return -1" << endl;
    cout << arrayListPtr->seqSearch(15) << endl;
    cout << "LIST 1: using seqSearch to search for 8. Should return position 3" << endl;
    cout << arrayListPtr->seqSearch(8) << endl;
    cout << "LIST 1: using remove to remove -3. Should get not in the list warning" << endl;
    arrayListPtr->remove(-3); 
    cout << "LIST 1: using remove to remove 6." << endl;
    arrayListPtr->remove(6); 
    arrayListPtr->print(); 
    cout << "LIST 1: using removeAt to remove element at beginning of list. "
         << "Last element should be in place of first." << endl;
    arrayListPtr->removeAt(0);
    arrayListPtr->print();     
    


    return 0;
}