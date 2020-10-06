#include <iostream>
#include <string>
using namespace std;
float calprice(float price[3][5]);
void display(string[5],float[3][5]);
int main() 
{
	string name[5];
	float price[3][5];
	
	for(int i = 0;i < 5;i++)
	{
		cout <<"Enter Product Name: ";
		cin >> name[i];
		cout <<"\tprice: ";
		cin >> price[0][i];
	}
	calprice(price);
	display(name , price);

	system("pause");

return 0;
}
float calprice(float price[3][5])
{	
	for(int i = 0;i < 5;i++)
	{
		price[1][i] = price[0][i]*(7/100);
		price[2][i] = price[1][i] + price[0][i];
	}
	return price[3][5];
}
void display(string name[5],float price[3][5])
{	
	cout<< "======================================" <<endl;
	cout << "No.\tProduct\tPrice\tVat7%\tNet" <<endl;
	cout << "======================================" <<endl;
	for(int i = 0;i < 5; i++)
	{
		cout << i+1 <<"\t"<<name[i]<<"\t"<< price[0][i] <<"\t"<<price[1][i] <<"\t"<< price[2][i] <<endl;
	}
}
