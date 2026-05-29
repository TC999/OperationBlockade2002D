//----- (0046A4C0) --------------------------------------------------------
int __thiscall sub_46A4C0(int self, const void *a2, unsigned int a3)
{
  unsigned int v3; // edx
  int v5; // ebp
  unsigned int v6; // ebp
  void *v7; // eax
  int v8; // ecx
  int result; // eax
  void *v10; // [esp+10h] [ebp-4h]

  v3 = a3;
  v5 = *(_DWORD *)(self + 304);
  if ( (int)(a3 + *(_DWORD *)(self + 312) - 1) >= v5 )
  {
    v6 = v5 + 100;
    v7 = operator new(v6);
    qmemcpy(v7, *(const void **)(self + 308), *(_DWORD *)(self + 304));
    v10 = v7;
    sub_4885A6(*(LPVOID *)(self + 308));
    v3 = a3;
    *(_DWORD *)(self + 308) = v10;
    *(_DWORD *)(self + 304) = v6;
  }
  qmemcpy((void *)(*(_DWORD *)(self + 312) + *(_DWORD *)(self + 308)), a2, v3);
  v8 = *(_DWORD *)(self + 312);
  result = v8 + *(_DWORD *)(self + 308);
  *(_DWORD *)(self + 312) = v3 + v8;
  return result;
}
