/**
 * @file ListIterator.h
 * @author your name bshiroma1290@sdsu.edu 129846870
 * @brief This file contains the declaration and definition of the ListIterator class.
 * @date Date Last Modified Here
 */
#ifndef LIST_ITERATOR_H
#define LIST_ITERATOR_H

#include "Node.h"

/**
 * @brief A class representing an iterator for a linked list.
 * 
 * The ListIterator class provides methods to iterate over the elements of a linked list.
 * It allows traversal of the list and access to the elements.
 * 
 * @tparam T The type of elements stored in the linked list.
 * 
 * @todo Implement the ListIterator class. Refer to the instructions for details.
 */
template<class T>
class ListIterator {

private:
    // TODO: Pointer to the current node
    Node<T> *itptr;

public:
    // TODO: Constructors
    ListIterator() {
        itptr = nullptr;
    }

    ListIterator(const ListIterator<T>& q) {
        itptr = q.itptr;
    }

    ListIterator(Node<T> *q) {
        itptr = q;
    }

    // TODO: Operator Overloads
    
};

#endif