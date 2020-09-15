#ifndef __NODEITERATOR_H__
#define __NODEITERATOR_H__

#include <iterator>
#include <cstddef>


template<typename T, 
         typename Distance = std::ptrdiff_t, 
         typename Pointer = T*, 
         typename Reference = T&>
class Iterator 
    : std::iterator<std::random_access_iterator_tag, 
                    Distance, Pointer, Reference> {
private:
    typedef Iterator self_t;
public:
    Pointer itr;
    Iterator(Pointer node) : itr(node) {}
    Reference operator*() { return *itr; }
    Pointer operator->() { return itr; }
    bool operator==(const self_t& rhs) { return itr == rhs.itr; }
    bool operator!=(const self_t& rhs) { return itr != rhs.itr; }
    self_t operator++() {
        
    }
};

#endif