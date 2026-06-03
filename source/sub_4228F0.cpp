#include <time.h>

//----- (004228F0) --------------------------------------------------------
char *__cdecl sub_4228F0(char *Str)
{
  struct tm *v1; // eax
  char *result; // eax
  time_t Time; // [esp+8h] [ebp-4h] BYREF

  time(&Time);
  v1 = localtime(&Time);
  strcpy(Str, asctime(v1));
  result = strrchr(Str, 10);
  if ( result )
    *result = 0;
  return result;
}
