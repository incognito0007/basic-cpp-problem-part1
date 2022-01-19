#include <iostream>
using namespace std;

int main()
{
    int pocketMoney = 3000;

    for (int date = 1; date <= 31; date++)
    {

        if (date % 2 == 0)
        {

            continue; // to skip the particular iteration we use continue statement
        }

        cout << date << endl;
        cout << "going outside" << endl;
        pocketMoney = pocketMoney - 300;
        cout << pocketMoney << endl;

        if (pocketMoney == 0)
        {
            break;
        }
    }

    return 0;
}