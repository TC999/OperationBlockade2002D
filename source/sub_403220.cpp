#include "common.h"

//----- (00403220) --------------------------------------------------------
int __cdecl sub_403220(void *self)
{
  int i; // edi
  int v3; // eax
  void *v4; // esi
  void *v5; // eax
  int v6; // eax
  int v7; // esi
  int k; // edi
  void *v9; // eax
  void *v10; // eax
  int result; // eax
  (void)result;
  int j; // [esp+10h] [ebp-14h]

  *(_DWORD *)self = (uint32)(uintptr_t)&off_499098;
  dword_4B5AB0 = 0;
  if ( *((_BYTE *)self + 48) )
  {
    for ( i = 0; i < (int)*((_DWORD *)self + 10); ++i )
    {
      v3 = *((_DWORD *)self + 9);
      v4 = *(void **)(v3 + 4 * i);
      if ( v4 )
      {
        sub_402CB0((int)*(_DWORD *)(v3 + 4 * i));
        sub_4885A6(v4);
      }
    }
  }
  memset(*((void **)self + 9), 0, 4 * *((_DWORD *)self + 10));
  v5 = (void *)*((_DWORD *)self + 9);
  *((_DWORD *)self + 10) = 0;
  sub_488CEE(v5);
  *((_DWORD *)self + 11) = 0;
  *((_DWORD *)self + 9) = 0;
  if ( *((_BYTE *)self + 32) )
  {
    v6 = 0;
    for ( j = 0; v6 < (int)*((_DWORD *)self + 6); j = v6 )
    {
      v7 = *(_DWORD *)(*((_DWORD *)self + 5) + 4 * v6);
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 76) )
        {
          for ( k = 0; k < (int)*(_DWORD *)(v7 + 68); ++k )
          {
            if ( *(_DWORD *)(*(_DWORD *)(v7 + 64) + 4 * k) )
              sub_403860((void *)(*(_DWORD *)(*(_DWORD *)(v7 + 64) + 4 * k)), 1);
          }
        }
        memset(*(void **)(v7 + 64), 0, 4 * *(_DWORD *)(v7 + 68));
        v9 = *(void **)(v7 + 64);
        *(_DWORD *)(v7 + 68) = 0;
        sub_488CEE(v9);
        *(_DWORD *)(v7 + 72) = 0;
        *(_DWORD *)(v7 + 64) = 0;
        sub_4885A6((LPVOID)v7);
        v6 = j;
      }
      ++v6;
    }
  }
  memset(*((void **)self + 5), 0, 4 * *((_DWORD *)self + 6));
  v10 = (void *)*((_DWORD *)self + 5);
  *((_DWORD *)self + 6) = 0;
  sub_488CEE(v10);
  *((_DWORD *)self + 7) = 0;
  *((_DWORD *)self + 5) = 0;
  *(_DWORD *)self = (uint32)(uintptr_t)&off_499040;
  return 0;
}
