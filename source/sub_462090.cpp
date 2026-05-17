//----- (00462090) --------------------------------------------------------
void __thiscall sub_462090(int this, float a2)
{
  int v3; // edx
  double v4; // st7
  int v5; // ecx
  char v6; // al
  double v7; // st7
  double v8; // st7

  if ( *(_BYTE *)(this + 11796) )
    return;
  v3 = 352 * *(_DWORD *)(this + 512);
  v4 = *(float *)(v3 + this + 924) - a2;
  v5 = v3 + this + 880;
  *(float *)(v3 + this + 924) = v4;
  if ( *(float *)(this + 11608) < v4 )
    v4 = *(float *)(this + 11608);
  *(float *)(this + 11608) = v4;
  v6 = *(_BYTE *)(this + 2552);
  *(float *)(this + 11616) = a2 + *(float *)(this + 11616);
  v7 = *(float *)(v5 + 44);
  if ( !v6 )
  {
    if ( v7 < 0.0 )
    {
      v8 = 0.0;
      goto LABEL_10;
    }
LABEL_9:
    v8 = *(float *)(v5 + 44);
    goto LABEL_10;
  }
  if ( v7 >= 1.0 )
    goto LABEL_9;
  v8 = 1.0;
LABEL_10:
  *(float *)(v5 + 44) = v8;
  if ( *(float *)(v5 + 44) <= 0.0 && !*(_DWORD *)(*(_DWORD *)(dword_520970 + 232) + 52) )
  {
    *(_BYTE *)(this + 11796) = 1;
    sub_4261C0(*(_DWORD **)(dword_520970 + 232), aTelegram, 1);
    if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
      sub_463110(this);
    else
      ++*(_DWORD *)(this + 504);
  }
}
