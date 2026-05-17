//----- (00415330) --------------------------------------------------------
char __thiscall sub_415330(int this, void *a2)
{
  int v3; // eax
  int v4; // ecx
  void **v5; // edi
  void **i; // edx
  int v7; // ecx

  v3 = 0;
  v4 = *(_DWORD *)(this + 24);
  if ( v4 > 0 )
  {
    v5 = *(void ***)(this + 20);
    for ( i = v5; *i != a2; ++i )
    {
      if ( ++v3 >= v4 )
        return v3;
    }
    v7 = v4 - 1;
    *(_DWORD *)(this + 24) = v7;
    if ( v3 != v7 )
    {
      memcpy(&v5[v3], &v5[v3 + 1], 4 * (v7 + 0x3FFFFFFF * v3));
      *(_DWORD *)(*(_DWORD *)(this + 20) + 4 * *(_DWORD *)(this + 24)) = 0;
    }
    LOBYTE(v3) = *(_BYTE *)(this + 32);
    if ( (_BYTE)v3 && a2 )
    {
      nullsub_1(a2);
      LOBYTE(v3) = sub_4885A6(a2);
    }
  }
  return v3;
}
