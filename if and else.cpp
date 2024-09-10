#include <iostream>

using namespace std;



void main()
{
    bool IsRain = false; //Эта переменаня говорит что сейчас не идт дождь | This change says it's not raining right now
    if (IsRain) {
        cout << "RAIN!!!" << endl; //Это сообщение выведиться только если переменаня IsRain будет true | This message will be displayed only if the IsRain variable is true
    }
    else {
        cout << NO RAIN!!! << endl; //А это сообщение высветиться, если переменная IsRain будет false | And this message will light up if the IsRain variable is false
    }
    
}
