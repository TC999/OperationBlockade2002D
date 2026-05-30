//----- (00474977) --------------------------------------------------------
int __cdecl sub_474977(_DWORD *self, int a2, int a3, int a4)
{
  unsigned int *v4; // edx
  bool v5; // zf
  float *v6; // esi
  __int16 v7; // di
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]
  unsigned int v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+2Ch] [ebp+10h]
  float v14; // [esp+2Ch] [ebp+10h]

  v4 = (unsigned int *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v11 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v12 = 0;
  v5 = self[1044] == 0;
  dword_52230C = a3;
  if ( !v5 )
  {
    v6 = (float *)(a4 + 8);
    do
    {
      v13 = *(float *)(v11 + 4 * (v12 & 3));
      v9 = *(v6 - 2) * 512.0 + v13;
      v7 = (int)v9;
      v10 = *(v6 - 1) * 1024.0 + v13;
      v14 = *v6 * 1024.0 + v13;
      *v4++ = v7 & 0x3FF | (((int)v10 & 0x7FF | (((int)v14 & 0xFFFFFFFE) << 11)) << 10);
      ++v12;
      v6 += 4;
    }
    while ( v12 < self[1044] );
  }
  return a3;
}
