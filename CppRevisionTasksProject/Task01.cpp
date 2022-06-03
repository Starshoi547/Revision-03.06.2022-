/*	Задание 01. Минимальная цифра числа (Number Digit Min)
*
*	Дано целое число. Найдите минимальную цифру данного числа.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить минимальную цифру заданного числа.
*
*	[Sample function input 1]: 123456789
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 132540
*	[Sample function output 2]: 0
*
*	[Sample function input 3]: 0
*	[Sample function output 3]: 0
*
*	[Sample function input 4]: -15
*	[Sample function output 4]: 1
*/


#include "Tasks.h"

int task01(long long number) {
	if (number < 0) {
		number *= -1;
	}
	int k = 9;

	if (number % 10 == 0) {
		return 0;
	}

	while (number % 10 == 0) {
		number = number / 10;
		if (number == 0) {
			return 0;
			break;
		}
	}


	while (number % 10 != 0) {
		if (number == 0) {
			break;
		}
		if (k > number % 10) {
			k = number % 10;
		}
		number /= 10;
		//cout << k << endl;

	}

	//cout << "end" << endl;
	return k;
}
