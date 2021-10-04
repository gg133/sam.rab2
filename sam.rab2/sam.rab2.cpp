#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int winter = 3;
    int summer = 1;
    int autumn = 2;
    int spring = 4;
    int question;
    cout << "\"Времена года\"\n1.Лето\n2.Осень\n3.Зима\n4.Весна\n\nВыберите месяц: ";
    cin >> question;
    if (question == 1)
    {
        cout << "Сейчас лето, самое время пойти поиграть в доту\n";
    }
    else if (question == 2) {
        cout << "Сейчас осень, почему бы не поиграть в доту?\n";
    }
    else if (question == 3) {
        cout << "Сейчас зима, оденься потеплее и запускай доту\n";

    }
    else if (question == 4) {
        cout << "Сейчас весна, одно из 4-х времен года когда можно поиграть в доту\n";
    }
    else {
        cout << "вы ввели неверное число\n";

    }

}