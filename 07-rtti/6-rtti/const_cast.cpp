#include <iostream>
using namespace std;

void f (int* i) {}

int main()
{	
	const int* ip = new int(2);
	//f(ip);
	int* jp = const_cast<int*>(ip);
	//double* jp = const_cast<double*>(ip);
}
