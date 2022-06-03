#pragma once
#include "Tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(123456789) == 1
		&& task01(132540) == 0
		&& task01(0) == 0
		&& task01(-15) == 1
		&& task01(15) == 1
		&& task01(-9) == 9
		&& task01(-123456) == 1
		&& task01(1234567890) == 0
		&& task01(-1234567890) == 0
		&& task01(-123456789) == 1
		&& task01(900) == 0
		&& task01(-900) == 0
		&& task01(11111) == 1
		&& task01(-11111) == 1
		&& task01(999999) == 9
		&& task01(-999999) == 9
		&& task01(1000000) == 0
		&& task01(-1000000) == 0;

	cout << "Task 01: Number Digit Min" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(159) == 1
		&& task02(4991) == 2
		&& task02(0) == 1
		&& task02(-12345) == 1
		&& task02(0) == 1
		&& task02(2) == 1
		&& task02(3) == 1
		&& task02(4) == 1
		&& task02(5) == 1
		&& task02(6) == 1
		&& task02(7) == 1
		&& task02(8) == 1
		&& task02(9) == 1
		&& task02(10) == 1
		&& task02(11) == 2
		&& task02(13) == 1
		&& task02(17) == 1
		&& task02(19) == 1
		&& task02(23) == 1
		&& task02(29) == 1
		&& task02(31) == 1
		&& task02(33333) == 5
		&& task02(11111) == 5
		&& task02(31313) == 3
		&& task02(13131) == 2
		&& task02(112233) == 2
		&& task02(223311) == 2
		&& task02(221133) == 2
		&& task02(2211133) == 2
		&& task02(2221133) == 2
		&& task02(2233311) == 3
		&& task02(-33333) == 5
		&& task02(-11111) == 5
		&& task02(-31313) == 3
		&& task02(-13131) == 2
		&& task02(-112233) == 2
		&& task02(-223311) == 2
		&& task02(-221133) == 2
		&& task02(-2211133) == 2
		&& task02(-2221133) == 2
		&& task02(-2233311) == 3;

	cout << "Task 02: The Count of Max Digit" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(12345) == 4
		&& task03(-56789) == 8
		&& task03(11) == -1
		&& task03(0) == -1
		&& task03(56789) == 8
		&& task03(-12345) == 4
		&& task03(41) == 1
		&& task03(-41) == 1
		&& task03(1) == -1
		&& task03(2) == -1
		&& task03(3) == -1
		&& task03(4) == -1
		&& task03(5) == -1
		&& task03(6) == -1
		&& task03(7) == -1
		&& task03(8) == -1
		&& task03(9) == -1
		&& task03(10) == 0
		&& task03(12) == 1
		&& task03(123) == 2
		&& task03(1234) == 3
		&& task03(1000) == 0
		&& task03(-10) == 0
		&& task03(-12) == 1
		&& task03(-123) == 2
		&& task03(-1234) == 3
		&& task03(-1000) == 0;

	cout << "Task 03: The Double Max" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(0) == 0
		&& task04(1) == 1
		&& task04(2) == 1
		&& task04(3) == 2
		&& task04(4) == 3
		&& task04(5) == 5
		&& task04(6) == 8
		&& task04(7) == 13
		&& task04(8) == 21
		&& task04(9) == 34
		&& task04(10) == 55
		&& task04(11) == 89
		&& task04(12) == 144
		&& task04(13) == 233
		&& task04(14) == 377
		&& task04(15) == 610
		&& task04(25) == 75025
		&& task04(-1) == -1
		&& task04(-9) == -1
		&& task04(-10) == -1
		&& task04(-99) == -1
		&& task04(-100) == -1;

	cout << "Task 04: The Fibonacci Number" << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(0) == 0
		&& task05(1) == 1
		&& task05(2) == 3
		&& task05(3) == 4
		&& task05(4) == -1
		&& task05(5) == 5
		&& task05(6) == -1
		&& task05(7) == -1
		&& task05(8) == 6
		&& task05(9) == -1
		&& task05(10) == -1
		&& task05(11) == -1
		&& task05(12) == -1
		&& task05(13) == 7
		&& task05(15) == -1
		&& task05(20) == -1
		&& task05(21) == 8
		&& task05(30) == -1
		&& task05(34) == 9
		&& task05(50) == -1
		&& task05(55) == 10
		&& task05(89) == 11
		&& task05(100) == -1
		&& task05(144) == 12
		&& task05(233) == 13
		&& task05(377) == 14
		&& task05(500) == -1
		&& task05(610) == 15
		&& task05(75025) == 25
		&& task05(11) == -1
		&& task05(-100) == -1
		&& task05(-1) == -1;

	cout << "Task 05: The Count of Fibonacci Number" << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {
	bool result = task06(123456) == 1
		&& task06(1234567789) == 2
		&& task06(1122233335) == 4
		&& task06(0) == 1
		&& task06(-15) == 1
		&& task06(-1234567789) == 2
		&& task06(-1122233335) == 4
		&& task06(1111122223333) == 5
		&& task06(333344455551) == 4
		&& task06(-11111) == 5
		&& task06(12) == 1
		&& task06(11122) == 3
		&& task06(-55558799912) == 4
		&& task06(5588899912222) == 4
		&& task06(-22233222) == 3		
		&& task06(442555) == 3;

	cout << "Task 06: The Largest Sequence of Digits" << (result ? RIGHT : WRONG) << endl;
}

void testingTask07() {
	bool result = task07(23232) == 2
		&& task07(1212110) == 2
		&& task07(0) == 0
		&& task07(15143120) == 3
		&& task07(12345) == 0
		&& task07(11111) == 0
		&& task07(1) == 0
		&& task07(-1) == 0
		&& task07(12) == 0
		&& task07(-21) == 0
		&& task07(123) == 0
		&& task07(-321) == 0
		&& task07(121) == 1
		&& task07(-12121) == 2
		&& task07(1212121) == 3
		&& task07(-2121212) == 2		
		&& task07(12345678987654321) == 1;

	cout << "Task 07: The Count of Local Maximus" << (result ? RIGHT : WRONG) << endl;
}
