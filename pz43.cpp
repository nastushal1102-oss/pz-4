#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> numbers;
   
    numbers.push(12);
    numbers.push(24);
    numbers.push(36);
    numbers.push(48);
    numbers.push(60);
    numbers.push(72);

    int searchNumber;
    cout << "Введiть число для пошуку: ";
    cin >> searchNumber;

    bool found = false;

    // Витягуємо елементи, поки не знайдемо число або стек не спорожніє
    while (!numbers.empty())
    {
        if (numbers.top() == searchNumber)
        {
            found = true;
            break;
        }
        numbers.pop();
    }

    if (found)
    {
        cout << "Число знайдено" << endl;
    }
    else
    {
        cout << "Число не знайдено" << endl;
    }

    return 0;
}