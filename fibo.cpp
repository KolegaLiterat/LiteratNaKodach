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
	static int a, b = 1, c;	//a i c równe zero, poniewa¿ s¹ zmiennymi lokalnymi statycznymi; i u¿y³em tutaj taba, a nie spacji, ale to pewnie widzisz :D
	
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
//Program mo¿na wywaliæ wpisuj¹æ liczbê zmiennoprzecinkow¹. Nie mam - na chwilê obecn¹ - sensownego pomys³u jak to sprawdziæ. Zmienna ci¹g jest intem, wiêc wpisanie 1.9 stworzy zmienn¹ o wartoœci 1, jednak to jest b³¹d, bo przecie¿ nie powinien po prostu przyj¹æ takiej wartoœci i nie odpaliæ funkcji. Tak jak jest przy ujemnych. Puszujê, ¿eby by³o o czym gadaæ. 
