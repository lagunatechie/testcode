#include <iostream>
#include <cmath>

using namespace std;


int firstNumber;
int secondNumber;
int multiplicationResult;


// Declare a function
void print();
int piprint();
void arr();


int multiply(int x, int y){
	// Here we will multiply

	multiplicationResult = firstNumber * secondNumber;

	return x * y;
	
}


int main()
{
	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter the first number: ";
	firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number: ";
	secondNumber = 0;
	cin >> secondNumber;

	cout << "Printing main multiplication" << multiply(firstNumber, secondNumber) << endl;
	cout << "Printing side multiplication" << multiplicationResult << endl;

	
	print();
	piprint();
	arr();


	

	return 0;

}


void print(){
	cout << "Printing some stuff" << endl;
	int num = 0b1111;

	cout << num << endl;
}


int piprint(){
	cout << M_PI << endl;

	return 0;
}

void arr(){
	int myarray [5] = {5,2,1,0,3};
	double dosarray [2][2] = {{1,2}, {3, 4}};


	cout << myarray [0] << myarray [1] << myarray [2] << myarray [3] << "Print some stuff" << endl;
	cout << dosarray [0][0] << dosarray [0][1] << dosarray [1][0] << dosarray [1][1] << endl;

}





// Notes
// MultiplyNumbers is Pascal casing
// multiplicationResult is camel casing
