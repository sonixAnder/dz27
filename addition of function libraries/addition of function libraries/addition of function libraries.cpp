#include <iostream>
#include <cstring>
#include <cctype>
#include <string.h>
#include <string>
using namespace std;

//сравнение строк
int mystrcmp(const char* str1, const char* str2)
{
    return strcmp(str1, str2);
}

//строка в число
int StringToNumber(char* str)
{
    return stoi(str);
}

//число в строку
char* NumberToString(int number)
{
    return strdup(to_string(number).c_str());
}

//верхний регистр
char* Uppercase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}

//нижний регистр
char* Lowercase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

//ревёрс строки
char* mystrrev(char* str)
{
    int len = strlen(str);
    char* result = new char[len + 1];

    for (int i = 0; i < len; i++)
    {
        result[i] = str[len - i - 1];
    }

    result[len] = '\0';
    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");
    const char* str1 = "hello";
    const char* str2 = "world";

    cout << "сраввнение строк: " << mystrcmp(str1, str2) << endl;
    cout << "----------------------------------------" << endl;

    char numStr[] = "12345";
    int num = StringToNumber(numStr);
    cout << "строка в число: " << num << endl;
    cout << "----------------------------------------" << endl;

    char* strNum = NumberToString(54321);
    cout << "число в строку: " << strNum << endl;
    cout << "----------------------------------------" << endl;

    char text[] = "abc123";
    Uppercase(text);
    cout << "верхний регистр: " << text << endl;
    cout << "----------------------------------------" << endl;

    Lowercase(text);
    cout << "нижний регистр: " << text << endl;
    cout << "----------------------------------------" << endl;

    char rev[] = "reverse";
    char* reversedStr = mystrrev(rev);
    cout << "ревёрс строки: " << reversedStr << endl;

    return 0;
}
