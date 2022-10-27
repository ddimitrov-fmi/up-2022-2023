#include<iostream>
using namespace std;


int main()
{
	int price, usb, ram;
	bool ssd;

	cin >> price >> usb >> ram >> ssd;

	bool expensive = (1000 <= price && price <= 1500) && usb >= 3 && ram >= 8 && ssd;

	bool cheap = (price <= 800) && (!ssd || (ram < 8));
					
	bool ans = expensive || cheap;

  return 0;
}
