#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

void BinaryToDecimal(string a_binaryNumber);
void DecimalToBinary(int a_decialNumber);

int result;

int main()
{
	bool loop = true;
	int userChoice;
	string binaryNum;
	int decimalNum;

	cout << "Binary to Decimal / Decimal to Binary Converter" << endl;
	cout << "By: Jared R || Started 11/4/14" << endl;
	cout << "\n\n" << endl;
	cout << "What conversion do you wish to make?" << endl;
	cout << "1: Binary -> Decimal" << endl;
	cout << "2: Decimal -> Binary" << endl;
	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		cout << "Please enter your Binary number" << endl;
		cin >> binaryNum;
		BinaryToDecimal(binaryNum);
		cout << "" << endl;
		break;

	case 2:
		cout << "Please enter your Decimal number" << endl;
		cin >> decimalNum;
		DecimalToBinary(decimalNum);
		cout << "" << endl;
		break;

	default:
		cout << "That's not a choice" << endl;
		break;
	}
	
	system("pause");
	return 0;
}

void BinaryToDecimal(string a_binaryNumber)
{
	//Method to be used as an example from: http://www.cplusplus.com/forum/general/105793/
	//credit to mokhi64
	int dec = 0;
	reverse(a_binaryNumber.begin(), a_binaryNumber.end());
	for (int i = 0; i < a_binaryNumber.size(); ++i)
	{
		dec += (int(a_binaryNumber[i]) - 48)*pow(2, i);
	}
	cout << dec;
}

void DecimalToBinary(int a_decialNumber)
{
	
}