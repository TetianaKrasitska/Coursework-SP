#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _Aaaaa, _Aaaa2, _Bbbbb, _Xxxxx, _Cccc1, _Cccc2;
   printf("Enter _Aaaaa:");
   scanf("%hd", &_Aaaaa);
   printf("Enter _Bbbbb:");
   scanf("%hd", &_Bbbbb);
   for (int16_t _Aaaa2 = _Aaaaa; _Aaaa2 <= _Bbbbb; _Aaaa2++)
   printf("%d\n", _Aaaa2 * _Aaaa2);
   for (int16_t _Aaaa2 = _Bbbbb; _Aaaa2 <= _Aaaaa; _Aaaa2++)
   printf("%d\n", _Aaaa2 * _Aaaa2);
   _Xxxxx = 0;
   _Cccc1 = 0;
   while (_Cccc1 < _Aaaaa)
   {
   {
   _Cccc2 = 0;
   while (_Cccc2 < _Bbbbb)
   {
   {
   _Xxxxx = _Xxxxx + 1;
   _Cccc2 = _Cccc2 + 1;
   }
   }
   _Cccc1 = _Cccc1 + 1;
   }
   }
   printf("%d\n", _Xxxxx);
   _Xxxxx = 0;
   _Cccc1 = 1;
   do
   {
   _Cccc2 = 1;
   do
   {
   _Xxxxx = _Xxxxx + 1;
   _Cccc2 = _Cccc2 + 1;
   }
   while (!(_Cccc2 > _Bbbbb));
   _Cccc1 = _Cccc1 + 1;
   }
   while (!(_Cccc1 > _Aaaaa));
   printf("%d\n", _Xxxxx);
   system("pause");
    return 0;
}
