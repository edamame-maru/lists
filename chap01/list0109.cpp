// 二つの変数xとyの合計と平均を表示（変数は不定値）
#include <iostream>

using namespace std;

int main()
{
	int x = 63; // xはint型の変数（不定値となる）
	int y = 18; // xはint型の変数（不定値となる）

	cout << "xの値は" << x << "です。\n";
	cout << "yの値は" << y << "です。\n";

	cout << "合計は" << x + y << "です。\n";
	cout << "平均は" << (x + y) / 2 << "です。\n";
}
