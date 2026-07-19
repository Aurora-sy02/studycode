#include"book.h"

void func(int ret) {
	if (ret==1) {
		cout << "厚书" << endl;
	}
	else {
		cout << "薄书" << endl;
	}
}

int main() {

	Book b1;
	b1.setAuthor("《Python 编程》");
	b1.setName("张三");
	b1.setPages(300);

	Book b2;
	b2.setAuthor("《C++ 实战》");
	b2.setName("李四");
	b2.setPages(600);

	b1.show_details();
	func(b1.is_thick());

	b2.show_details();
	func(b2.is_thick());

	system("pause");
	return 0;
}