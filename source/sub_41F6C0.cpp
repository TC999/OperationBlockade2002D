//----- (0041F6C0) --------------------------------------------------------
int __thiscall sub_41F6C0(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st6
  float *v6; // edx
  double v7; // st7
  float v8; // ecx
  int result; // eax
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+10h] [ebp-4h]

  if ( *(float *)(this + 56) > 0.0 )
  {
    v3 = *(float *)(this + 56) - a2;
    *(float *)(this + 56) = v3;
    v4 = *(float *)(this + 60);
    if ( v4 == 0.0 )
      v5 = 1.0;
    else
      v5 = v3 / v4;
    *(_DWORD *)(this + 32) = (__int64)(v5 * 255.0);
    if ( v3 <= 0.0 )
    {
      *(_DWORD *)(this + 36) = 0;
      *(_DWORD *)(this + 40) = 0;
      *(_DWORD *)(this + 44) = 0;
      *(_DWORD *)(this + 48) = 0;
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 52) + 12) = *(_DWORD *)(this + 32) != 255 ? 4 : 2;
  v10 = *(float *)(this + 36);
  v6 = (float *)(*(_DWORD *)(this + 52) + 16);
  v7 = *(float *)(this + 44);
  v8 = *(float *)(this + 40);
  *v6 = v10;
  v11 = v7;
  v6[1] = v8;
  v6[2] = v11;
  *(_DWORD *)(*(_DWORD *)(this + 52) + 28) = 0;
  result = *(_DWORD *)(this + 48);
  *(_DWORD *)(*(_DWORD *)(this + 52) + 32) = result;
  return result;
}
