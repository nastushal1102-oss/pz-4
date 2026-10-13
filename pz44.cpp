#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    stack<int> randStack;
    int n = 9;         // Кількість чисел
    int minVal = 5;    // Діапазон від 5
    int maxVal = 45;   // до 45

    // Генерація та додавання до стека
    cout << "Згенерованi числа:" << endl;
    for (int i = 0; i < n; i++)
    {
        int val = rand() % (maxVal - minVal + 1) + minVal;
        cout << val << " ";
        randStack.push(val);
    }
    cout << endl;

    int sum = 0;
    int count = 0;

    // Перевірка чисел: парні у межах від 15 до 35
    cout << "Числа, що вiдповiдають критерiю (парнi вiд 15 до 35):" << endl;
    while (!randStack.empty())
    {
        int val = randStack.top();
        if (val % 2 == 0 && val >= 15 && val <= 35)
        {
            cout << val << " ";
            sum += val;
            count++;
        }
        randStack.pop();
    }
    cout << endl;

    if (count > 0)
    {
        double average = (double)sum / count;
        cout << "Середнє значення: " << average << endl;
    }
    else
    {
        cout << "Чисел, що вiдповiдають критерiю, не знайдено." << endl;
    }

    return 0;
}