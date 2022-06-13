#include<iostream>

using namespace std;

void read_string(char *str)
{
    cout << "Enter a string: ";
    cin.getline(str, 100);

}

void reverse(string *str)
{
    int i, j;
    char temp;
    for (i = 0, j = str->length() - 1; i < j; i++, j--)
    {
        temp = str->at(i);
        str->at(i) = str->at(j);
        str->at(j) = temp;
    }
}

int main()
{
    char str[100];
    string str1;
    read_string(str);
    str1 = str;
    reverse(&str1);
    cout << str1 << endl;
    return 0;
    
}