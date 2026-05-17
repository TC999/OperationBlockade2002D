//----- (00402FC0) --------------------------------------------------------
int __thiscall sub_402FC0(int this)
{
  int result; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ecx

  if ( *(_DWORD *)(this + 104) )
  {
    sub_41D9A0();
    *(_DWORD *)(this + 104) = 0;
  }
  for ( result = *(_DWORD *)(this + 76); result > 0; result = *(_DWORD *)(this + 76) )
  {
    v3 = *(_DWORD *)(this + 76);
    v4 = **(_DWORD **)(this + 72);
    v5 = 0;
    if ( v3 > 0 )
    {
      v6 = *(_DWORD **)(this + 72);
      v7 = v6;
      while ( *v7 != v4 )
      {
        ++v5;
        ++v7;
        if ( v5 >= v3 )
          goto LABEL_11;
      }
      v8 = v3 - 1;
      *(_DWORD *)(this + 76) = v8;
      if ( v5 != v8 )
      {
        memcpy(&v6[v5], &v6[v5 + 1], 4 * (v8 + 0x3FFFFFFF * v5));
        *(_DWORD *)(*(_DWORD *)(this + 72) + 4 * *(_DWORD *)(this + 76)) = 0;
      }
    }
LABEL_11:
    v9 = *(_DWORD *)(this + 96);
    v10 = *(_DWORD *)(this + 92) + 1;
    *(_DWORD *)(this + 92) = v10;
    if ( v10 > v9 )
    {
      v11 = v9 + 8;
      *(_DWORD *)(this + 96) = v11;
      v12 = sub_488DD7(*(LPVOID *)(this + 88), 4 * v11);
      if ( v12 )
      {
        v13 = *(_DWORD *)(this + 92);
        v14 = *(_DWORD *)(this + 96) - v13;
        *(_DWORD *)(this + 88) = v12;
        memset((void *)(v12 + 4 * v13), 0, 4 * v14);
      }
    }
    *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * *(_DWORD *)(this + 92) - 4) = v4;
  }
  return result;
}
