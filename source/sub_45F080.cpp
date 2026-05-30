//----- (0045F080) --------------------------------------------------------
int __cdecl sub_45F080(_DWORD *self)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  int v6; // ecx
  int result; // eax
  _DWORD *v8; // edi
  int v9; // ebp

  v2 = self[642];
  if ( v2 )
    v3 = (self[643] - v2) >> 3;
  else
    v3 = 0;
  for ( i = 0; i < v3; ++i )
  {
    sub_4286C0(self, *(_DWORD *)(*(_DWORD *)(self[642] + 8 * i) + 652));
    v5 = *(_DWORD *)(*(_DWORD *)(self[642] + 8 * i) + 652);
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v5 + 24))(v5, 0);
    v6 = *(_DWORD *)(self[642] + 8 * i);
    (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 8))(v6);
  }
  result = self[643];
  self[643] = self[642];
  v8 = self + 680;
  v9 = 100;
  do
  {
    if ( *(_BYTE *)v8 )
    {
      result = sub_409A00(dword_520970, (void *)v8[21]);
      v8[21] = 0;
    }
    *(_BYTE *)v8 = 0;
    v8 += 22;
    --v9;
  }
  while ( v9 );
  self[645] = 0;
  return result;
}
