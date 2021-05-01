#include "Buffer.hpp"

int main()  {
	Buffer<double> buffer1{1000000};
	Buffer<double> buffer2{1000000};
	myswap(buffer1, buffer2);
}