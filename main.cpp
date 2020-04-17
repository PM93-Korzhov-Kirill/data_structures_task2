#include <iostream>
#include <locale>
#include "stack.h"
#include <string>
#include <fstream>

using namespace std;

int main()
{
   setlocale(LC_CTYPE, "Rus");
   ifstream fin("in.txt");

   int num;
   fin >> num;

   stack* p = NULL;
   int a;
   while (fin >> a)
      Push(p, a);

   if (IsElemHere(p, num))
      cout << "���� ����� ���� � �����";
   else
      cout << "������ ����� ��� � �����";

   DeleteStack(p);
   getchar();
   return 0;
}