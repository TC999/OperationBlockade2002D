//----- (00473F81) --------------------------------------------------------
int __cdecl sub_473F81(_DWORD *self, int a2, int a3, int a4)
{
  _WORD *v4; // edx
  unsigned int v5; // edi
  bool v6; // zf
  float *v7; // esi
  int v8; // eax
  int v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+24h] [ebp+Ch]
  float v12; // [esp+24h] [ebp+Ch]
  float v13; // [esp+28h] [ebp+10h]
  float v14; // [esp+28h] [ebp+10h]

  v4 = (_WORD *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v10 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v5 = 0;
  v6 = self[1044] == 0;
  dword_52230C = a2;
  if ( !v6 )
  {
    v7 = (float *)(a4 + 8);
    do
    {
      v11 = *(float *)(v10 + 4 * (v5 & 3));
      v13 = *(v7 - 2) * 15.0 + v11;
      v8 = (int)v13;
      v14 = *(v7 - 1) * 15.0 + v11;
      v12 = *v7 * 15.0 + v11;
      v7 += 4;
      *v4++ = (int)v12 | (16 * ((int)v14 | (16 * v8)));
      ++v5;
    }
    while ( v5 < self[1044] );
  }
  return a2;
}
