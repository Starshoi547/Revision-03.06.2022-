/*	Задание 02. Количество наибольших цифр числа (The Count of Max Digit)
*
*	Дано целое число. Определите, какое количество цифр заданного числа, равны его наибольшей цифре.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[Sample function input 1]: 157
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 4991
*	[Sample function output 2]: 2
*
*	[Sample function input 3]: 0
*	[Sample function output 3]: 1
*
*	[Sample function input 4]: -12345
*	[Sample function output 4]: 1
*/


#include "Tasks.h"

int task02(long long number) {
	if (number < 0) {
		number *= -1;
	}
	int k = 0; // Где k - наибольшая цифра
	int n = 0; // Где n - Кол-во наибольших цифр
	int number2 = number; // Где number2 - скопированное число

	while (number % 10 == 0) {
		number = number / 10;
		if (number == 0) {
			return 1;
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

	do {
		//cout << number2 % 10 << endl;
		if (number2 == 0) {
			break;
		}
		if (k == number2 % 10) {
			n++;
		}
		number2 /= 10;
	} while (number2 % 10 != 0);

	return n;
}
