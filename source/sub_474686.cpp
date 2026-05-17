//----- (00474686) --------------------------------------------------------
int __thiscall sub_474686(_DWORD *this, int a2, int a3, int a4)
{
  int *v4; // edx
  bool v5; // zf
  float *v6; // edi
  unsigned __int8 v7; // al
  unsigned __int16 v8; // bx
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]
  unsigned int v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+2Ch] [ebp+10h]
  float v15; // [esp+2Ch] [ebp+10h]

  v4 = (int *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v12 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v13 = 0;
  v5 = this[1044] == 0;
  dword_52230C = a3;
  if ( !v5 )
  {
    v6 = (float *)(a4 + 12);
    do
    {
      v14 = *(float *)(v12 + 4 * (v13 & 3));
      v10 = *(v6 - 3) * 128.0 + v14;
      v7 = (int)v10;
      v11 = *(v6 - 2) * 128.0 + v14;
      v15 = *v6 * 255.0 + v14;
      HIBYTE(v8) = (int)v15;
      v6 += 4;
      LOBYTE(v8) = (int)v11;
      *v4++ = v7 | (v8 << 8);
      ++v13;
    }
    while ( v13 < this[1044] );
  }
  return a3;
}
