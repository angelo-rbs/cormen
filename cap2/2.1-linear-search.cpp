
#include <iostream>
template <typename T>
int linear_search(T* first, T* last, T value) {
	T* itr = first;
	while (itr < last) {
		if (*itr == value)
			return (itr - first);
		itr++;
	}
	return -1;
}

int main() {


	int v[10] = {3, 4, 5, 10, 1, 6, 8, 9, 7, 2};
	int size = sizeof(v) / sizeof(int);

	int to_search;
	std::cin >> to_search;

	int index = linear_search(v, v + size, to_search);
	std::cout << index << std::endl;

	return 0;
}
