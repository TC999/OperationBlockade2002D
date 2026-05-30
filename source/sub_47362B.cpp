//----- (0047362B) --------------------------------------------------------
int __cdecl sub_47362B(_DWORD *self, int a2, int a3, int a4)
{
  _BYTE *v4; // edx
  int v5; // ebx
  unsigned int v6; // edi
  bool v7; // zf
  float *v8; // esi
  float v10; // [esp+24h] [ebp+Ch]
  float v11; // [esp+24h] [ebp+Ch]
  float v12; // [esp+28h] [ebp+10h]
  float v13; // [esp+28h] [ebp+10h]

  v4 = (_BYTE *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v5 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v6 = 0;
  v7 = self[1044] == 0;
  dword_52230C = a2;
  if ( !v7 )
  {
    v8 = (float *)(a4 + 4);
    do
    {
      v10 = *(float *)(v5 + 4 * (v6 & 3));
      v12 = v8[1] * 255.0 + v10;
      *v4 = (int)v12;
      v13 = *v8 * 255.0 + v10;
      v4[1] = (int)v13;
      v11 = *(v8 - 1) * 255.0 + v10;
      v4[2] = (int)v11;
      v4 += 3;
      ++v6;
      v8 += 4;
    }
    while ( v6 < self[1044] );
  }
  return a2;
}
