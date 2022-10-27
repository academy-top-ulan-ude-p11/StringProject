#include <iostream>
#pragma once
class String
{
	unsigned int length;
	char* str;
public:
	String()
	{
		length = 0;
		str = nullptr;
	}

	String(int count, char ch)
	{
		length = count;
		str = new char[length + 1];
		for (int i = 0; i < length; i++)
			str[i] = ch;
		str[length] = '\0';
	}

	String(const String& sobj) : length{ sobj.length }
	{
		str = new char[length + 1];
		for (int i = 0; i < length; i++)
			str[i] = sobj.str[i];
		str[length] = '\0';
	}

	String(const char* cstr) : length{ strlen(cstr) }
	{
		str = new char[length + 1];
		for (int i = 0; i < length; i++)
			str[i] = cstr[i];
		str[length] = '\0';
	}

	friend std::ostream& operator<<(std::ostream& out, const String& str);

	String operator=(String);
	String operator=(const char*);

	char& operator[](int);

	friend String operator+(const String&, const String&);
	friend String operator+(const String&, const char*);
	friend String operator+(const char*, String);

	friend bool operator>(const String&, const String&);
	friend bool operator>(String, const char*);
	friend bool operator>(const char*, String);

	friend bool operator<(String, String);
	friend bool operator<(String, const char*);
	friend bool operator<(const char*, String);

	friend bool operator>=(String, String);
	friend bool operator>=(String, const char*);
	friend bool operator>=(const char*, String);

	friend bool operator<=(String, String);
	friend bool operator<=(String, const char*);
	friend bool operator<=(const char*, String);

	friend bool operator==(String, String);
	friend bool operator==(String, const char*);
	friend bool operator==(const char*, String);

	friend bool operator!=(String, String);
	friend bool operator!=(String, const char*);
	friend bool operator!=(const char*, String);

	int Compare(const String&);

	bool Contains(String);
	bool Contains(char);
	bool Contains(const char*);
};

