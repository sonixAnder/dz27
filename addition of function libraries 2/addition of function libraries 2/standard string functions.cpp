#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string text = "Some text with numbers 123 and letters abcd..";
    string wordToReplace, newWord;

    // 1. Найти и заменить слово в тексте
    cout << text << endl;
    cout << "Введите слово для замены: ";
    cin >> wordToReplace;
    cout << "Введите новое слово: ";
    cin >> newWord;

    size_t pos = text.find(wordToReplace);
    if (pos != string::npos)
    {
        text.replace(pos, wordToReplace.length(), newWord);
    }
    cout << "Текст после замены: " << text << endl;

    // 2. Каждое новое предложение с заглавной буквы
    for (int i = 0; i < text.length(); i++)
    {
        if (i == 0 || text[i - 1] == '.' || text[i - 1] == '!' || text[i - 1] == '?')
        {
            text[i] = toupper(text[i]);
        }
    }
    cout << "Текст, написанный с заглавными буквами каждого предложения: " << text << endl;

    // 3. Подсчёт количества встречаемости каждой буквы в тексте
    int letterCounts[26] = { 0 };
    for (char c : text)
    {
        if (isalpha(c))
        {
            letterCounts[toupper(c) - 'A']++;
        }
    }

    cout << "Вхождения каждой буквы:" << endl;
    for (int i = 0; i < 26; i++)
    {
        if (letterCounts[i] > 0)
        {
            cout << (char)('A' + i) << ": " << letterCounts[i] << endl;
        }
    }

    // 4. Подсчёт количества встречающихся цифр в тексте
    int digitCount = 0;
    for (char c : text)
    {
        if (isdigit(c))
        {
            digitCount++;
        }
    }
    cout << "Число цифр в тексте: " << digitCount << endl;

    return 0;
}