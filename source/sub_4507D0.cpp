//----- (004507D0) --------------------------------------------------------
char __thiscall sub_4507D0(int this, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // ecx
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  int v13; // eax
  LPVOID *v14; // ecx
  int v15; // [esp+4h] [ebp-28h]
  float v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+1Ch] [ebp-10h]
  int v18[3]; // [esp+20h] [ebp-Ch] BYREF
  float v19; // [esp+30h] [ebp+4h]
  float v20; // [esp+30h] [ebp+4h]

  if ( *(_BYTE *)(this + 168) )
    return sub_428620((_DWORD *)this, a2);
  v4 = *(_DWORD *)(this + 232);
  if ( v4 )
  {
    v5 = *(_DWORD *)(this + 300);
    *(_BYTE *)(v5 + 33) = *(_DWORD *)(v4 + 52) == 0;
    sub_421540((void **)v5);
    v6 = *(_DWORD *)(this + 304);
    *(_BYTE *)(v6 + 33) = *(_DWORD *)(*(_DWORD *)(this + 232) + 52) == 0;
    sub_421540((void **)v6);
    v7 = *(_DWORD *)(this + 308);
    *(_BYTE *)(v7 + 33) = *(_DWORD *)(*(_DWORD *)(this + 232) + 52) == 0;
    sub_421540((void **)v7);
  }
  if ( *(_BYTE *)(this + 196) )
    *(float *)(this + 192) = *(float *)&a2 * 30.0 + *(float *)(this + 192);
  v8 = *(_DWORD **)(this + 188);
  if ( v8 )
  {
    sub_4074B0(v8, 0);
    v16 = *(float *)(this + 192) * 0.017453292;
    sub_4075B0(*(_DWORD **)(this + 188), 0, v16);
    if ( *(_DWORD *)(this + 172) )
      v10 = 20000.0;
    else
      v10 = 0.0;
    v11 = *(_DWORD *)(this + 260);
    v17 = (__int64)v10;
    if ( !v11
      || !*(_BYTE *)(v11 + 16)
      || (v19 = (float)v17, sub_468BE0(LODWORD(v19), 0, 0) <= -3.4028235e38)
      || (v12 = sub_468BE0(LODWORD(v19), 0, 0), v20 = v12, v12 == -3.4028235e38) )
    {
      v20 = 0.0;
    }
    *(float *)&v15 = (float)v17;
    sub_407600(*(_DWORD **)(this + 188), 0, v15, 0, SLODWORD(v20));
    sub_414C80(*(_DWORD **)(this + 116), *(_DWORD *)(this + 188));
    v13 = sub_408880(*(_DWORD *)(this + 188));
    sub_421190(
      *(_DWORD *)(this + 288),
      "Model '%s' - Anim %d: %0.1f/%0.1f",
      (const char *)(*(_DWORD *)(this + 184) + 60),
      v13,
      *(float *)(*(_DWORD *)(this + 188) + 32),
      *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 188) + 28) + 48)
               + 4 * *(_DWORD *)(*(_DWORD *)(this + 188) + 44)));
    v14 = *(LPVOID **)(this + 292);
    if ( v14 )
      sub_421110(v14, aUseAndToCycleA);
    if ( *(_DWORD *)(this + 268) )
    {
      sub_406D30(*(_DWORD *)(this + 188), *(float *)&a2);
      sub_4085B0(*(_DWORD *)(this + 188), *(_DWORD *)(this + 180), v18);
      sub_402690(v18[0], v18[1], v18[2]);
    }
  }
  return sub_428620((_DWORD *)this, a2);
}
