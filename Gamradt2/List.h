/********************************************************************
*** NAME	    : Jevic Tshilumba                                 ***
*** CLASS	    : CSC 300                                         ***
*** ASSIGNMENT	: 2                                               ***
*** DUE DATE	: 09-21-2022                                      ***
*** INSTRUCTOR	: Ken Gamradt	                                  ***
*********************************************************************/

#ifndef LIST_H                        // Guard - start
#define LIST_H

typedef int LElement;                // typedef<existing><new type> // basic from of generic promming

class List
{
public:                              // Exportable
// General description of each of the ADT operations/methods/functions -exportable operations only
    List();
    List (const List &);             // reuse insert
    ~List();
    void insert(const LElement);
    void remove(const LElement);
    void view() const;
private:                             // non-exportable
// No private member documentation - implementation details are hidden/abstracted away
    struct LNode;
    typedef LNode* LNodePtr;
    struct LNode{
        LElement element;
        LNodePtr next;
    };

    LNodePtr head;

};
#endif                                // Guard - end
