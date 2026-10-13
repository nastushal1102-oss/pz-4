#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> numbers;
    // Додаємо 5 чисел варіанта 7
    numbers.push(11);
    numbers.push(22);
    numbers.push(33);
    numbers.push(44);
    numbers.push(55);

    int sum = 0;
    cout << "Числа у зворотному порядку:" << endl;

    while (!numbers.empty())
    {
        int current = numbers.top();
        cout << current << " ";
        sum += current;
        numbers.pop();
    }

    cout << endl;
    cout << "Сума всiх чисел: " << sum << endl;

    return 0;
}