//Copyright 2021
#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
#include "MinHeap.h"

class newCxxTest : public CxxTest::TestSuite {
public:

	void test1_arrivalTime() {
        MinHeap minH;
		minH.push(3);
		minH.push(2);
		minH.push(4);
		minH.push(1);
		minH.push(5);
		std::vector<int> newVec = minH.get_data();
		TS_ASSERT_EQUALS(newVec[0], 1);
	}
	void test2_pop() {
		MinHeap minH;
		minH.push(3);
		minH.push(2);
		minH.push(4);
		minH.push(1);
		minH.push(5);
		int data = minH.pop();
		std::vector<int> newVec = minH.get_data();
		TS_ASSERT_EQUALS(data, 1);
	}
	void test3_print() {
		MinHeap minH;
		minH.push(3);
		minH.push(2);
		minH.push(4);
		minH.push(1);
		minH.push(5);
		minH.pop();
		std::vector<int> newVec = minH.get_data();
		minH.print();
		TS_ASSERT_EQUALS(newVec[0], 2);
	}
	void test4_Copy() {
		MinHeap minH;
		int arr[100];
		arr[0] = 365;
		arr[1] = 216;
		arr[2] = 415;
		arr[3] = 704;
		arr[4] = 504;
		arr[5] = 254;
		arr[6] = 698;
		arr[7] = 702;
		arr[8] = 209;
		arr[9] = 629;

		minH.push(365);
		minH.push(216);
		minH.push(415);
		minH.push(704);
		minH.push(504);
		minH.push(254);
		minH.push(698);
		minH.push(702);
		minH.push(209);
		minH.push(629);
		std::cout << std::endl;
		minH.print();  //heap
		// minH.print();
		int size = 10;
		for (int i = 0; i < size; i++) {
			int data = minH.pop();
			std::cout << data << ", ";
		}
		MinHeap myH(arr, size);
		std::vector<int> newVec = myH.get_data();
		TS_ASSERT_EQUALS(newVec[0], 209);
	}
};
#endif /*NEWCXXTEST_H*/
