#include <iostream>
#include "unorderedArrayListType.h"

using namespace std; 

int main()
{

    cout << "LIST 1: creating list1 object of unorderedArrayListType of size 15" << endl;
    unorderedArrayListType list1(15); 
    cout << "LIST 1: list1 will be testing all the pure virtual functions" << endl;
    cout << "LIST 1: using insertAt to place a 2 at location 0 " << endl; 
    list1.insertAt(0, 2);
    cout << "LIST 1: inserting numbers 4, 6, 8, 10, 12 in accending locations" << endl;
    list1.insertAt(1, 4);
    list1.insertAt(2, 6);
    list1.insertAt(3, 8);
    list1.insertAt(4, 10);
    list1.insertAt(5, 12);
    list1.print(); 
    cout << "LIST 1: using insertEnd to place a 30 at the end of the list" << endl; 
    list1.insertEnd(30);
    list1.print();   
    cout << "LIST 1: using replaceAt to replace 30 with 14" << endl;
    list1.replaceAt(6, 14);
    list1.print(); 
    cout << "LIST 1: using seqSearch to search for 15. Should return -1" << endl;
    cout << list1.seqSearch(15) << endl;
    cout << "LIST 1: using seqSearch to search for 8. Should return position 3" << endl;
    cout << list1.seqSearch(8) << endl;
    cout << "LIST 1: using remove to remove -3. Should get not in the list warning" << endl;
    list1.remove(-3); 
    cout << "LIST 1: using remove to remove 6." << endl;
    list1.remove(6); 
    list1.print(); 
    




    return 0;
}