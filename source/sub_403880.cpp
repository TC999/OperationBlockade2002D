#include "common.h"

//----- (00403880) --------------------------------------------------------
int __cdecl sub_403880(int self)
{
  int i; // ebp
  int v3; // eax
  void *v4; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_BYTE *)(self + 292) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 284); ++i )
    {
      v3 = *(_DWORD *)(self + 280);
      v4 = *(void **)(v3 + 4 * i);
      if ( v4 )
      {
        sub_41C700((LPVOID *)v4);
        sub_4885A6(v4);
      }
    }
  }
  memset(*(void **)(self + 280), 0, 4 * *(_DWORD *)(self + 284));
  v5 = *(void **)(self + 280);
  *(_DWORD *)(self + 284) = 0;
  result = 0;
  sub_488CEE(v5);
  *(_DWORD *)(self + 288) = 0;
  *(_DWORD *)(self + 280) = 0;
  return result;
}
