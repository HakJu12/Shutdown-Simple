#include "main.h"

int main() {
	int a = 0;
	int b = 32767;
	cout << "Start: Computer Logoff system........" << endl;
	Sleep(3000);
	cls();
	A:
		cout << "��ȣ�� �Է��Ͻʽÿ�: ";
		cin >> a;
		if (a == 32767) {
			cls();
			cout << "���� �Ǿ����ϴ�. 10�� �� ��ǻ�͸� �����մϴ�. ";
			system("shutdown -s -t 10");
			Sleep(3000);
			cout << "���α׷��� �����մϴ�.......";
			Sleep(2000);
			return 0;
		}
		else {
			cls();
			cout << "��ȣ�� Ʋ���ϴ�. �ٽ� �õ��ϼ���." << endl;
			goto A;
		}
}