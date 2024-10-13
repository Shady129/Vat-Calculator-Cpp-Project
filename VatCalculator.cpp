#include <iostream>

using namespace std;


float ReadAmount(string Message)
{
	int Number;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}


float TotalBillAfterValueAddedTax(float TotalBill)
{
	TotalBill = TotalBill * 1.05;


	return TotalBill;
}



int main()
{
	float TotalBill = ReadAmount("Enter The Total Bill: ");

	cout << "Total Bill befor adding VAT =  " << TotalBill << " Dhs" << endl;

	cout << "Total Bill after adding VAT =  " << TotalBillAfterValueAddedTax(TotalBill)
	<< " Dhs" << endl; 

	return 0;

}
