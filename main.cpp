//ООП ЛР2 РС91 Загайський
#include <iostream> // cmd
#include <cstdlib>
#include "stack.h" // файл з класом

using namespace std;

int main() {
	Stack st(0), st3(1);
	cout << "\n\tThis is Lab2\n\tPerformer: Zahaiskyi Arsen RS-91" << endl;
	st.push(6);
	st.push(60);
	st.push(40);
	st.push(299);
	st3.push(299);
	int popped = st.pop();
	cout << "\tGet from stack: " << popped <<endl;
	//st.multiPop(2);
	//Stack st2 = st;
	return 0;
}