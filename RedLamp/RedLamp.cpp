// RedLamp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void print(int x) {
	cout << x << endl;
}
void print(string x) {
	cout << x << endl;
}
void print(int nums[]) {
	for (int i = 0; i <= sizeof(nums) / sizeof(nums[0]); i++)
		cout << nums[i] << " ";
}
int main()
{
    cout << "Hello World!\n"; 
	cout << "Sergo zdarova" << endl;
	int massive[] = { 1, 2 };
	cout << sizeof(massive) / sizeof(massive[0]) << endl;
	print("1");
	cout << "massive ";
	print(massive);
	return 0;

}




