#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

void setup()
{
	Simplebase db;
}

void create_table(std::string name)
{
	Table table;
	table.name = this->name;

	db.push_back(table);
}

void insertpair(Table &table, Pair &pair)
{
	table.container.push_back(pair);
}

/*Pair getpair(Table &table, std::string key)
{
	std::find()
}*/

void insert()
{

}