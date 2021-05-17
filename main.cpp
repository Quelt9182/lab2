/*
До того ж стек характеризується операціями, які на ньому можна виконувати:

    створення порожнього стека;
    додавання елемента в вершину стека,   тобто заштовхування елемента -    void push(int elem)
    видалення елемента з вершини стека,  тобто виштовхування  елемента, і повернення його значення  -  int pop( )
    перевірка, чи порожній стек -   bool isEmpty()
    виштовхнути кілька елементів   -  void multiPop( int  N)
    також додати метод  для показу всіх елементів, що знаходяться в стеці - void show()
*/
//ООП ЛР2 РС91 Загайський
#include <iostream> // cmd
#include "stack.h" // файл з класом

using namespace std;

int main() {
	Stack st(0);
	cout << "\n\tThis is Lab2\n\tPerformer: Zahaiskyi Arsen RS-91" << endl;
	st.push(6);
	st.push(60);
	st.push(40);
	st.push(299);
	int popped = st.pop();
	cout << "\tGet from stack: " << popped << endl;
	st.multiPop(2);
	Stack st2(st);
	return 0;
}