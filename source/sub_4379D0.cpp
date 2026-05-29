//----- (004379D0) --------------------------------------------------------
int __thiscall sub_4379D0(int *self, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int *v8; // esi
  int i; // ebx
  int v10; // edx
  int v11; // ecx
  int result; // eax
  _DWORD v13[17]; // [esp+10h] [ebp-44h] BYREF
  int v14; // [esp+60h] [ebp+Ch]

  sub_405C40(a2, a3, a4);
  v5 = self[2];
  v6 = 0;
  if ( v5 > 0 )
  {
    v7 = self[1];
    do
    {
      if ( a2 == v7 )
        break;
      ++v6;
      v7 += 172;
    }
    while ( v6 < v5 );
  }
  v8 = self + 169;
  v14 = 13;
  do
  {
    for ( i = 1; i < *v8; ++i )
    {
      if ( v8[i - 20] == v6 )
      {
        v10 = v8[8];
        memset(v13, 0, sizeof(v13));
        v11 = v8[10];
        v13[5] = v8[9];
        v13[1] = v13[5];
        v13[6] = v11;
        v13[2] = v11;
        v13[4] = v10;
        v13[7] = 1065353216;
        v13[0] = v10;
        v13[3] = 1065353216;
        (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v13);
      }
    }
    v8 += 35;
    result = --v14;
  }
  while ( v14 );
  return result;
}
