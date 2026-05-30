//----- (00421980) --------------------------------------------------------
_BYTE *__cdecl sub_421980(int self, int a2, unsigned int a3)
{
  int v4; // edi
  _BYTE *v5; // esi
  _BYTE *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx

  v4 = *(_DWORD *)(*(_DWORD *)(self + 20) + 4 * a2);
  v5 = operator new(0x50u);
  if ( v5 )
  {
    *(_DWORD *)v5 = v4;
    v5[33] = 1;
    *((_DWORD *)v5 + 9) = 1;
    *((_DWORD *)v5 + 10) = 1;
    *((_DWORD *)v5 + 1) = a3;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 0;
    v5[32] = 0;
    v5[34] = 0;
    v5[35] = 0;
    *((_DWORD *)v5 + 11) = 0;
    *((_DWORD *)v5 + 12) = self;
    *((_DWORD *)v5 + 15) = 0;
    *((_DWORD *)v5 + 16) = -1082130432;
    *((_DWORD *)v5 + 17) = -1082130432;
    *((_DWORD *)v5 + 18) = 255;
    *((_DWORD *)v5 + 19) = 255;
    v6 = operator new(a3);
    *((_DWORD *)v5 + 2) = v6;
    *v6 = 0;
    sub_421300((int)v5, 0xFFu, 0xFFu, 0xFFu, 255);
    sub_421370(v5, 0, 0, 0, 255);
    sub_421540((void **)v5);
  }
  else
  {
    v5 = 0;
  }
  v7 = *(_DWORD *)(self + 44);
  v8 = *(_DWORD *)(self + 40) + 1;
  *(_DWORD *)(self + 40) = v8;
  if ( v8 > v7 )
  {
    v9 = v7 + 8;
    *(_DWORD *)(self + 44) = v9;
    v10 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v9);
    if ( v10 )
    {
      v11 = *(_DWORD *)(self + 40);
      v12 = *(_DWORD *)(self + 44) - v11;
      *(_DWORD *)(self + 36) = v10;
      memset((void *)(v10 + 4 * v11), 0, 4 * v12);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v5;
  return v5;
}
