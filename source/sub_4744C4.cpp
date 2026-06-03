//----- (004744C4) --------------------------------------------------------
int __cdecl sub_4744C4(_DWORD *self, int a2, int a3, float *a4)
{
  _WORD *v5; // edx
  int v6; // ecx
  bool v7; // zf
  __int16 v9; // ax
  unsigned int v11; // [esp+1Ch] [ebp+8h]
  float v12; // [esp+24h] [ebp+10h]
  float v13; // [esp+24h] [ebp+10h]

  v5 = (_WORD *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v6 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v11 = 0;
  v7 = self[1044] == 0;
  dword_52230C = a3;
  if ( !v7 )
  {
    do
    {
      v12 = *a4 * 128.0 + *(float *)(v6 + 4 * (v11 & 3));
      ((_BYTE*)&(v9))[0] = (int)v12;
      v13 = a4[1] * 128.0 + *(float *)(v6 + 4 * (v11 & 3));
      a4 += 4;
      ((_BYTE*)&(v9))[1] = (int)v13;
      *v5++ = v9;
      ++v11;
    }
    while ( v11 < self[1044] );
  }
  return a3;
}
