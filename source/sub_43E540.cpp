//----- (0043E540) --------------------------------------------------------
char __cdecl sub_43E540(int self, int a2)
{
  double v3; // st7
  int v4; // ebp
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  char v9; // bl
  int v11; // [esp+4h] [ebp-18h]
  char ArgList[16]; // [esp+Ch] [ebp-10h] BYREF

  v3 = *(float *)(self + 92) - *(float *)(dword_520970 + 68);
  *(float *)(self + 92) = v3;
  if ( v3 <= 0.0 )
  {
    *(_DWORD *)(self + 92) = *(_DWORD *)(self + 96);
    v4 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 520);
    *(_DWORD *)(*(_DWORD *)(self + 52) + 132) = v4;
    *(_BYTE *)(*(_DWORD *)(self + 52) + 136) = 1;
    v5 = sub_45E6F0(*(_DWORD *)(dword_4F5CC4 + 84));
    v6 = 0;
    v11 = 0;
    v7 = 0;
    v8 = self + 68;
    do
    {
      *(_BYTE *)(*(_DWORD *)v8 + 44) = v7 < v4;
      if ( v7 < v4 )
      {
        v9 = *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + v6 + 896);
        *(_BYTE *)(*(_DWORD *)v8 + 172) = v9;
        if ( v7 == v5 )
          *(_BYTE *)(*(_DWORD *)(self + 56) + 172) = v9;
        if ( v9 )
          ++v11;
      }
      v6 += 352;
      ++v7;
      v8 += 4;
    }
    while ( v6 < 1408 );
    if ( *(_BYTE *)(dword_4F5CC4 + 936) )
      *(_BYTE *)(*(_DWORD *)(self + 60) + 45) = v11 == v4;
    sub_411DE0(dword_4F5CC4, ArgList);
    sub_421190(*(_DWORD *)(*(_DWORD *)(self + 48) + 112), "Host IP: %s", ArgList);
  }
  return sub_428620((_DWORD *)self, a2);
}
