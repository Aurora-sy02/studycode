#pragma once
#include<iostream>
using namespace std;

class Book {
public:
	void setName(string name);
	void setAuthor(string author);
	void setPages(int pages);

	void show_details();
	bool is_thick();

private:
	string m_Name;
	string m_Author;
	int m_Pages;
};