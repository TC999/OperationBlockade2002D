//----- (00473CF1) --------------------------------------------------------
int __thiscall sub_473CF1(_DWORD *this, int a2, int a3, int a4)
{
  _BYTE *v5; // edx
  unsigned int v6; // ecx
  bool v7; // zf
  float *v8; // edi
  int v9; // eax
  int v11; // [esp+14h] [ebp-4h]
  float v12; // [esp+24h] [ebp+Ch]
  float v13; // [esp+24h] [ebp+Ch]
  float v14; // [esp+28h] [ebp+10h]
  float v15; // [esp+28h] [ebp+10h]

  v5 = (_BYTE *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v11 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v6 = 0;
  v7 = this[1044] == 0;
  dword_52230C = a2;
  if ( !v7 )
  {
    v8 = (float *)(a4 + 8);
    do
    {
      v12 = *(float *)(v11 + 4 * (v6 & 3));
      v14 = *(v8 - 2) * 7.0 + v12;
      v9 = (int)v14;
      v15 = *(v8 - 1) * 7.0 + v12;
      v13 = *v8 * 3.0 + v12;
      v8 += 4;
      *v5++ = (int)v13 | (4 * ((int)v15 | (8 * v9)));
      ++v6;
    }
    while ( v6 < this[1044] );
  }
  return a2;
}
