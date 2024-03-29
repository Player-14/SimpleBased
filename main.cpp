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

struct Floatsb : Pair
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
	typedef(value[1024]);
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

struct Vectorsb : Pair
{
public:
	Vectorsb(int argc, const *argv[])
	{
		std::vector<decltype(argv)> data = {argv};
	}
};

class Table // : Simplebase
{
public:
	std::string name;
	std::vector<Pair> container;
	Table(std::string name)
	{
		name = this->name;
	}
};

class Simplebase
{
public:
	std::vector<Table> tables;
};

int main()
{
	return 0;
}

