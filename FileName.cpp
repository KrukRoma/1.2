#include<iostream>
using namespace std;

int main()
{
	/*1*/

	float R1, R2, R3, R0;
	cout << "Enter the first support: ";
	cin >> R1;
	cout << "Enter the second support: ";
	cin >> R2;
	cout << "Enter the third support: ";
	cin >> R3;

	R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
	cout << "R0 = " << R0 << endl;

	/*2*/

	float R, S, L;
	const float P = 3.14159;

	cout << "Enter radius: ";
	cin >> R;

	S = P * R * R;
	L = 2 * P * R;

	cout << "Area: " << S << endl;
	cout << "Lenght: " << L << endl;

	/*3*/

	float S1, V, t, A;
	cout << "Enter the speed(m/s): ";
	cin >> V;

	cout << "Enter the time(second): ";
	cin >> t;

	cout << "Enter the acceleration(m/s): ";
	cin >> A;

	S1 = (V * t + (A * t * t) / 200);
	cout << "Lenght: " << S1;

	


}