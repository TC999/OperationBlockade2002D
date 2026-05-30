//----- (00417190) --------------------------------------------------------
char __cdecl sub_417190(int self, int a2, _DWORD *a3, unsigned __int8 a4)
{
  signed int v5; // ecx
  int v6; // eax
  char v7; // bl
  int v8; // eax
  _BYTE *v9; // edi
  int v10; // edx

  v5 = a2 - *(_DWORD *)(self + 4136);
  if ( (unsigned int)v5 >= 0xC8 )
    return 0;
  v6 = self + 20 * v5;
  if ( a4 < *(_BYTE *)(v6 + 132) )
    return 0;
  *(_BYTE *)(v6 + 132) = a4;
  *(_DWORD *)(v6 + 136) = *a3;
  *(_DWORD *)(v6 + 140) = a3[1];
  v7 = 0;
  *(_DWORD *)(v6 + 144) = a3[2];
  *(_DWORD *)(v6 + 148) = 0;
  v8 = *(_DWORD *)(self + 4132);
  if ( v8 <= v5 )
  {
    if ( v8 < v5 )
    {
      v9 = (_BYTE *)(self + 20 * v8 + 132);
      v10 = v5 - v8;
      do
      {
        *v9 = 0;
        v9 += 20;
        --v10;
      }
      while ( v10 );
    }
    *(_DWORD *)(self + 4132) = v5 + 1;
  }
  if ( v8 < 6 && *(int *)(self + 4132) >= 6 && !*(_DWORD *)(self + 4136) )
    v7 = 1;
  sub_417260(self);
  if ( *(int *)(self + 4132) >= 6 )
    sub_416570((float *)self);
  return v7;
}
