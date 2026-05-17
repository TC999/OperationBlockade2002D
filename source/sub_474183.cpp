//----- (00474183) --------------------------------------------------------
int __thiscall sub_474183(float *this, int a2, int a3, float *a4)
{
  int result; // eax
  _BYTE *i; // esi
  char v7; // bl
  double v8; // st7
  float v9; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+10h] [ebp-10h]
  float v12; // [esp+14h] [ebp-Ch]
  float v13; // [esp+18h] [ebp-8h]
  unsigned int v14; // [esp+1Ch] [ebp-4h]
  unsigned int v15; // [esp+28h] [ebp+8h]
  float *v16; // [esp+2Ch] [ebp+Ch]

  v14 = 0;
  result = a3 * *((_DWORD *)this + 1043);
  for ( i = (_BYTE *)(*((_DWORD *)this + 6) + result + a2 * *((_DWORD *)this + 1042));
        v14 < *((_DWORD *)this + 1044);
        result = v14 )
  {
    v7 = 0;
    v13 = 3.4028235e38;
    v15 = 0;
    v16 = this + 12;
    do
    {
      sub_473397(a4, &v9, v16);
      v8 = v12 * v12 + v11 * v11 + v10 * v10 + v9 * v9;
      if ( v8 < v13 )
      {
        v7 = v15;
        v13 = v8;
      }
      ++v15;
      v16 += 4;
    }
    while ( v15 < 0x100 );
    a4 += 4;
    *i++ = v7;
    ++v14;
  }
  return result;
}
