#include <iostream>

using namespace std;



void main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    cout << "Введите ваше число ( после нажмите enter ):";
    cin >> a;

    if (a > 5) {
        cout << "Ваше число больше 5" << endl;
    }
    else if (a == 5) {
        cout << "Ваше число равно 5" << endl;
    }
    else {
        cout << "Ваше чсило меньше 5" << endl;
    }
}