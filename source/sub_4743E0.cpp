//----- (004743E0) --------------------------------------------------------
int __thiscall sub_4743E0(_DWORD *this, int a2, int a3, int a4)
{
  _BYTE *v5; // edx
  int v6; // ecx
  bool v7; // zf
  float *v8; // edi
  int v9; // ebx
  unsigned int v11; // [esp+1Ch] [ebp+8h]
  float v12; // [esp+24h] [ebp+10h]
  float v13; // [esp+24h] [ebp+10h]

  v5 = (_BYTE *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v6 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v11 = 0;
  v7 = this[1044] == 0;
  dword_52230C = a3;
  if ( !v7 )
  {
    v8 = (float *)(a4 + 4);
    do
    {
      v12 = (*(v8 - 1) * 0.21250001 + v8[1] * 0.072099999 + *v8 * 0.71539998) * 15.0 + *(float *)(v6 + 4 * (v11 & 3));
      v9 = (int)v12;
      v13 = v8[2] * 15.0 + *(float *)(v6 + 4 * (v11 & 3));
      *v5++ = v9 | (16 * (int)v13);
      ++v11;
      v8 += 4;
    }
    while ( v11 < this[1044] );
  }
  return a3;
}
