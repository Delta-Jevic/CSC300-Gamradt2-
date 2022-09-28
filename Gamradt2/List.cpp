/********************************************************************
*** NAME	: Jevic Tshilumba                                 ***
*** CLASS	: CSC 300                                         ***
*** ASSIGNMENT	: 2                                               ***
*** DUE DATE	: 09-21-2022                                      ***
*** INSTRUCTOR	: Ken Gamradt	                                  ***
*********************************************************************/
#include <iostream>              // Guard - start  
#include "List.h"

using namespace std;

List::List():head(nullptr)                     // default constructor function to create an initialized emplty list
{

}

List::List (const List & copyList):head(nullptr)  // copy constructor function to create a duplicate copy of an existing list
{
    LNodePtr node = copyList.head;
    while(node != nullptr)
    {
        insert(node->element);
        node = node->next;
    }
}

void List::insert (const LElement value)  // insert function to create a new element to the list
{
   LNodePtr newNode;  // To point to a new node
   LNodePtr nodePtr;  // To move through the list

   // Allocate a new node and store num there.
   newNode = new LNode;
   nodePtr = new LNode;
   newNode->element = value;
   newNode->next = NULL;

   // If there are no nodes in the list
   // make newNode the first node.
   if (!head)
   {
      head = newNode;
      newNode->next = nullptr;
   }
   else  // Otherwise, insert newNode at end.
   {
      // Initialize nodePtr to head of list.
      nodePtr = head;

      // Find the last node in the list.
      while (nodePtr->next)

         nodePtr = nodePtr->next;

      // Insert newNode as the last node.
      nodePtr->next = newNode;
   }

}

void List::remove(const LElement value)  // remove function to remove an existing element from the list
{
   LNodePtr nodePtr;       // To traverse the list
   LNodePtr previousNode;  // To point to the previous node

   // If the list is empty, do nothing.
   if (!head)
      return;

   // Determine if the first node is the one.
   if (head->element == value)
   {
      nodePtr = head->next;
      delete head;
      head = nodePtr;
   }
   else
   {
      // Initialize nodePtr to head of list
      nodePtr = head;

      // Skip all nodes whose value member is
      // not equal to num.
      while (nodePtr != nullptr && nodePtr->element != value)
      {
         previousNode = nodePtr;
         nodePtr = nodePtr->next;
      }

      // If nodePtr is not at the end of the list,
      // link the previous node to the node after
      // nodePtr, then delete nodePtr.
      if (nodePtr)
      {
         previousNode->next = nodePtr->next;
         delete nodePtr;
      }
   }
   

}

void List::view() const   // view function to display the contents of the list from the first element to the last element
{
LNodePtr nodePtr;

    // Position nodePtr at the head of the list.
    nodePtr = head;
    if (head == NULL)
    {
        cout <<"LIST -> NULL ";
    }

    while(nodePtr != NULL)
    {
        // Display the value in this node
        cout <<nodePtr->element <<"  ";

        // Move to the next node
        nodePtr = nodePtr->next;
    }
       cout <<endl;
   }
   
   List::~List() // destructor function to remove all elements from the list
   {
    LNodePtr nodePtr;   // To traverse the list
    LNodePtr nextNode;  // To point to the next node

    // Position nodePtr at the head of the list.
    nodePtr = head;

    // While nodePtr is not at the end of the list...
    while (nodePtr != nullptr){
        // Save a pointer to the next node.
        nextNode = nodePtr->next;
        // Delete the current node.
        delete nodePtr;

        // Position nodePtr at the next node.
        nodePtr = nextNode;
    }
   }
