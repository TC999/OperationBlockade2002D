//----- (004733C5) --------------------------------------------------------
float *__thiscall sub_4733C5(float *self, float *a2, unsigned int a3, int a4)
{
  void *v6; // ecx
  unsigned int v7; // edx
  float *v8; // ecx
  float *v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // eax
  bool v16; // zf
  float v18[4]; // [esp+Ch] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp+8h]

  sub_46C866((int)(self + 12), 16, 256, (int (__thiscall *)(int))sub_46C80E);
  *(_DWORD *)self = &off_49A774;
  self[6] = *a2;
  self[1] = a2[1];
  self[1042] = a2[2];
  self[1043] = a2[3];
  qmemcpy(self + 1036, a2 + 10, 0x18u);
  sub_46C811(v18, *((_DWORD *)a2 + 17));
  self[7] = v18[0];
  self[8] = v18[1];
  self[9] = v18[2];
  self[10] = v18[3];
  *((_DWORD *)self + 4) = *((_DWORD *)a2 + 17) != 0;
  v6 = &unk_4B14E0;
  if ( !*((_DWORD *)a2 + 16) )
    v6 = &unk_4B1460;
  *((_DWORD *)self + 11) = v6;
  *((_DWORD *)self + 1048) = a3 >> 3;
  *((_DWORD *)self + 3) = a3 != 0;
  *((_DWORD *)self + 2) = a4;
  if ( a4 == 2 )
  {
    *((_DWORD *)self + 2) = 1;
    *((_DWORD *)self + 5) = 1;
    if ( *((_DWORD *)a2 + 18) )
    {
      v7 = 0;
      v8 = self + 13;
      do
      {
        v19 = *(unsigned __int8 *)(v7 + *((_DWORD *)a2 + 18));
        v7 += 4;
        *(v8 - 1) = (double)v19 * 0.0039215689;
        *v8 = (double)*(unsigned __int8 *)(v7 + *((_DWORD *)a2 + 18) - 3) * 0.0039215689;
        v8 += 4;
        *(v8 - 3) = (double)*(unsigned __int8 *)(v7 + *((_DWORD *)a2 + 18) - 2) * 0.0039215689;
        *(v8 - 2) = (double)*(unsigned __int8 *)(v7 + *((_DWORD *)a2 + 18) - 1) * 0.0039215689;
      }
      while ( v7 < 0x400 );
    }
    else
    {
      v9 = self + 14;
      v10 = 256;
      do
      {
        v9[1] = 1.0;
        *v9 = 1.0;
        v9 += 4;
        --v10;
        *(v9 - 5) = 1.0;
        *(v9 - 6) = 1.0;
      }
      while ( v10 );
    }
  }
  else
  {
    self[5] = 0.0;
  }
  v11 = *((_DWORD *)self + 1037);
  v12 = *((_DWORD *)self + 1041);
  v13 = self + 1036;
  v14 = *((_DWORD *)self + 1038) - *((_DWORD *)self + 1036);
  *((_DWORD *)self + 1045) = *((_DWORD *)self + 1039) - v11;
  v15 = *((_DWORD *)self + 1048);
  *((_DWORD *)self + 1046) = v12 - *((_DWORD *)self + 1040);
  v16 = *((_DWORD *)self + 3) == 0;
  *((_DWORD *)self + 1044) = v14;
  *((_DWORD *)self + 1047) = v14 * v15;
  if ( !v16 )
  {
    *((_DWORD *)self + 6) += *v13 * v15
                           + v11 * *((_DWORD *)self + 1042)
                           + *((_DWORD *)self + 1040) * *((_DWORD *)self + 1043);
    *v13 = 0;
    self[1037] = 0.0;
    self[1040] = 0.0;
    self[1038] = self[1044];
    self[1039] = self[1045];
    self[1041] = self[1046];
  }
  return self;
}
