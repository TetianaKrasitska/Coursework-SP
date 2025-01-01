#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _Aaaaa;
   int16_t _Bbbbb;
   int16_t _Ccccc;
   printf("Enter _Aaaaa:");
   scanf("%hd", &_Aaaaa);
   printf("Enter _Bbbbb:");
   scanf("%hd", &_Bbbbb);
   printf("Enter _Ccccc:");
   scanf("%hd", &_Ccccc);
   if (_Aaaaa > _Bbbbb) 
   {
   if (_Aaaaa > _Ccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _Ccccc);
   goto OutofIF;
Abigger:
   printf("%d\n", _Aaaaa);
   goto OutofIF;
   }
   }
   if (_Bbbbb < _Ccccc) 
   {
   printf("%d\n", _Ccccc);
   }
   else
   {
   printf("%d\n", _Bbbbb);
   }
OutofIF:
   if (((_Aaaaa == _Bbbbb && _Aaaaa == _Ccccc) && _Bbbbb == _Ccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_Aaaaa < 0 || _Bbbbb < 0) || _Ccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_Aaaaa < (_Bbbbb + _Ccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
