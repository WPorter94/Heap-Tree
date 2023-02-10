
//Copyright 2021

#ifndef MINHEAP_H
#define MINHEAP_H
#include <vector>
#include <iostream>

class MinHeap {
public:
    MinHeap();  // default constructor
    /**
     * Given array, build the heap tree
     * @param arr input array
     * @param size of array
     */
    MinHeap(int* arr, int size);
    /**
     * add the data to the heap tree recursively
     * @param data input value
     */
    void push(int data);
    /**
     * remove the smallest value from the heap tree recursively
     * @return the smallest value from the heap tree
     */
    int pop();
    /**
     * print out the heap tree
     */
    void print();
    /**
     * destructor
     */
    virtual ~MinHeap();

    /**
     *
     * @return the heap tree
     */
    std::vector<int> get_data() const;

private:
    // store the heap tree in a vector
    std::vector<int> the_data;

    /**
     * helper function to add data recursively to the heap tree
     * Note: must be a recursive function.
     * @param i index of the vector

     */
    void push_up(int i);

    /**
     * helper function to re-balance the tree after the
     * removal of a smallest value from the heap
     * Note: must be a recursive function
     * @param i index of the vector
     */
    void pop_down(int i);
};

#endif /* MINHEAP_H */
