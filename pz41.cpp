#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    // Створюємо стек та додаємо три рядки варіанта 7
    stack<string> words;
    words.push("onion");
    words.push("garlic");
    words.push("pepper");

    // Робимо копію стека, щоб оригінальний залишився повним
    stack<string> tempStack = words;
    int totalCharacters = 0;

    while (!tempStack.empty())
    {
        totalCharacters += tempStack.top().length();
        tempStack.pop();
    }

    cout << "Загальна кiлькiсть символiв: " << totalCharacters << endl;
    cout << "Розмір оригінального стека: " << words.size() << endl;

    return 0;
}