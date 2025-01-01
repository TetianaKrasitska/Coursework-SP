#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _Aaaaa, _Bbbbb, _Xxxxx, _Yyyyy;
   printf("Enter _Aaaaa:");
   scanf("%hd", &_Aaaaa);
   printf("Enter _Bbbbb:");
   scanf("%hd", &_Bbbbb);
   printf("%d\n", _Aaaaa + _Bbbbb);
   printf("%d\n", _Aaaaa - _Bbbbb);
   printf("%d\n", _Aaaaa * _Bbbbb);
   printf("%d\n", _Aaaaa / _Bbbbb);
   printf("%d\n", _Aaaaa % _Bbbbb);
   _Xxxxx = (_Aaaaa - _Bbbbb) * 10 + (_Aaaaa + _Bbbbb) / 10;
   _Yyyyy = _Xxxxx + (_Xxxxx % 10);
   printf("%d\n", _Xxxxx);
   printf("%d\n", _Yyyyy);
   system("pause");
    return 0;
}
