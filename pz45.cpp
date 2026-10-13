#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{

    string text = "stats"; 

    stack<char> charStack;

    // Заповнюємо стек усіма символами рядка
    for (char c : text)
    {
        charStack.push(c);
    }

    bool isPalindrome = true;

    // Звіряємо символи з початку рядка з вершиною стека (де символи з кінця)
    for (char c : text)
    {
        if (c != charStack.top())
        {
            isPalindrome = false;
            break;
        }
        charStack.pop();
    }

    if (isPalindrome)
    {
        cout << "Рядок \"" << text << "\" є палiндромом." << endl;
    }
    else
    {
        cout << "Рядок \"" << text << "\" НЕ є палiндромом." << endl;
    }

    return 0;
}
