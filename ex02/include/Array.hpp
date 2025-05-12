#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array {
	private:
		size_t length;
		T*		elements;
	public:
		Array();
		Array(size_t n);
		~Array();

		Array(const Array& other);
		Array& operator=(const Array& other);

		T& operator[](const size_t i);
		const T& operator[](const size_t i) const;

		size_t size() const;
};

#include "../Array.tpp"