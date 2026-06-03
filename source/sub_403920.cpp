#include "common.h"

//----- (00403920) --------------------------------------------------------
int __cdecl sub_403920(int self)
{
  int v2; // ebp
  int v3; // eax
  int v4; // esi
  int v5; // edx
  void *v6; // edi
  void *v7; // eax
  void *v8; // eax
  int result; // eax
  int i; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)(self + 76) )
  {
    v2 = 0;
    v3 = 0;
    for ( i = 0; v3 < *(_DWORD *)(self + 68); i = v3 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(self + 64) + 4 * v3);
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 292) )
        {
          if ( *(int *)(v4 + 284) > 0 )
          {
            do
            {
              v5 = *(_DWORD *)(v4 + 280);
              v6 = *(void **)(v5 + 4 * v2);
              if ( v6 )
              {
                sub_41C700((LPVOID *)*(_DWORD *)(v5 + 4 * v2));
                sub_4885A6(v6);
              }
              ++v2;
            }
            while ( v2 < *(_DWORD *)(v4 + 284) );
          }
          v2 = 0;
        }
        memset(*(void **)(v4 + 280), 0, 4 * *(_DWORD *)(v4 + 284));
        v7 = *(void **)(v4 + 280);
        *(_DWORD *)(v4 + 284) = 0;
        sub_488CEE(v7);
        *(_DWORD *)(v4 + 288) = 0;
        *(_DWORD *)(v4 + 280) = 0;
        sub_4885A6((LPVOID)v4);
        v3 = i;
      }
      ++v3;
    }
  }
  memset(*(void **)(self + 64), 0, 4 * *(_DWORD *)(self + 68));
  v8 = *(void **)(self + 64);
  *(_DWORD *)(self + 68) = 0;
  sub_488CEE(v8);
  result = 0;
  *(_DWORD *)(self + 72) = 0;
  *(_DWORD *)(self + 64) = 0;
  return result;
}
