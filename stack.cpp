#include "stack.h"
#include <iostream>

void Push(stack* &p, int num)
{
   if (!IsEmpty(p))
   {
      stack* q = new stack;
      q->elem = num;
      q->next = p;
      p = q;
   }
   else
   {
      p = new stack;
      p->next = NULL;
      p->elem = num;
   }
}
int Pop(stack* &p, int &num)
{
   if (!IsEmpty(p))
   {
      num = p->elem;
      stack* q = p;
      p = p->next;
      delete q;
      return 0;
   }
   return 1;
}
void PrintStack(const stack* p)
{
   std::cout << "Содержимое стека: ";
   while(p)
   {
      std::cout << p->elem << " ";
      p = p->next;
   }
   std::cout << std::endl;
}

void DeleteStack(stack* &p) 
{
   stack* q;
   while (p) {
      q = p->next;
      free(p);
      p = q;
   }
}

bool IsElemHere(stack* p, const int num)
{
   stack* q = NULL;
   int a;
   while (p) 
   {
      if (p->elem == num) 
      {
         while (q)
         {
            Pop(q, a);
            Push(p, a);
         }
         return true;
      }
      Pop(p, a);
      Push(q, a);
   }
   while (q) 
   {
      Pop(q, a);
      Push(p, a);
   }
   return false;
}