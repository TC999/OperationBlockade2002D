//----- (00473BE2) --------------------------------------------------------
int __thiscall sub_473BE2(_DWORD *self, int a2, int a3, int a4)
{
  _WORD *v4; // edx
  unsigned int v5; // edi
  bool v6; // zf
  float *v7; // esi
  int v8; // ebx
  int v10; // [esp+8h] [ebp-18h]
  int v11; // [esp+1Ch] [ebp-4h]
  float v12; // [esp+28h] [ebp+8h]
  float v13; // [esp+28h] [ebp+8h]
  float v14; // [esp+30h] [ebp+10h]
  float v15; // [esp+30h] [ebp+10h]
  float v16; // [esp+30h] [ebp+10h]

  v4 = (_WORD *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  v11 = self[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v5 = 0;
  v6 = self[1044] == 0;
  dword_52230C = a3;
  if ( !v6 )
  {
    v7 = (float *)(a4 + 8);
    do
    {
      v12 = *(float *)(v11 + 4 * (v5 & 3));
      v14 = *(v7 - 2) * 15.0 + v12;
      v8 = (int)v14;
      v15 = *(v7 - 1) * 15.0 + v12;
      v10 = (int)v15;
      v16 = *v7 * 15.0 + v12;
      v13 = v7[1] * 15.0 + v12;
      v7 += 4;
      *v4++ = (int)v16 | (16 * (v10 | (16 * (v8 | (16 * (int)v13)))));
      ++v5;
    }
    while ( v5 < self[1044] );
  }
  return a3;
}
