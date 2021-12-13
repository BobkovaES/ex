#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "введите натуральное число: ";
    int N, Sum = 0, Sum_m = 0, osn;
    cin >> N;
    for (int i = 2; i <= 9; i++) {
        int Ncopy = N;
        Sum = 0;
        while (Ncopy > 0) {
            Sum += Ncopy % i;
            Ncopy /= i;
        }
        if (Sum > Sum_m) {
            Sum_m = Sum;
            osn = i;
        }
    }
    cout << "наибольшая сумма чисел в основании системы " << osn <</*" "<<Sum_m<<*/ endl;

    for (int i = 2; i <= 9; i++) {
        int Ncopy = N;
        Sum = 0;
        while (Ncopy > 0) {
            Sum += Ncopy % i;
            Ncopy /= i;
        }
        if (Sum ==
            Sum_m) {
            cout << i << endl;
        }
    }
}