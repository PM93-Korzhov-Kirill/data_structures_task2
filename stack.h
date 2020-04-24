#pragma once

#include <iostream>

struct list 
{ 
   list* next;
   int elem;
};

typedef list stack;

/*Поместить элемент в стек*/
void Push(stack* &p, int num);

/*Проверить стек на пустоту*/
inline bool IsEmpty(const stack* p)
{
   return p == NULL;
}

/*Извлечь элемент из стека*/
int Pop(stack* &p, int &num);

/*Распечатать содержимое стека*/
void PrintStack(const stack* p);

/*Удалить стек, освободить память*/
stack* DeleteStack(stack* p);

/*узнать принадлежит ли данный элемент стеку*/
bool IsElemHere(stack* &p, const int num);
