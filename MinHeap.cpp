//Copyright 2021

#include "MinHeap.h"




MinHeap::MinHeap() {

}// default constructor
/**
 * Given array, build the heap tree
 * @param arr input array
 * @param size of array
 */
MinHeap::MinHeap(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		this->push(arr[i]);
	}
}
/**
 * add the data to the heap tree recursively
 * @param data input value
 */
void MinHeap::push(int data) {
	the_data.push_back(data);
	int posistion = the_data.size() - 1;
	push_up(posistion);

}
/**
 * remove the smallest value from the heap tree recursively
 * @return the smallest value from the heap tree
 */
int MinHeap::pop() {
	int num = the_data[0];
	the_data[0] = the_data[the_data.size() - 1];
	pop_down(0);
	the_data.pop_back();
	
	return num;
}
/**
 * print out the heap tree
 */
void MinHeap::print() {
	for (int i = 0; i < the_data.size(); i++) {
		std::cout << the_data[i] << ", ";
	}
	std::cout << std::endl;
}
/**
 * destructor
 */
MinHeap::~MinHeap() {

}

/**
 *
 * @return the heap tree
 */
std::vector<int> MinHeap::get_data() const {
	return this->the_data;
}
/**
 * helper function to add data recursively to the heap tree
 * Note: must be a recursive function.
 * @param i index of the vector

 */
void MinHeap::push_up(int i) {
	int parentLocation = (i - 1) / 2;
	if (parentLocation >= 0 && the_data[i] < the_data[parentLocation]) {
		std::swap(the_data[i], the_data[parentLocation]);
		push_up(parentLocation);
	}


}

/**
 * helper function to re-balance the tree after the
 * removal of a smallest value from the heap
 * Note: must be a recursive function
 * @param i index of the vector
 */
void MinHeap::pop_down(int i) {
	int childLocation = (2 * i) + 1;
	if (childLocation < the_data.size() && the_data.size() != 0) {
		if (the_data[i] > the_data[childLocation]) {
			std::swap(the_data[i], the_data[childLocation]);
			pop_down(childLocation);
		}
	}
	if (childLocation + 1 < the_data.size() && the_data.size() != 0) {
		if (the_data[i] > the_data[childLocation + 1] && childLocation + 1 < the_data.size()) {
			std::swap(the_data[i], the_data[childLocation + 1]);
			pop_down(childLocation + 1);
		}
	}
}
