//----- (00475455) --------------------------------------------------------
void __thiscall sub_475455(int this, int a2, int a3, float *a4)
{
  unsigned __int16 *v4; // eax
  unsigned __int16 *i; // esi
  double v7; // st7
  int v8; // [esp+14h] [ebp+10h]

  v4 = (unsigned __int16 *)(*(_DWORD *)(this + 24) + a3 * *(_DWORD *)(this + 4172) + a2 * *(_DWORD *)(this + 4168));
  for ( i = &v4[*(_DWORD *)(this + 4176)]; v4 < i; *(a4 - 1) = 0.0 )
  {
    v8 = *v4++;
    v7 = (double)v8 * 0.000015259022;
    a4[2] = v7;
    a4[1] = v7;
    *a4 = v7;
    a4 += 4;
  }
  if ( *(_DWORD *)(this + 16) )
    sub_4735E3((float *)this, &a4[-4 * *(_DWORD *)(this + 4176)]);
}
