#include <iostream>

using namespace std;

class Stack{

public:
	int topData; // Індекс верхнього елементу
	int stSize; // Розмір стеку
	int* pStack; // Вказівник на масив

	Stack(int StartSize);
	Stack(const Stack& last);
	void push(int elem);
	int pop();
	void multiPop(int N);
	bool isEmpty();
	void show();
	~Stack();
};