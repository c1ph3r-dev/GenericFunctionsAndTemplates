#include <iostream>

using std::cout;
using std::endl;

template<class T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 5, b = 7;
	cout << "a = " << a << " - " << "b = " << b << endl;
	Swap(a, b);
	cout << "a = " << a << " - " << "b = " << b << endl;

	char c = 'c', d = 'd';
	cout << "c = " << c << " - " << "d = " << d << endl;
	Swap(c, d);
	cout << "c = " << c << " - " << "d = " << d << endl;

	return 0;
}