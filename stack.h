#pragma once

#include <iostream>

struct list 
{ 
   list* next;
   int elem;
};

typedef list stack;

/*��������� ������� � ����*/
void Push(stack* &p, int num);

/*��������� ���� �� �������*/
inline bool IsEmpty(const stack* p)
{
   return p == NULL;
}

/*������� ������� �� �����*/
int Pop(stack* &p, int &num);

/*����������� ���������� �����*/
void PrintStack(const stack* p);

/*������� ����, ���������� ������*/
stack* DeleteStack(stack* p);

/*������ ����������� �� ������ ������� �����*/
bool IsElemHere(stack* &p, const int num);
