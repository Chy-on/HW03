#pragma once
#include <algorithm>
using namespace std;

template <typename T>
class SimpleVector {
private:
	T* data;
	int currentSize = 0;
	int currentCapacity;
public:
	SimpleVector() {
		currentCapacity = 10;
		data = new T[currentCapacity];
	}
	SimpleVector(int capacity) : currentCapacity(capacity){
		data = new T[currentCapacity];
	}
	SimpleVector(const SimpleVector& other):currentCapacity(other.currentCapacity), currentSize(other.currentSize) {
		data = new T[currentCapacity];
		for (int i = 0; i < currentSize; i++) {
			data[i] = other.data[i];
		}
	}
	~SimpleVector() {
		delete[] data;
	}

	void resize(int newCapacity) {
		if (newCapacity > currentCapacity) {
			T* newData = new T[newCapacity];
			for (int i = 0; i < currentSize; i++) {
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
			currentCapacity = newCapacity;
		}
		else {
			return;
		}
	}

	void print() {
		cout << "¿ø¼Ò: ";
		for (int i = 0; i < currentSize; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}

	void push_back(const T& value) {
		if (currentSize >= currentCapacity) {
			resize(currentCapacity + 5);
		}
		data[currentSize] = value;
		currentSize++;
	}

	void pop_back() {
		if (currentSize == 0) {
			return;
		}
		currentSize--;
	}

	int size() {
		return currentSize;
	}

	int capacity() {
		return currentCapacity;
	}

	void sortData() {
		sort(data,data+currentSize);
		cout << "sort" << endl;
	}
};