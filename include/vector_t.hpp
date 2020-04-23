#pragma once
#include <iostream>
#include <cassert>

using namespace std;

template <class T>
class vector_t {
private:
    T*  v_;
    int sz_;

public:

    vector_t(void);     // Constructor
    vector_t(int sz);   // Constructor por defecto
    vector_t(const vector_t& v);
    ~vector_t(void);

    void resize(int sz);
    int size(void) const;

    T& at(int pos);

    const T& operator[](int pos) const;
    T& operator[](int pos);
    vector_t& operator=(const vector_t& v);

    void insert_element(T data);

  //  ostream& write(std::ostream& os) const;


private:
    void create_vector_t(void);
    void destroy_vector_t(void);
};


template <class T>
vector_t<T>::vector_t(void):
    v_(NULL),
    sz_(0) {}


template <class T>
vector_t<T>::vector_t(int sz):
    v_(NULL),
    sz_(sz) {

    create_vector_t();
}

template <class T>
vector_t<T>::vector_t(const vector_t& v):
    v_(NULL),
	sz_(v.sz_)
	{
		create_vector_t();

	    for(int i = 0; i < sz_; i++)
	        v_[i] = v.v_[i];
	}

template <class T>
vector_t<T>::~vector_t(void) {
    destroy_vector_t();
}

template <class T>
void vector_t<T>::resize(int sz) {
    destroy_vector_t();
    sz_ = sz;
    create_vector_t();
}

template <class T>
int vector_t<T>::size(void) const {
    return sz_;
}

template <class T>
T& vector_t<T>::at(int pos) {

    assert((pos < sz_) && ((pos >= 0)));
    return v_[pos];
}

template <class T>
void vector_t<T>::create_vector_t(void) {
    v_ = new T[sz_];
}

template <class T>
void vector_t<T>::destroy_vector_t(void) {
    if (v_ != NULL) {
        delete [] v_;
        v_ = NULL;
    }
}

template <class T>
const T& vector_t<T>::operator[](int pos) const {
    return at(pos);
}

template <class T>
T& vector_t<T>::operator[](int pos) {
    return at(pos);
}

/*template<class T>
ostream& vector_t<T>::write(ostream& os) const {
    os << "[";
    for (unsigned i = 0; i < sz_; i++) {
        os << " " << v_[i];
    }
    os << " ]" << "\n";
    return os;
} */

