#include "include/Array.hpp"

template<typename T>
Array<T>::Array() : length(0), elements(nullptr) {}

template<typename T>
Array<T>::Array(size_t n) : length(n), elements(nullptr) {
	if (n > 0)
		elements = new T[n]();
}

template<typename T>
Array<T>::~Array() {
	if (elements != nullptr)
		delete[] elements;
}

template<typename T>
Array<T>::Array(const Array& other) : length(other.length) {
	if (length > 0) {
		elements = new T[length]();
		for (size_t i = 0; i < length; i++)
			elements[i] = other.elements[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other){
		if (elements != nullptr) {
				delete[] elements;
			}
		if (other.length > 0) {
			length = other.length;
			elements = new T[length]();
			for (size_t i = 0; i < length; i++) {
				elements[i] = other.elements[i];
			}
		}
		else {
			elements = nullptr;
		}
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](const size_t i) {
	if (i < 0 || i > length - 1)
		throw (std::out_of_range("Index out of bounds"));
	else {
		return (elements[i]);
	}
}

template<typename T>
const T& Array<T>::operator[](const size_t i) const{
	if (i >= length)
		throw (std::out_of_range("const index out of bounds"));
	else{
		return (elements[i]);
	}
}

template<typename T>
size_t Array<T>::size() const {
	return (length);
}