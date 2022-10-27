#include "String.h"

std::ostream& operator<<(std::ostream& out, const String& str)
{
    out << str.str;
    return out;
}

String operator+(const String& s1, const String& s2)
{
    String strResult;
    
    strResult.length = s1.length + s2.length;
    strResult.str = new char[strResult.length + 1];

    int index{};
    for (int i = 0; i < s1.length; i++)
        strResult.str[index++] = s1.str[i];
    for (int i = 0; i < s2.length; i++)
        strResult.str[index++] = s2.str[i];

    return strResult;
}

String operator+(const String& str, const char* cstr)
{
    return str + String(cstr);
}

bool operator>(const String& str1, const String& str2)
{
    unsigned int lenMin = (str1.length < str2.length) ? str1.length : str2.length;

    for (int i = 0; i < lenMin; i++)
        if (str1.str[i] != str2.str[i])
            return str1.str[i] > str2.str[i];
    return str1.length > str2.length;
}

bool operator>(String str, const char* cstr)
{
    return str > String(cstr);
}


String String::operator=(String sobj)
{
    if (this->str)
        delete[]this->str;

    this->length = sobj.length;
    this->str = new char[this->length + 1];
    
    for (int i = 0; i < this->length; i++)
        this->str[i] = sobj[i];
    this->str[this->length] = '\0';

    return *this;
}

String String::operator=(const char* cstr)
{
    if (this->str)
        delete[]this->str;

    this->length = strlen(cstr);
    this->str = new char[this->length + 1];

    for (int i = 0; i < this->length; i++)
        this->str[i] = cstr[i];
    this->str[this->length] = '\0';

    return *this;
}

char& String::operator[](int index)
{
    return this->str[index];
}

int String::Compare(const String& s)
{
    unsigned int lenMin = (this->length < s.length) ? this->length : s.length;
    for (int i = 0; i < lenMin; i++)
        if (this->str[i] != s.str[i])
            return this->str[i] - s.str[i];
    return this->length - s.length;
}

bool String::Contains(String s)
{
    return strstr(this->str, s.str);
}
