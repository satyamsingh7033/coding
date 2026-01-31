#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string1[] = "Good";
    char string2[] = "Morning", string3[20];

    // strcpy
    strcpy(string3, string2);
    cout << "\n\nThe Result Of strcpy is: " << string3 << "\n";

    // strcmp
    cout << "\n The Result Of Strcmp is: " << strcmp(string1, string1) << "\n";

    // strcat
    strcat(string1, string2);
    cout << "\n The Result Of Strcat is: " << string1 << "\n";

    // strlen
    cout << "\n The Result Of Strlen is: " << strlen(string1) << "\n";

    // strrev equivalent
    size_t len = strlen(string1);
    for (size_t i = 0; i < len / 2; i++)
        swap(string1[i], string1[len - i - 1]);

    cout << "\n Reverse of String1 is: " << string1 << "\n";

    char ch = 'o';

    // Reverse back to original
    for (size_t i = 0; i < len / 2; i++)
        swap(string1[i], string1[len - i - 1]);

    // strchr
    if (strchr(string1, ch))
        cout << "\nThe Character " << ch << " is present in the string [" << string1 << "]\n";
    else
        cout << "\nThe Character " << ch << " is not present in the string [" << string1 << "]\n";

    return 0;
}