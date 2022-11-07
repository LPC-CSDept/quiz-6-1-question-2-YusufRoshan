#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &n1, int &n2, int &n3); 

int  findMin(int n1, int n2, int n3); 

if(n1<n2 && n1<n3)
	return n1;
else if(n2<n3)
	return 2;
else 
	return n3; 

void printResult(int n1, int n2, int n3, int min);

	cout << "Num1 : " << n1<< endl; 
	cout << "Num2: " << n2 << endl;
	cout << "Num3: " << n3 << endl;
	cout << "Minimum is: " << min << endl;

int main(){ 
int n1, n2, n3, min; 
getInput(n1, n2, n3);
min = findMin(n1, n2, n3);
printResult(n1, n2, n3, min);
} 

// ******************************
// Your code here
// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}