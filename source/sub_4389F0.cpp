//----- (004389F0) --------------------------------------------------------
int __thiscall sub_4389F0(int this, char a2)
{
  int result; // eax
  int v4; // ecx
  void *v5; // edi
  int v6; // ecx

  *(_BYTE *)(this + 16) = a2;
  if ( a2 )
  {
    result = dword_4AA1E0;
    dword_4A4DD0 = dword_4AA1E0;
    dword_4A4DD4 = dword_4AA1E4;
  }
  else
  {
    v4 = *(_DWORD *)(this + 412);
    if ( v4 )
    {
      sub_41CF50(v4);
      v5 = *(void **)(this + 412);
      if ( v5 )
      {
        sub_41C700(*(LPVOID **)(this + 412));
        sub_4885A6(v5);
      }
      *(_DWORD *)(this + 412) = 0;
    }
    v6 = *(_DWORD *)(this + 416);
    if ( v6 )
      sub_41CF50(v6);
    return sub_4389A0((_DWORD *)this);
  }
  return result;
}
