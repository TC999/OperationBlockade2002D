//----- (00473DDA) --------------------------------------------------------
int __cdecl sub_473DDA(_DWORD *self, int a2, int a3, int a4)
{
  _BYTE *v4; // edx
  int v5; // esi
  unsigned int v6; // edi
  bool v7; // zf
  float *v8; // ebx
  float v10; // [esp+14h] [ebp+Ch]

  v4 = (_BYTE *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v5 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v6 = 0;
  v7 = self[1044] == 0;
  dword_52230C = a2;
  if ( !v7 )
  {
    v8 = (float *)(a4 + 12);
    do
    {
      v10 = *(float *)(v5 + 4 * (v6 & 3)) + *v8 * 255.0;
      *v4++ = (int)v10;
      ++v6;
      v8 += 4;
    }
    while ( v6 < self[1044] );
  }
  return a2;
}
