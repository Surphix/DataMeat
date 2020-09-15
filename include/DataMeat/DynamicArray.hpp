#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#include <iostream>

#define DEFAULT_SIZE 26

template<typename T>
class DynamicArray {
private:
	T *_arr;
	int _len, _idx;
public:
	T& operator[](int index);
	int size() const;
	DynamicArray();
	~DynamicArray();
};

template<typename T>
T& DynamicArray<T>::operator[](int index) {
	T *newArr;
	if(index >= _len) {
		int size= index + (index - _len);
		newArr = new T[size];
		for(int i = 0; i < _idx; ++i)
			newArr[i] = _arr[i];
		for(int j = _idx; j < size; ++j)
			newArr[j] = T();
		_len = size;
		delete [] _arr;
		_arr = newArr;
	}

	if(index > _idx)
		_idx = index + 1;
	return *(_arr + index);
}

template<typename T>
int DynamicArray<T>::size() const {
	return _len;
}

template<typename T>
DynamicArray<T>::DynamicArray() {
	_arr = new T[DEFAULT_SIZE];
	_len = DEFAULT_SIZE;
	_idx = 0;
	
	for(int i = 0; i < _len; ++i)
		_arr[i] = T();
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
	delete _arr;
}

#endif
