// write a program to check whether a given character is avowel or a consonant
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int ascii = (int)ch;

    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "The character is a vowel.";
        }
        else
        {
            cout << "The character is a consonant.";
        }
    }
    else
    {
        cout << "It is not a character alphabet.";
    }

    return 0;
}
