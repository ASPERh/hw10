#include "Header.h"

//Задание 1

//void reverse(int a)
//{
//    if (a > 0)
//    {
//        cout << a % 10;
//        reverse(a / 10);
//    }
//}
//
//int main()
//{
//    int a;
//    cin >> a;
//    reverse(a);
//}

//Задание 2

//int decreaser(int number, int decrease) {
//
//	if (decrease == 0)
//		return 1;
//	return number * decreaser(number, decrease - 1);
//}
//int main() {
//
//	int number;
//	int degree;
//
//	cout << "number: ";
//	cin >> number;
//
//	cout << "degree: ";
//	cin >> degree;
//
//	int result = decreaser(number, degree);
//	cout << result;
//}

//Задание 3

int Summary(int a, int b)
{
    if (a > b)
        return 0;
    return a + Summary(a + 1, b);
}

int main() {
    int a;
    int b;

    cout << "first number of range: ";
    cin >> a;

    cout << "last number of range: ";
    cin >> b;

    int sum = Summary(a, b);
    cout << sum;
}