#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
	double x, y, R, x1, y1;
	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;
	for (int i = 1; i <= 10; i++) {
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		bool A = (x <= R && x >= -R && y <= R && y >= -R && 
			(((x + R) * (x + R)) + ((y - R) * (y - R)) >= R * R) && 
			(((x - R) * (x - R)) + ((y + R) * (y + R)) >= R * R));

		if (A) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	// random
	for (int i = 1; i <= 10; i++) {
		x1 = -R*2 + rand() * (2*R - (-R*2)) / RAND_MAX;
		y1 = -R*2 + rand() * (2*R - (-R*2)) / RAND_MAX;

		bool A1 = (x1 <= R && x1 >= -R && y1 <= R && y1 >= -R && 
			(((x1 + R) * (x1 + R)) + ((y1 - R) * (y1 - R)) >= R * R) && 
			(((x1 - R) * (x1 - R)) + ((y1 + R) * (y1 + R)) >= R * R));

		if (A1) {
			cout << "Yes: " << "x1: " << x1 << " y2: " << y1 << endl;
		}
		else {
			cout << "No: " << "x1: " << x1 << " y2: " << y1 << endl;
		}
	}
	system("pause");
	return 0;
}