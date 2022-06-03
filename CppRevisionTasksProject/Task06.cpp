/*	Задание 06. Наибольшая последовательность цифр (The Largest Sequence of Digits)
*
*	Дано целое число. Определите, какое наибольшее число подряд идущих цифр заданного числа равны друг другу.
*	Если не нашлось ни одной пары, тройки и т.д. цифр, равных друг другу, то программа должна вывести число 1.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[Sample function input 1]: 123456
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 1234567789
*	[Sample function output 2]: 2
*
*	[Sample function input 3]: 1122233335
*	[Sample function output 3]: 4
*
*	[Sample function input 4]: 0
*	[Sample function output 4]: 1
*
*	[Sample function input 5]: -15
*	[Sample function output 5]: 1
*/


#include "Tasks.h"

int task06(long long number) {
	if (number < 0) {
		number *= -1;
	}
	if (number == 0) {
		return 1;
	}

	
	int k = number % 10;
	int count = 0;
	int theBiggest = 0;


	while (number % 10 != 0) {
		if (k == number % 10) {
			count++;
			if (number / 10 == 0) {
				if (count > theBiggest) {
					theBiggest = count;
				}
			}
		}
		if (k != number % 10) {
			if (count > theBiggest) {
				theBiggest = count;
			}
			count = 1;
			k = number % 10;
		}
		number /= 10;
		//cout << count << " count" << endl;
		
	}

	//cout << theBiggest << " The biggest" << endl;
	return theBiggest;
}
