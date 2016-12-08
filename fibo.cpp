#include <iostream>

using namespace std;

int fibo(int ciag);

int main()
{
	int ciag;
	
	cout << "Podaj, ktory wyraz ciagu Fibonacciego, ktory chcesz obliczyc\n";
	cin >> ciag;
	
	if (ciag < 0) {
		cout << "BLAD! Ciag Fibonacciego sklada sie wylacznie z liczb naturalnych\n";
	} else {
		ciag--;

		fibo(ciag);
	}
}

int fibo(int ciag)
{
	static int a, b = 1, c;	//a i c r�wne zero, poniewa� s� zmiennymi lokalnymi statycznymi; i u�y�em tutaj taba, a nie spacji, ale to pewnie widzisz :D
	
	c = a + b;
	
	ciag--;

	if (ciag > 0) {
		a = c - a;
		b = c;
		
		fibo(ciag);
	} else {
		cout << "Poszukiwany wyraz wynosi " << c << "\n";
	}
}
//Program mo�na wywali� wpisuj�� liczb� zmiennoprzecinkow�. Nie mam - na chwil� obecn� - sensownego pomys�u jak to sprawdzi�. Zmienna ci�g jest intem, wi�c wpisanie 1.9 stworzy zmienn� o warto�ci 1, jednak to jest b��d, bo przecie� nie powinien po prostu przyj�� takiej warto�ci i nie odpali� funkcji. Tak jak jest przy ujemnych. Puszuj�, �eby by�o o czym gada�. 
