#include<iostream>
char* buildstr(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "���� �ϳ��� �Է��Ͻʽÿ�: ";
	cin >> ch;
	cout << "���� �ϳ��� �Է��Ͻʽÿ�: ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps; //ps�� �ִ� �޸� ����
	ps = buildstr('+', 20);
	cout << ps << "-Done-" << ps << endl;
	delete[] ps;
	return 0;
}
char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];
	pstr[n] = '\0';//���ڿ� ����
	while (n-- > 0)//n������ ���� ä���
		pstr[n] = c;
	return pstr;
}