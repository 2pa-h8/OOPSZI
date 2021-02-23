#include <iostream>
using namespace std;

bool IsInArea(double x, double y) {
	if (x * x + y * y <= 1) return true;
	else if ((x >= -1) && (x <= 1) && (y <= 1) && (y >= 0)) return true;
	else return false;
}

void main(double x, double y) {
	bool result;
	setlocale(LC_ALL, "RUS");
	cout << "Ââåäèòå x:";
	cin >> x;
	cout << "Ââåäèòå y:";
	cin >> y;
	result = IsInArea(x, y);
	if (result == true) cout << "Òî÷êà íàõîäèòñÿ â çàêðàøåííîé îáëàñòè\n";
	else cout << "Òî÷êà ÍÅ íàõîäèòñÿ â çàêðàøåííîé îáëàñòè\n";
	system("pause");
}
