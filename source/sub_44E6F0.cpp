//----- (0044E6F0) --------------------------------------------------------
int __thiscall sub_44E6F0(_DWORD *self, int a2, const void *a3, _DWORD *a4)
{
  int result; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int i; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int *v12; // esi
  int v13; // edi
  _DWORD *v14; // eax

  result = sub_44D770(self, a2);
  if ( result != -1 )
  {
    v6 = (int)&self[53 * result + 6];
    if ( *(_DWORD *)(self[53 * result + 7] + 292) )
    {
      v7 = 0;
      for ( i = (int)&self[53 * result + 8]; ; i += 4 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 292);
        v10 = *(_DWORD *)(v9 + 296);
        v11 = v9 + 292;
        if ( !v10 || v7 >= (*(_DWORD *)(v11 + 8) - v10) >> 2 )
          break;
        if ( *(_DWORD *)i )
          qmemcpy((void *)(*(_DWORD *)i + 116), a3, 0x40u);
        ++v7;
      }
    }
    v12 = (int *)(v6 + 136);
    v13 = 16;
    do
    {
      result = *v12;
      if ( *v12 && !*(_BYTE *)(result + 53) )
      {
        v14 = (_DWORD *)sub_4010C0(a3);
        result = sub_41D960((_DWORD *)*v12, v14, a4);
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
