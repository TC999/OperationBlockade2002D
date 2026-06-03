//----- (0047406E) --------------------------------------------------------
int __cdecl sub_47406E(float *self, int a2, int a3, float *a4)
{
  _WORD *v5; // edi
  unsigned int v6; // ebx
  bool v7; // zf
  __int16 v8; // cx
  float v10; // [esp+Ch] [ebp-28h] BYREF
  float v11; // [esp+10h] [ebp-24h]
  float v12; // [esp+14h] [ebp-20h]
  int v13; // [esp+1Ch] [ebp-18h]
  float v14; // [esp+20h] [ebp-14h]
  int v15; // [esp+24h] [ebp-10h]
  unsigned int v16; // [esp+28h] [ebp-Ch]
  int v17; // [esp+2Ch] [ebp-8h]
  float *v18; // [esp+30h] [ebp-4h]
  unsigned int v19; // [esp+3Ch] [ebp+8h]
  float v20; // [esp+3Ch] [ebp+8h]
  float *v21; // [esp+40h] [ebp+Ch]

  v5 = (_WORD *)(*((_DWORD *)self + 6) + a3 * *((_DWORD *)self + 1043) + a2 * *((_DWORD *)self + 1042));
  v15 = *((_DWORD *)self + 11) + 4 * ((a3 & 3) + 8 * (a2 & 3));
  v6 = 0;
  v7 = *((_DWORD *)self + 1044) == 0;
  dword_52230C = v17;
  if ( !v7 )
  {
    v18 = a4 + 3;
    do
    {
      v16 = 0;
      v19 = 0;
      v14 = *(float *)(v15 + 4 * (v6 & 3));
      v21 = self + 12;
      do
      {
        sub_473397(a4, &v10, v21);
        if ( v12 * v12 + v11 * v11 + v10 * v10 < 3.4028235e38 )
          v16 = v19;
        ++v19;
        v21 += 4;
      }
      while ( v19 < 0x100 );
      v20 = *v18 * 255.0 + v14;
      v13 = (int)v20;
      v18 += 4;
      ((_BYTE*)&(v8))[0] = 0;
      ((_BYTE*)&(v8))[1] = v13;
      *v5++ = v16 | v8;
      ++v6;
    }
    while ( v6 < *((_DWORD *)self + 1044) );
  }
  return v17;
}
