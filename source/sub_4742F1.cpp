//----- (004742F1) --------------------------------------------------------
int __thiscall sub_4742F1(_DWORD *this, int a2, int a3, int a4)
{
  _WORD *v5; // edx
  int v6; // ecx
  bool v7; // zf
  float *v8; // edi
  __int16 v9; // bx
  int v11; // [esp+8h] [ebp-10h]
  unsigned int v12; // [esp+20h] [ebp+8h]
  float v13; // [esp+28h] [ebp+10h]
  float v14; // [esp+28h] [ebp+10h]

  v5 = (_WORD *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v6 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v12 = 0;
  v7 = this[1044] == 0;
  dword_52230C = a3;
  if ( !v7 )
  {
    v8 = (float *)(a4 + 4);
    do
    {
      v13 = (*(v8 - 1) * 0.21250001 + v8[1] * 0.072099999 + *v8 * 0.71539998) * 255.0 + *(float *)(v6 + 4 * (v12 & 3));
      v11 = (int)v13;
      v14 = v8[2] * 255.0 + *(float *)(v6 + 4 * (v12 & 3));
      LOBYTE(v9) = 0;
      HIBYTE(v9) = (int)v14;
      v8 += 4;
      *v5++ = v11 | v9;
      ++v12;
    }
    while ( v12 < this[1044] );
  }
  return a3;
}
