//----- (004389F0) --------------------------------------------------------
int __cdecl sub_4389F0(int self, char a2)
{
  int result; // eax
  int v4; // ecx
  void *v5; // edi
  int v6; // ecx

  *(_BYTE *)(self + 16) = a2;
  if ( a2 )
  {
    result = dword_4AA1E0;
    dword_4A4DD0 = dword_4AA1E0;
    dword_4A4DD4 = dword_4AA1E4;
  }
  else
  {
    v4 = *(_DWORD *)(self + 412);
    if ( v4 )
    {
      sub_41CF50(v4);
      v5 = *(void **)(self + 412);
      if ( v5 )
      {
        sub_41C700(*(LPVOID **)(self + 412));
        sub_4885A6(v5);
      }
      *(_DWORD *)(self + 412) = 0;
    }
    v6 = *(_DWORD *)(self + 416);
    if ( v6 )
      sub_41CF50(v6);
    return sub_4389A0((_DWORD *)self);
  }
  return result;
}
