#include <iostream>

using namespace std;
//숫자 
//문자 
//문자열
//연산자 -> operator
// Money
// [0][1][2][3][4][5][6][7][8][9]

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cout << "Go Home" << endl;
	}
	
	cout << "하지만 못간다." << endl;
	int Money[10];

	//*(Money + 0) = 0;
	//*(Money + 1) = 3;
	// 
	//C++11 for문
	for (int Data : Money)
	{
		Data = 10;
	}
	for(int i =0; i < 10; i++)
	{
		cout << "Money[" << i << "] : " << 10 << endl;
	}


	//Money[0] = 10;
	//Money[1] = 10;
	//Money[2] = 10;
	//Money[3] = 10;
	//Money[4] = 10;
	//Money[5] = 10;
	//Money[6] = 10;
	//Money[7] = 10;
	//Money[8] = 10;
	//Money[9] = 10;

	//4byte 2^32 -> 4,294,967,296
	int MoneyOfMinji = 100;
	//자료형 변수명 = 초기값;
	//상수 작업 X -> Hard Coding안함

}