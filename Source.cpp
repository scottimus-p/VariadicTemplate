#include <tuple>
#include <utility>
#include <cmath>
#include <iostream>

using std::tuple;
using std::make_tuple;
using std::cout;
using std::endl;
using std::tie;

double power(double base, int exponent);


template <typename ...OutputType, typename ...InputType>
tuple<OutputType...> getExponents(double base, InputType... Args)
{
	return make_tuple<OutputType...>(power(base, Args)...);
}

int main(int argc, char** argv)
{
	double a, b;
	tie(a, b) = getExponents<double, double>(2.1, 1, 2);

	cout << a << " " << b << endl;

	return 0;
}


double power(double base, int exponent)
{
	return pow(base, exponent);
}


