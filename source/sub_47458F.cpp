//----- (0047458F) --------------------------------------------------------
int __cdecl sub_47458F(_DWORD *self, int a2, int a3, int a4)
{
  _WORD *v5; // edx
  bool v6; // zf
  float *v7; // edi
  char v8; // cl
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]
  unsigned int v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+2Ch] [ebp+10h]
  float v15; // [esp+2Ch] [ebp+10h]

  v5 = (_WORD *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v12 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v13 = 0;
  v6 = self[1044] == 0;
  dword_52230C = a3;
  if ( !v6 )
  {
    v7 = (float *)(a4 + 12);
    do
    {
      v14 = *(float *)(v12 + 4 * (v13 & 3));
      v10 = *(v7 - 3) * 16.0 + v14;
      v8 = (int)v10;
      v11 = *(v7 - 2) * 16.0 + v14;
      v15 = *v7 * 63.0 + v14;
      *v5++ = v8 & 0x1F | (32 * ((32 * (int)v15) | (int)v11 & 0x1F));
      ++v13;
      v7 += 4;
    }
    while ( v13 < self[1044] );
  }
  return a3;
}
