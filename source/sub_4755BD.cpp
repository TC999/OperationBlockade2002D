//----- (004755BD) --------------------------------------------------------
int __thiscall sub_4755BD(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  float *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  float v9; // [esp+4h] [ebp-24h]
  float v10; // [esp+4h] [ebp-24h]
  float v11; // [esp+Ch] [ebp-1Ch]
  float v12; // [esp+Ch] [ebp-1Ch]
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+14h] [ebp-14h]
  _WORD *v15; // [esp+1Ch] [ebp-Ch]
  unsigned int i; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]
  int v18; // [esp+24h] [ebp-4h]

  if ( this[1057] && this[1058] )
  {
    v2 = this[1043] * this[1054];
    v3 = this[1050];
    v15 = (_WORD *)(this[6] + this[1042] * this[1051] + v2 + 2 * v3);
    v4 = (float *)this[1049];
    for ( i = v3; i < this[1052]; *(v15 - 1) = ((_WORD)v18 << this[1060]) | ((_WORD)v6 << this[1059]) )
    {
      v13 = v4[4] * 65.481003 + v4[6] * 24.966 + v4[5] * 128.55299;
      v11 = v4[2] * 112.0 - v4[1] * 74.203003 - *v4 * 37.797001;
      v9 = *v4 * 112.0 - (v4[1] * 93.786003 + v4[2] * 18.214001);
      v17 = *v4 * 65.481003 + v4[1] * 128.55299 + v4[2] * 24.966 + 0.5;
      v5 = (int)v17 + 16;
      v14 = v13 + 0.5;
      v6 = (int)v14 + 16;
      v12 = v11 + 0.5;
      v7 = (int)v12 + 128;
      v10 = v9 + 0.5;
      v18 = (int)v10 + 128;
      if ( v5 >= 0 )
      {
        if ( v5 > 255 )
          v5 = 255;
      }
      else
      {
        v5 = 0;
      }
      if ( v6 >= 0 )
      {
        if ( v6 > 255 )
          LOWORD(v6) = 255;
      }
      else
      {
        LOWORD(v6) = 0;
      }
      if ( v7 >= 0 )
      {
        if ( v7 > 255 )
          v7 = 255;
      }
      else
      {
        v7 = 0;
      }
      if ( v18 >= 0 )
      {
        if ( v18 > 255 )
          LOWORD(v18) = 255;
      }
      else
      {
        LOWORD(v18) = 0;
      }
      i += 2;
      v4 += 8;
      *v15 = (v7 << this[1060]) | (v5 << this[1059]);
      v15 += 2;
    }
    this[1057] = 0;
  }
  return 0;
}
