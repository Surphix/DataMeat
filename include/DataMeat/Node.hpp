#ifndef __NODE_H__
#define __NODE_H__

#include "DynamicArray.hpp"
#include <memory>

template<typename T>
class Node {
public:
    char key;
    T value;
    Node* parent;
    DynamicArray<Node<T>*> children;
public:
    Node() {}
    Node(char const& k, T const& v) 
	    : key(k), value(v) {}
    Node(char const& k, T const& v, Node* p) 
	    : key(k), value(v), parent(p) {}
    ~Node() {}
};

#endif
