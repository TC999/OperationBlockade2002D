//----- (00456F30) --------------------------------------------------------
int __cdecl sub_456F30(int self, float a2)
{
  int v3; // eax
  __int64 v4; // rax
  int v5; // ebp
  int v6; // ecx
  double v7; // st7
  int v8; // edi
  double v9; // st7
  int v10; // eax
  int v12; // [esp+10h] [ebp+4h]

  v3 = *(_DWORD *)(self + 392);
  *(_BYTE *)(self + 488) = 0;
  HIDWORD(v4) = *(_DWORD *)(v3 + 292);
  LODWORD(v4) = *(_DWORD *)(self + 456);
  v5 = ((int *)dword_5216EC)[HIDWORD(v4)];
  if ( (_DWORD)v4 )
  {
    if ( (int)v4 < 12 )
    {
      v9 = a2 + *(float *)(self + 484);
      v10 = *(_DWORD *)(self + 464);
      *(float *)(self + 484) = v9;
      v12 = *(_DWORD *)(12 * v10 + *(_DWORD *)(v5 + 8) + 4);
      if ( (int)(__int64)(v9 * 15.0) >= v12 )
      {
        do
        {
          *(_BYTE *)(self + 488) = 1;
          *(float *)(self + 484) = *(float *)(self + 484) - (double)v12 * 0.06666667;
          v12 = *(_DWORD *)(12 * v10 + *(_DWORD *)(v5 + 8) + 4);
        }
        while ( (int)(__int64)(*(float *)(self + 484) * 15.0) >= v12 );
      }
      v4 = (__int64)(*(float *)(self + 484) * 15.0);
      *(_DWORD *)(self + 468) = v4;
    }
    else
    {
      v4 = (__int64)(*(float *)(self + 484) * 15.0);
      v6 = *(_DWORD *)(self + 464);
      *(_DWORD *)(self + 468) = v4;
      if ( (int)v4 < *(_DWORD *)(12 * v6 + *(_DWORD *)(v5 + 8) + 4) - 1 )
      {
        v7 = a2 + *(float *)(self + 484);
        *(float *)(self + 484) = v7;
        v4 = (__int64)(v7 * 15.0);
        *(_DWORD *)(self + 468) = v4;
        v8 = *(_DWORD *)(12 * v6 + *(_DWORD *)(v5 + 8) + 4);
        if ( (int)v4 >= v8 )
        {
          LODWORD(v4) = v8 - 1;
          *(_BYTE *)(self + 488) = 1;
          *(_DWORD *)(self + 468) = v8 - 1;
          *(float *)(self + 484) = (double)(v8 - 1) * 0.06666667;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(self + 468) = 0;
    *(_BYTE *)(self + 488) = 1;
  }
  return (int)v4;
}
