#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap 3 so: ";
	cin >> a >> b >> c;
	// tạo mảng
	int day_so[3] = { a, b, c };
	int n = 3;
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
	// day_so [n] n là thứ tự để in ra màn hình hoặc teminal
	cout << "so o giua la: " << day_so[1];
}