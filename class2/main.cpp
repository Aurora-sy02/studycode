#include"pass.h"

int main() {
	int score[3];
	for (int i = 0; i < 3; i++) {
		cin >> score[i];
	}
	for (int i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "名: " << score[i] << "分";
		if (isPass(score[i])) cout << "及格" << endl;
		else cout << "不及格" << endl;
	}
	cout << "3名学生中，及格人数为" << passmember(score[0], score[1], score[2]) << endl;
}