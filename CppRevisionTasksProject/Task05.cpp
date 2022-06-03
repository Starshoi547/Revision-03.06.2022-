/*	Задание 05. Порядковый номер числа Фибоначчи (The Count of Fibonacci Number)
*
*	Последовательность Фибоначчи определяется так:
*	F(0) = 0, F(1) = 1, F(2) = 1, F(3) = 2, F(4) = 3, …, F(n) = F(n−1) + F(n−2).
*	Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, 
*	т.е. выведите такое число N, что F(N) = A. 
*	Если А не является числом Фибоначчи, выведите число -1.
*
*	Формат входных данных [input]
*	Функция должна получать целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить порядковый номер N-числа числового ряда Фибоначчи или -1.
*
*	[Sample function input 1]: 0
*	[Sample function output 1]: 0
*
*	[Sample function input 2]: 1
*	[Sample function output 2]: 1 или 2 (оба варианта подходят, но в тесте проверяется первый вариант)
*
*	[Sample function input 3]: 2
*	[Sample function output 3]: 3
*
*	[Sample function input 4]: 3
*	[Sample function output 4]: 4
*
*	[Sample function input 5]: 55
*	[Sample function output 5]: 10
*
*	[Sample function input 6]: 75025
*	[Sample function output 6]: 25
*
*	[Sample function input 7]: 11
*	[Sample function output 7]: -1
*
*	[Sample function input 8]: -100
*	[Sample function output 8]: -1
*/

#include "Tasks.h"

int F(int n);

int A() {

};

int task05(int number) {
	if (number < 0) {
		cout << -1 << endl;
		return -1;
	}

	int k = 0;
	

	do {
		//cout << k << endl;
		if (F(k) > number) {
			cout << -1 << endl;
			return -1;
		}
		if (F(k) == number) {
			cout << k << endl;
			return k;
		}
		k++;
		
	} while (F(k) < number);
}