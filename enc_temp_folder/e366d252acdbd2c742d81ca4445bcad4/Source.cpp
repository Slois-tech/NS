#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	ofstream fail; //создаём объект класса ofstream
	fail.open("Two.csv"); // связываем объект класса с файлом
	for (int i = 0; i < 10; i++)
	{
		int c;
		cin >> c; // вводим данные через консоль
		fail << c << endl; // записываем данные в файл
	}
	fail.close(); // закрываем файл

	return 0;
}



	




	

	























