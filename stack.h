#include <iostream>

using namespace std;

class Stack{

public:
	int topData; // Індекс верхнього елементу
	int stSize; // Розмір стеку
	int* pStack; // Вказівник на масив

	Stack(int StartSize);
	Stack(const Stack& last);
	Stack& operator= (const Stack& prev);
	void push(int elem);
	int pop();
	bool isEmpty();
	void multiPop(int N);
	void show();
	~Stack();
};