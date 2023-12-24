#include <iostream>
#include <string>
#include <vector>
#include <array>

class Pair
{
public:
	std::string key;
};

struct Intsb : Pair
{
public:
	int value;

	Intsb(std::string key, int value)
	{
		key = this->key;
		value = this->value;
	}
};

struct Doublesb : Pair
{
public:
	double value;

	Doublesb(std::string key, double value)
	{
		key = this->key;
		value = this->value;
	}
};

struct floatsb : Pair
{
public:
	float value;

	Floatsb(std::string key, float value)
	{
		key = this->key;
		value = this->value;
	}
};

struct Stringsb : Pair
{
public:
	std::string value;
	Stringsb(std::string key, std::string value)
	{
		key = this->key;
		value = this->value;
	}
};

struct Arraysb : Pair
{
public:
	//int max_el;
	int value[1024];
};

struct Moneysb : Pair
{
public:
	std::string currency;
	double value;
	Moneysb(std::string key, std::string currency, double value)
	{
		key = this->key;
		currency = this->currency;
		value = this->value;
	}
};

struct Booleansb : Pair
{
public:
	bool value;
	Booleansb(std::string key, bool value)
	{
		key = this->key;
		value = this->value;
	}
};

struct Datesb : Pair
{
public:
	int year;
	int month;
	int day;
	Datesb(int year, int month, int day)
	{
		year = this->year;
		month = this->month;
		day = this->day;
	}
};

int main()
{
	return 0;
}