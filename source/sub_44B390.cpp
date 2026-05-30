//----- (0044B390) --------------------------------------------------------
char __cdecl sub_44B390(char *self, int a2)
{
  char result; // al
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // eax
  _DWORD *v6; // [esp-14h] [ebp-20h]
  char v7; // [esp-10h] [ebp-1Ch]
  int v8[3]; // [esp+0h] [ebp-Ch] BYREF

  result = a2;
  if ( *(_WORD *)(a2 + 12) == 1793 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v7 = *(_BYTE *)(v3 + 10);
    v6 = (_DWORD *)(v3 + 23);
    v4 = (_DWORD *)(v3 + 11);
    v5 = *(_DWORD *)(v3 + 6);
    v8[0] = 0;
    v8[1] = 0;
    v8[2] = 1065353216;
    return sub_449C40(
             self,
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 20) + 4 * v5),
             v4,
             v6,
             v7,
             1,
             0.0,
             (int)v8);
  }
  return result;
}
