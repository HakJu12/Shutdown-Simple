#include "main.h"

int main() {
	int a = 0;
	int b = 32767;
	cout << "Start: Computer Logoff system........" << endl;
	Sleep(3000);
	cls();
	A:
		cout << "암호를 입력하십시오: ";
		cin >> a;
		if (a == 32767) {
			cls();
			cout << "인증 되었습니다. 10초 후 컴퓨터를 종료합니다. ";
			system("shutdown -s -t 10");
			Sleep(3000);
			cout << "프로그램을 종료합니다.......";
			Sleep(2000);
			return 0;
		}
		else {
			cls();
			cout << "암호가 틀립니다. 다시 시도하세요." << endl;
			goto A;
		}
}