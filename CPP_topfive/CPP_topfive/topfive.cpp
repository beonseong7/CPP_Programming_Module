#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main()
{
	string list[SIZE];//string�� �����ʹٷ���� ��밡���ϴ�.
	cout << "�����ϴ� ���ϴ��� ������ " << SIZE << "�� �Է��Ͻÿ�: \n";
	for (int i = 0; i < SIZE; i++)//SiZE ũ�⸸ŭ �ݺ�
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "�Է��Ͻ� ������ ������ �����ϴ�,:\n";
	display(list, SIZE);
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}