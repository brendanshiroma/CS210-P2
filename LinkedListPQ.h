/**
 * @file LinkedListPQ.h
 * @author your name bshiroma1290@sdsu.edu 129846870
 * @brief This file contains the declaration and definitions of the LinkedListPQ class, which is a priority queue implementation using a linked list.
 * @date Date Last Modified Here
 */
#ifndef LINKED_LIST_PQ_H
#define LINKED_LIST_PQ_H

#include "PriorityQueue.h"
#include "LinkedList.h"

/**
 * @class LinkedListPQ
 * 
 * @brief A priority queue implementation using a linked list.
 * 
 * @details The LinkedListPQ class inherits from the PriorityQueue class and provides methods to create and manipulate a priority queue using a linked list.
 * 
 * @tparam T The type of elements stored in the priority queue.
 * 
 * @todo Create a priority queue using a linked list. Refer to PriorityQueue.h for details on methods
 */
template<class T>
class LinkedListPQ : public PriorityQueue<T> {

    private:
        LinkedList<T> *pq;
        int size;

    public:

    bool insert(T object) {
        pq->addLast();
        return true;
    }

    T remove() {
        if (isEmpty()) {
            throw std::invalid_argument("Cannot remove from empty queue");
        }
        return pq->removeLast();
    }

    bool deleteAll(T obj) {
        return pq->removeAll(obj)//fix this
    }

    T peek() {
        if (isEmpty()) {
            throw std::invalid_argument("Cannot peek from empty queue");
        }
        return pq->peekLast();
    }

    bool contains(T obj) {
        return pq->contains();
    }

    int size() {
        return pq->size();
    }

    void clear() {
        pq->makeEmpty();
    }

    bool isEmpty() {
        return pq->isEmpty();
    }

    bool isFull() {
        return pq->isFull();
    }

    ListIterator<T> first() {
        return pq->first();
    }

    ListIterator<T> end() {
        return pq->end();
    }
    
};
#endif
