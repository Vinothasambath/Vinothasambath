#include "stdio.h" 
int main()
{
 void *pVoid;
 pVoid = (void*)0;
 printf("%lu\n",sizeof(pVoid));    // 8(64bitsys)
 return 0;
}
