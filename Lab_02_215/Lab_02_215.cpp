// Lab_02_215.cpp : This program will take in two numbers inputted by the user and perform Ax+B=0, and solve for X and print it.
// Written by Andrew Snyder
// 1/19/2023

#include <iostream>

using namespace std;
//main
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Andrew and I'm going to solve the equation: \nAx+B=0";
	cout << "\nPlease enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "Solving" << A << "x+" << B << "=0 for x...";
	B = -1 * B;
	X = B / A;
	cout << "\nThe Answer is:" ;
	cout << "\nx=" << X;
}
