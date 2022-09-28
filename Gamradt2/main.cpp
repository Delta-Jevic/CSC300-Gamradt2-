/********************************************************************
*** NAME	    : Jevic Tshilumba                                 ***
*** CLASS	    : CSC 300                                         ***
*** ASSIGNMENT	: 2                                               ***
*** DUE DATE	: 09-21-2022                                      ***
*** INSTRUCTOR	: Ken Gamradt	                                  ***
*********************************************************************/
#include <iostream>              // Guard - start
#include "List.h"

using namespace std;

int main()
{
    List myList;
     myList.view();
     myList.insert(-10);
     myList.insert(0);
     myList.insert(10);
     myList.view();

}
