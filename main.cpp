// задача про биржу. Обмен валют.
#include <iostream>
using namespace std;

int main()
{
    float dollar, poundSterling, frank, deutscheMark, yen;
    cout << "Введите количество в долларах: " << endl;
    cin >> dollar;
    poundSterling = dollar / 1.487;
    cout << "Фунтов стерлингов будет получено: " << poundSterling << endl;
    frank = dollar / 0.172;
    cout << "Франков будет получено: " << frank << endl;
    deutscheMark = dollar / 0.584;
    cout << "Немецких марок будет получено: " << deutscheMark << endl;
    yen = dollar / 0.00955;
    cout << "Японских йен будет получено: " << yen << endl;

    return 0;
}
