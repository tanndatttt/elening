#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Nhap 4 so: ";
	cin >> a >> b >> c >> d;
	// tạo mảng
	int day_so[4] = { a, b, c, d };
	int n = 4;
	// dùng thuật toán sắp xếp chọn (selection sort)
	for (int i = 0; i < n - 1; i += 1)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (day_so[j] < day_so[min])
			{
				min = j;
			}
		}
		swap(day_so[i], day_so[min]);
	}
	cout << "ket qua la: " << day_so[0] << " " << day_so[3];
}