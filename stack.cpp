#include <iostream> // cmd
#include <cstdlib>
#include "stack.h" // файл з класом

using namespace std;

Stack:: Stack(int StartSize){
	pStack = new int[StartSize];
	stSize = StartSize;
}
// Конструктор копіювання
Stack:: Stack(const Stack& last){
	stSize = last.stSize;
	pStack = new int[stSize];
	for(int i = 0; i < stSize; ++i){
		pStack[i] = last.pStack[i];
	}
	cout << "\n\tFrom copy constructor: " << endl;
	show();
}
//Оператор присвоювання
Stack& Stack:: operator = (const Stack& prev){
	stSize = prev.stSize + 2;
	pStack = new int[stSize];
	for(int i = 0; i < stSize; ++i){
		pStack[i] = prev.pStack[i];
	}
	cout << "\n\tFrom assignment operator: " << endl;
	show();
}
void Stack:: push(int elem){
	if(isEmpty()){
		cout << "I see that stack is empty" << endl;
	}
	int* temp = new int[stSize];
	for(int i = 0; i < stSize; ++i){
		temp[i] = pStack[i];
	}
	delete[] pStack;
	topData = stSize;
	stSize++;
	pStack = new int[stSize];
	for(int i = 0; i < stSize; ++i){
		pStack[i] = temp[i];
	}
	delete[] temp;
	pStack[topData] = elem;
	if(pStack[topData] == elem){
		cout << "\n\tPushed " << elem << " to stack" << endl;
	}
	show();
}
int Stack:: pop(){
	if (isEmpty()){
        return 0;
    }
    else{
        int popElem = pStack[topData--];
		cout << "\n\tPopped " << popElem << " from stack" << endl;
        int* temp = new int[stSize];
		for(int i = 0; i < stSize; ++i){
			temp[i] = pStack[i];
		}
		delete[] pStack;
		stSize--;
		pStack = new int[stSize];
		for(int i = 0; i < stSize; ++i){
			pStack[i] = temp[i];
		}
		delete[] temp;
		show();
        return popElem;
    }
}
void Stack:: multiPop(int N){
	if (isEmpty()){
    }
    else{
		cout << "\n\tPopped " << N << " elements from stack" << endl;
        int* temp = new int[stSize];
		for(int i = 0; i < stSize; ++i){
			temp[i] = pStack[i];
		}
		delete[] pStack;
		stSize -= N;
		pStack = new int[stSize];
		for(int i = 0; i < stSize; ++i){
			pStack[i] = temp[i];
		}
		delete[] temp;
		show();
    }
}
bool Stack:: isEmpty(){
	if(pStack == nullptr){
		cout << "Stack is emty!!!" << endl;
		return true;
	}
	else{
		return false;
	}
}
void Stack:: show(){
	cout << "\tResult 2d stack:\t"; // Виведення масиву циклом
		for(int i = 0; i < stSize; i++) 
    		cout << pStack[i] << " ";
    	cout << endl;
}
Stack:: ~Stack(){
	delete[] pStack;
	cout << "\n\tMemory clear check: " << endl;
	show();
}