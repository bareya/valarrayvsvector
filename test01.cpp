#include <iostream>
#include <vector>
#include <valarray>
#include <chrono>

using std::string;
using std::vector;
using std::valarray;
using std::chrono::system_clock;
using std::begin;
using std::end;
using std::back_inserter;
using std::transform;

namespace  {

enum class Operation
{
	Addition,
	Subtraction,
	Multiplication,
	Division
};

const long bigSize = 200000000;

template<typename T>
void valarrayRun(const Operation& op)
{
	valarray<T> a(1.0, bigSize);
	valarray<T> b(20.0, bigSize);
	valarray<T> c;

	auto start = system_clock::now();
	switch (op)
	{
		case Operation::Addition:
		{
			c=a+b;
			break;
		}
		case Operation::Subtraction:
		{
			c=a-b;
			break;
		}
		case Operation::Multiplication:
		{
			c=a*b;
			break;
		}
		case Operation::Division:
		{
			c=a/b;
			break;
		}
	}
	auto end = system_clock::now();
	std::cout << (end-start).count() << std::endl;
	std::cout << c[0] << std::endl;
}

template<typename T>
void vectorRun(const Operation& op)
{
	vector<T> a(bigSize, 1.0);
	vector<T> b(bigSize, 20.0);
	vector<T> c;
	c.reserve(bigSize);

	auto start = system_clock::now();
	switch (op)
	{
		case Operation::Addition:
		{
			std::transform(begin(a), end(a), begin(b), back_inserter(c), std::plus<T>{});
			break;
		}
		case Operation::Subtraction:
		{
			std::transform(begin(a), end(a), begin(b), back_inserter(c), std::minus<T>{});
			break;
		}
		case Operation::Multiplication:
		{
			std::transform(begin(a), end(a), begin(b), back_inserter(c), std::multiplies<T>{});
			break;
		}
		case Operation::Division:
		{
			std::transform(begin(a), end(a), begin(b), back_inserter(c), std::divides<T>{});
			break;
		}
	}
	auto end = system_clock::now();
	std::cout << (end-start).count() << std::endl;
	std::cout << c[0] << std::endl;
}

} // namespace


int main(int argc, char* argv[])
{
	if(argc!=3)
	{
		std::cout << "Incorect number of arguments" << std::endl;
		return 0;
	}

	string arg1{argv[1]};
	string arg2{argv[2]};

	Operation op;
	if(arg1=="-a") op = Operation::Addition;
	else if(arg1=="-s") op = Operation::Subtraction;
	else if(arg1=="-m") op = Operation::Multiplication;
	else if(arg1=="-d") op = Operation::Division;
	else {
		std::cout << "Invalid argument " << arg1 << std::endl;
		return 0;
	}

	if(arg2=="-vector")
	{
		vectorRun<double>(op);
	} else if(arg2=="-valarray")
	{
		valarrayRun<double>(op);
	} else {
		std::cout << "Invalid argument " << arg2 << std::endl;
		return 0;
	}

	return 0;
}

