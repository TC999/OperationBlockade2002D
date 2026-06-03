//----- (0040BB60) --------------------------------------------------------
_DWORD *__cdecl sub_40BB60(_DWORD *self, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int v4; // ebp
  int v5; // esi
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  int v8; // ecx
  char v9; // cl
  _DWORD *v10; // edi
  int v11; // esi
  _DWORD *v12; // [esp+10h] [ebp-4h]
  int i; // [esp+1Ch] [ebp+8h]

  result = a2;
  v4 = self[2];
  v5 = a3;
  v12 = self;
  v6 = a2;
  if ( a3 != v4 )
  {
    v7 = a2 + 1;
    v8 = a3 - (_DWORD)a2;
    for ( i = a3 - (_DWORD)a2; ; v8 = i )
    {
      *v6 = *(_DWORD *)v5;
      sub_40BCC0((int *)v7, (int *)((char *)v7 + v8));
      v9 = *(_BYTE *)(v5 + 20);
      v5 += 24;
      *((_BYTE *)v7 + 16) = v9;
      v6 += 6;
      v7 += 6;
      if ( v5 == v4 )
        break;
    }
    self = v12;
    result = a2;
  }
  v10 = (_DWORD *)self[2];
  v11 = (int)v6;
  if ( v6 == v10 )
  {
    self[2] = (uint32)(uintptr_t)v6;
  }
  else
  {
    do
    {
      sub_40A800(v11);
      v11 += 24;
    }
    while ( (_DWORD *)v11 != v10 );
    result = a2;
    v12[2] = (uint32)(uintptr_t)v6;
  }
  return result;
}
