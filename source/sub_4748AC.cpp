//----- (004748AC) --------------------------------------------------------
int __thiscall sub_4748AC(_DWORD *self, int a2, int a3, float *a4)
{
  int *v4; // edx
  int v5; // ebx
  bool v6; // zf
  unsigned __int16 v8; // si
  unsigned int v10; // [esp+20h] [ebp+8h]
  float v11; // [esp+28h] [ebp+10h]
  float v12; // [esp+28h] [ebp+10h]

  v4 = (int *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v5 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v10 = 0;
  v6 = self[1044] == 0;
  dword_52230C = a3;
  if ( !v6 )
  {
    do
    {
      v11 = *a4 * 32768.0 + *(float *)(v5 + 4 * (v10 & 3));
      v8 = (int)v11;
      v12 = a4[1] * 32768.0 + *(float *)(v5 + 4 * (v10 & 3));
      *v4++ = v8 | ((int)v12 << 16);
      ++v10;
      a4 += 4;
    }
    while ( v10 < self[1044] );
  }
  return a3;
}
