#ifndef __DATAMEAT_H__
#define __DATAMEAT_H__

#include "Node.hpp"
#include <string>

template<typename T>
class DataMeat {
private:
    typedef unsigned long ulong;
private:
    Node<T>* _root;
    ulong _size;
public:
    DataMeat() : _root(new Node<T>), _size(0) {}
    void push(std::string const&, T);
    bool remove(std::string const&);
    bool exists(std::string const&);
    ulong getSize() const { return _size; }
    T operator[](std::string const&);
    ~DataMeat() {}
};

template<typename T>
void DataMeat<T>::push(std::string const& key, T value) {
	
	Node<T> *cur = _root;
	Node<T>	*par = nullptr;

	for(int const& k: key) {
		if(cur->children[k] != nullptr) {
			cur = cur->children[k];
		} else {
			par = cur;
			cur->children[k] = new Node<T>(k, T(), par);
			cur = cur->children[k];
		}
	}	
	cur->value = value;
}

template<typename T>
bool DataMeat<T>::remove(std::string const& key) {
	return true;
}

template<typename T>
bool DataMeat<T>::exists(std::string const& key) {
	return true;
}

template<typename T>
T DataMeat<T>::operator[](std::string const& key) {
	
	Node<T> *cur = _root;

	for(int const& k : key) {
		if(cur->children[k] != nullptr) {
			cur = cur->children[k];
		}
		else {
			return T();
		}
	}

	return cur->value;
}

#endif
