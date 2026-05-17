//----- (004733C5) --------------------------------------------------------
float *__thiscall sub_4733C5(float *this, float *a2, unsigned int a3, int a4)
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

  sub_46C866((int)(this + 12), 16, 256, (int (__thiscall *)(int))sub_46C80E);
  *(_DWORD *)this = &off_49A774;
  this[6] = *a2;
  this[1] = a2[1];
  this[1042] = a2[2];
  this[1043] = a2[3];
  qmemcpy(this + 1036, a2 + 10, 0x18u);
  sub_46C811(v18, *((_DWORD *)a2 + 17));
  this[7] = v18[0];
  this[8] = v18[1];
  this[9] = v18[2];
  this[10] = v18[3];
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 17) != 0;
  v6 = &unk_4B14E0;
  if ( !*((_DWORD *)a2 + 16) )
    v6 = &unk_4B1460;
  *((_DWORD *)this + 11) = v6;
  *((_DWORD *)this + 1048) = a3 >> 3;
  *((_DWORD *)this + 3) = a3 != 0;
  *((_DWORD *)this + 2) = a4;
  if ( a4 == 2 )
  {
    *((_DWORD *)this + 2) = 1;
    *((_DWORD *)this + 5) = 1;
    if ( *((_DWORD *)a2 + 18) )
    {
      v7 = 0;
      v8 = this + 13;
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
      v9 = this + 14;
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
    this[5] = 0.0;
  }
  v11 = *((_DWORD *)this + 1037);
  v12 = *((_DWORD *)this + 1041);
  v13 = this + 1036;
  v14 = *((_DWORD *)this + 1038) - *((_DWORD *)this + 1036);
  *((_DWORD *)this + 1045) = *((_DWORD *)this + 1039) - v11;
  v15 = *((_DWORD *)this + 1048);
  *((_DWORD *)this + 1046) = v12 - *((_DWORD *)this + 1040);
  v16 = *((_DWORD *)this + 3) == 0;
  *((_DWORD *)this + 1044) = v14;
  *((_DWORD *)this + 1047) = v14 * v15;
  if ( !v16 )
  {
    *((_DWORD *)this + 6) += *v13 * v15
                           + v11 * *((_DWORD *)this + 1042)
                           + *((_DWORD *)this + 1040) * *((_DWORD *)this + 1043);
    *v13 = 0;
    this[1037] = 0.0;
    this[1040] = 0.0;
    this[1038] = this[1044];
    this[1039] = this[1045];
    this[1041] = this[1046];
  }
  return this;
}
