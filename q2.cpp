#include <iostream>
#include <iomanip>
using namespace std;

void getRandnum(int &n1, int &n2, int &n3) {
	srand((unsigned int)time(NULL));
	n1=rand()%100;
	n2=rand()%100;
	n3=rand()%100;
}


int  findMin(int n1, int n2, int n3){

if(n1<n2 && n1<n3)
	return n1;
else if(n2<n3)
	return 2;
else 
	return n3; 
} 

void printResult(int n1, int n2, int n3, int min){

	cout << "Num1 : " << n1<< endl; 
	cout << "Num2: " << n2 << endl;
	cout << "Num3: " << n3 << endl;
	cout << "Minimum is: " << min << endl;
} 

// int main(){ 
// int n1, n2, n3, min; 
// getInput(n1, n2, n3);
// min = findMin(n1, n2, n3);
// printResult(n1, n2, n3, min);

// } 
