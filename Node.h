#ifndef NODE_H
#define NODE_H
/**
 * @brief Node Class
 * 
 * @tparam T The type of data stored in the node
 * 
 * @todo You need to convert this Node class to take in a generic template type T for data.
 */
template<class T>
class Node {
    public:
        T data;
        Node *next;
        
        Node(T newData) {
            data = newData;
            next = nullptr;
        }
};
#endif