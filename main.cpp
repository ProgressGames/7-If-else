#include <iostream>

using namespace std;



void main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    cout << "������� ���� ����� ( ����� ������� enter ):";
    cin >> a;

    if (a > 5) {
        cout << "���� ����� ������ 5" << endl;
    }
    else if (a == 5) {
        cout << "���� ����� ����� 5" << endl;
    }
    else {
        cout << "���� ����� ������ 5" << endl;
    }
}