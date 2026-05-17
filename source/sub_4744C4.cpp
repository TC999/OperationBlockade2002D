//----- (004744C4) --------------------------------------------------------
int __thiscall sub_4744C4(_DWORD *this, int a2, int a3, float *a4)
{
  _WORD *v5; // edx
  int v6; // ecx
  bool v7; // zf
  __int16 v9; // ax
  unsigned int v11; // [esp+1Ch] [ebp+8h]
  float v12; // [esp+24h] [ebp+10h]
  float v13; // [esp+24h] [ebp+10h]

  v5 = (_WORD *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v6 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v11 = 0;
  v7 = this[1044] == 0;
  dword_52230C = a3;
  if ( !v7 )
  {
    do
    {
      v12 = *a4 * 128.0 + *(float *)(v6 + 4 * (v11 & 3));
      LOBYTE(v9) = (int)v12;
      v13 = a4[1] * 128.0 + *(float *)(v6 + 4 * (v11 & 3));
      a4 += 4;
      HIBYTE(v9) = (int)v13;
      *v5++ = v9;
      ++v11;
    }
    while ( v11 < this[1044] );
  }
  return a3;
}
