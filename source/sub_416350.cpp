//----- (00416350) --------------------------------------------------------
char __cdecl sub_416350(int self, _DWORD *a2, char a3)
{
  char result; // al
  _BYTE *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // ecx

  if ( *(int *)(self + 4132) >= 200 )
    return 0;
  if ( !a3 || *(_BYTE *)(self + 4148) || (result = sub_4153B0(*(_DWORD **)(dword_520970 + 244), (int)a2)) != 0 )
  {
    v5 = (_BYTE *)(self + 20 * *(_DWORD *)(self + 4132) + 132);
    ++*v5;
    v6 = (_DWORD *)(self + 20 * *(_DWORD *)(self + 4132) + 136);
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    *(_DWORD *)(self + 20 * *(_DWORD *)(self + 4132) + 148) = 0;
    v7 = *(_DWORD *)(self + 4132) + 1;
    *(_DWORD *)(self + 4132) = v7;
    if ( a3 && *(_BYTE *)(self + 4148) && v7 >= 6 && !sub_415430(*(_DWORD **)(dword_520970 + 244), self) )
    {
      v8 = *(_DWORD *)(self + 4132) - 1;
      *(_DWORD *)(self + 4132) = v8;
      *(_DWORD *)(self + 20 * v8 + 148) += *(_DWORD *)(self + 4280) / 2;
      v9 = (_DWORD *)(self + 20 * *(_DWORD *)(self + 4132) + 128);
      result = 0;
      *v9 += *(_DWORD *)(self + 4280) / 2;
    }
    else
    {
      *(_BYTE *)(self + 12) = 1;
      sub_4164D0(self);
      if ( *(_DWORD *)(self + 4132) == 6 )
        sub_416570(self);
      return 1;
    }
  }
  return result;
}
