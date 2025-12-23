
#include <iostream>
using namespace std;
int main()
{
	// nhap so tien
	long long so_tien;
	cout << "Nhap so tien (toi da 5tr va toi thieu 10000): "; cin >> so_tien;

	//gan menh gia
	long long mg_1 = 1000, mg_2 = 2000, mg_3 = 5000, mg_4 = 10000, mg_5 = 20000, mg_6 = 50000, mg_7 = 100000, mg_8 = 200000, mg_9 = 500000;
	
	// so to tien
	int lan_lap_mg9 = 0, lan_lap_mg8 = 0, lan_lap_mg7 = 0,  lan_lap_mg6 = 0, lan_lap_mg5 = 0, lan_lap_mg4 = 0, lan_lap_mg3 = 0, lan_lap_mg2 = 0, lan_lap_mg1 = 0;
	//dem so to
	while (so_tien >= mg_9)
	{
		so_tien = so_tien - mg_9;
		lan_lap_mg9++;
	}

	while (so_tien >= mg_8)
	{
		so_tien = so_tien - mg_8;
		lan_lap_mg8++;
	}
    
	while (so_tien >= mg_7)
	{
		so_tien = so_tien - mg_7;
		lan_lap_mg7++;
	}
	
	while (so_tien >= mg_6)
	{
		so_tien = so_tien - mg_6;
		lan_lap_mg6++;
	}
    
	while (so_tien >= mg_5)
	{
		so_tien = so_tien - mg_5;
		lan_lap_mg5++;
	}

	while (so_tien >= mg_4)
	{
		so_tien = so_tien - mg_4;
		lan_lap_mg4++;
	}

	while (so_tien >= mg_3)
	{
		so_tien = so_tien - mg_3;
		lan_lap_mg3++;
	}

	while (so_tien >= mg_2)
	{
		so_tien = so_tien - mg_2;
		lan_lap_mg2++;
	}

	while (so_tien >= mg_1)
	{
		so_tien = so_tien - mg_1;
		lan_lap_mg1++;
	}

	if (lan_lap_mg9 != 0){
	    
	    cout << lan_lap_mg9 << "to 500.000" << endl;
	}
	
	if (lan_lap_mg8 != 0)
	{
	    cout << lan_lap_mg8 << " to 200.000" << endl;
	}
	
	if (lan_lap_mg7 != 0)
	{
	    cout << lan_lap_mg7 << " to 100.000" << endl;
	}
	
	if (lan_lap_mg6 != 0)
	{
	    cout << lan_lap_mg6 << " to 50.000" << endl;
	}
	
	if (lan_lap_mg5 != 0)
	{
	    cout << lan_lap_mg5 << " to 20.000" << endl;
	}
	
	if (lan_lap_mg4 != 0)
	{
	    cout << lan_lap_mg4 << " to 10.000" << endl;
	}
	
	if (lan_lap_mg3 != 0)
	{
	    cout << lan_lap_mg3 << " to 5.000" << endl;
	}
	if (lan_lap_mg2 != 0)
	{
	    cout << lan_lap_mg2 << " to 2.000" << endl;
	}
	    
	if (lan_lap_mg1 != 0)
	{
	    cout << lan_lap_mg1 << " to 1.000" << endl;
	}
}
