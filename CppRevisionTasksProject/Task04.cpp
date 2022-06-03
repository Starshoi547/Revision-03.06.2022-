/*	Задание 04. Число Фибоначчи (The Fibonacci Number)
*
*	Последовательность Фибоначчи определяется так: 
*	F(0) = 0, F(1) = 1, F(2) = 1, F(3) = 2, F(4) = 3, …, F(n) = F(n−1) + F(n−2).
*	По данному числу N определите N-е число числового ряда Фибоначчи F(N).
*	Если число задано не верно, то вывести -1.
*
*	Формат входных данных [input]
*	Функция должна получать целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить N-число числового ряда Фибоначчи или ноль.
*
*	[Sample function input 1]: 0
*	[Sample function output 1]: 0
*
*	[Sample function input 2]: 1
*	[Sample function output 2]: 1
*
*	[Sample function input 3]: 10
*	[Sample function output 3]: 55
*
*	[Sample function input 4]: 25
*	[Sample function output 4]: 75025
* 
*	[Sample function input 5]: -100
*	[Sample function output 5]: -1
*/

#include "Tasks.h"

int F(int n) {
	
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	if (n >= 2) {
		return F(n - 1) + F(n - 2);
	}
}

int task04(int number) {
	//cout << number << endl;
	if (number < 0) {
		return -1;
	}
	

	int k = 0;
	k = F(number);
	return k;
}
