#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "nhap 2 so nguyen: "; cin >> a >> b;
	char c;
	cout << "nhap phep tinh: "; cin >> c;

	switch (c)
	{
	case '+':
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case'-':
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	case'*':
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case '/':
		if (b != 0)
			cout << a << "/" << b << "=" << (double)a / b << endl;
		else
			cout << "Phep tinh khong hop le!" << endl;
		break;
	default:
		cout << "Phep tinh khong hop le!" << endl;
	}
}