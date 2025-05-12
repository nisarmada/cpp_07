#pragma once

#include <iostream>
#include <string>

template<typename T, typename U>
void iter(T* array, size_t length, U function) {
	for (size_t i = 0; i < length; i++) {
		function(array[i]);
	}
}