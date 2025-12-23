#include<iostream>
using namespace std;
int main()
{
	float a, b, c, n;
	float a1,b1,c1;
	cout << "nhap 3 so a,b,c: ";
	cin >> a >> b >> c;
	cout << "nhap n: ";
	cin >> n;
	a1 = n - a;
	b1 = n - b;
	c1 = n - c;
	// xet xem so nao gan n nhat
	if (a1 < b1 && a1 < c1)
		cout << "so gan n nhat la: " << a;
	else if (b1 < a1 && b1 < c1)
		cout << "so gan n nhat la: " << b;
	else
		cout << "so gan n nhat la: " << c;
}
