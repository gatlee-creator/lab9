/*
    Name: Graham Atlee
    Course: csc1720
    Date: 10/24/19
    Location of program: ~/csc1720/Labs/lab9

    This file contains prototypes methods for the unorderedArrayListType.
    This class derives from arrayListType. 
*/
#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include "arrayListType.h"

class unorderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertFirst(int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);
    void removeAt(int location);
    void removeAll(int removeItem); 

    unorderedArrayListType(int size = 100);
      //Constructor
};


#endif