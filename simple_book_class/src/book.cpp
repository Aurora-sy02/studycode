#include"book.h"

void Book::setName(string name) {
	m_Name = name;
}
void Book::setAuthor(string author) {
	m_Author = author;
}
void Book::setPages(int pages) {
	m_Pages = pages;
}

void Book::show_details() {
	cout << "书名：" << m_Name << "，作者：" << m_Author << "，页数：" << m_Pages <<"页" << endl;
}

bool Book::is_thick() {
	if (m_Pages >= 500) {
		return true;
	}
	return false;
}