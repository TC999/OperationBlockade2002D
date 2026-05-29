//----- (00474785) --------------------------------------------------------
int __thiscall sub_474785(_DWORD *self, int a2, int a3, int a4)
{
  int *v4; // edx
  bool v5; // zf
  float *v6; // esi
  int v8; // [esp+8h] [ebp-20h]
  int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h]
  unsigned int v12; // [esp+30h] [ebp+8h]
  float v13; // [esp+34h] [ebp+Ch]
  float v14; // [esp+34h] [ebp+Ch]
  float v15; // [esp+38h] [ebp+10h]
  float v16; // [esp+38h] [ebp+10h]
  float v17; // [esp+38h] [ebp+10h]

  v4 = (int *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v10 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v12 = 0;
  v5 = self[1044] == 0;
  dword_52230C = v11;
  if ( !v5 )
  {
    v6 = (float *)(a4 + 8);
    do
    {
      v13 = *(float *)(v10 + 4 * (v12 & 3));
      v15 = *(v6 - 2) * 128.0 + v13;
      v8 = (int)v15;
      v16 = *(v6 - 1) * 128.0 + v13;
      v9 = (int)v16;
      v17 = *v6 * 128.0 + v13;
      v14 = v6[1] * 128.0 + v13;
      *v4++ = (unsigned __int8)v8 | (((unsigned __int8)v9 | ((((int)v14 << 8) | (unsigned __int8)(int)v17) << 8)) << 8);
      ++v12;
      v6 += 4;
    }
    while ( v12 < self[1044] );
  }
  return v11;
}
