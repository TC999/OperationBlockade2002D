//----- (00473AD9) --------------------------------------------------------
int __thiscall sub_473AD9(_DWORD *this, int a2, int a3, int a4)
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

  v4 = (_WORD *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v11 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v5 = 0;
  v6 = this[1044] == 0;
  dword_52230C = a3;
  if ( !v6 )
  {
    v7 = (float *)(a4 + 8);
    do
    {
      v12 = *(float *)(v11 + 4 * (v5 & 3));
      v14 = *(v7 - 2) * 31.0 + v12;
      v8 = (int)v14;
      v15 = *(v7 - 1) * 31.0 + v12;
      v10 = (int)v15;
      v16 = *v7 * 31.0 + v12;
      v13 = v12 + v7[1];
      v7 += 4;
      *v4++ = (int)v16 | (32 * (v10 | (32 * (v8 | (32 * (int)v13)))));
      ++v5;
    }
    while ( v5 < this[1044] );
  }
  return a3;
}
