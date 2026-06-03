#include "common.h"

//----- (00448B20) --------------------------------------------------------
char *__cdecl sub_448B20(_DWORD *self, char *a2, char *a3)
{
  char *v3; // eax
  char *v4; // ebx
  char *v6; // edx
  const void *v7; // esi
  void *v8; // edi
  char *v9; // edi
  char *i; // esi
  char *result; // eax

  v3 = a3;
  v4 = a2;
  v6 = (char *)self[2];
  if ( a3 != v6 )
  {
    do
    {
      v7 = v3;
      v8 = v4;
      v3 += 860;
      v4 += 860;
      qmemcpy(v8, v7, 0x35Cu);
    }
    while ( v3 != v6 );
  }
  v9 = (char *)self[2];
  for ( i = v4; i != v9; i += 860 )
    ((void(__cdecl*)(intptr_t))sub_444A90)((intptr_t)i);
  result = a2;
  self[2] = (uint32)(uintptr_t)v4;
  return result;
}
