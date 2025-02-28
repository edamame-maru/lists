#include <iostream>

int main()
{
	int x; // 加減乗除する値
	int y; // 加減乗除する値

	cout << "xとyを加減乗除します。\n";

	cout << "xの値：";
	cin >> x;

	cout << "yの値：";
	cin >> y;

	cout << "x + yは" << x + y << "です。\n"; // x + yの値を表示
	cout << "x - yは" << x - y << "です。\n"; // x - yの値を表示
	cout << "x * yは" << x * y << "です。\n"; // x * yの値を表示
	cout << "x / yは" << x / y << "です。\n"; // x / yの値を表示(商）
	cout << "x % yは" << x % y << "です。\n"; // x % yの値を表示（剰余）
}
