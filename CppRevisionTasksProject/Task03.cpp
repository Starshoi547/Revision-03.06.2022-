/*	Задание 03. Вторая максимальная цифра (The Double Max)
*
*	Дано целое число. Определите вторую по величине цифру данного числа, т.е. цифру, которая будет наибольшим,
*	если из числа удалить наибольшую цифру. Если нет такой цифры, то вывести -1.
*
*	Формат входных данных [input]
*	Функция должна получать целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[Sample function input 1]: 12345
*	[Sample function output 1]: 4
*
*	[Sample function input 2]: -56789
*	[Sample function output 2]: 8
* 
*	[Sample function input 3]: 11
*	[Sample function output 3]: -1
*
*	[Sample function input 4]: 0
*	[Sample function output 4]: -1
*/

#include "Tasks.h"

int task03(long long number) {
	if (number < 0) {
		number *= -1;
	}
	int k = 0;
	int n = -1;
	int number2 = number;

	while (number % 10 == 0) {
		number = number / 10;
		if (number == 0) {
			return -1;
			break;
		}
	}


	while (number % 10 != 0) {
		if (number == 0) {
			break;
		}
		if (k < number % 10) {
			k = number % 10;
		}
		number /= 10;

	}

	if (number2 == 0) {
		return -1;
	}

	 do {
		if (number2 % 10 < k && number2 % 10 > n) {
			n = number2 % 10;
			
		}
		//cout << n << ", " << number2 << endl;
		number2 /= 10;
	 } while (number2 % 10 != 0);
	if (k == n) {
		return -1;
	} 
	//cout << n << endl;
	return n;
}
