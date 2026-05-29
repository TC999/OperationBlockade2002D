//----- (0047423D) --------------------------------------------------------
int __thiscall sub_47423D(_DWORD *self, int a2, int a3, int a4)
{
  _BYTE *v4; // edx
  int v5; // edi
  unsigned int v6; // ebx
  bool v7; // zf
  float *v8; // esi
  float v10; // [esp+18h] [ebp+Ch]

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
      v10 = (*(v8 - 1) * 0.21250001 + v8[1] * 0.072099999 + *v8 * 0.71539998) * 255.0 + *(float *)(v5 + 4 * (v6 & 3));
      *v4++ = (int)v10;
      ++v6;
      v8 += 4;
    }
    while ( v6 < self[1044] );
  }
  return a2;
}
