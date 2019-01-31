#include <iostream>
#include <cstdint>
#include <numeric>

template<class Int>
bool PrintBitA() {

	for (std::size_t i = 0; i <= std::numeric_limits<Int>::digits; i++) {
		std::cout << (1 << (std::numeric_limits<Int>::digits - i)) << std::endl;
	}

	return true;
}

template<class Int>
bool PrintBitB() {

	std::cout << "0b";
	for (std::size_t i = 0; i < std::numeric_limits<Int>::digits; i++) {
		std::cout << 0;
	}

	return true;
}

int main() {

	std::cout <<"0xf as "<< 0b1111 << "  as " << 0xf << " as " << 15 << std::endl<< std::endl;
	std::cout << "maybe you think to... " << 0x10 << " is not?" << std::endl<< std::endl;

	std::cout << "Yes: maybe ok." << std::endl;
	std::cout << "No: maybe fail." << std::endl;
	std::cout << std::endl;

	PrintBitB<std::int64_t>();
	std::cout << std::endl;
	std::cout << std::endl;
	PrintBitA<std::int64_t>();


	return 0;
}