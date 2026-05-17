//----- (00475343) --------------------------------------------------------
void __thiscall sub_475343(int this, int a2, int a3, float *a4)
{
  unsigned __int8 *v5; // eax
  unsigned __int8 *i; // edi
  double v7; // st6
  int v8; // [esp+18h] [ebp+10h]

  v5 = (unsigned __int8 *)(*(_DWORD *)(this + 24) + a3 * *(_DWORD *)(this + 4172) + a2 * *(_DWORD *)(this + 4168));
  for ( i = &v5[2 * *(_DWORD *)(this + 4176)]; v5 < i; *(a4 - 1) = (double)*(v5 - 1) * 0.0039215689 )
  {
    v8 = *v5;
    v5 += 2;
    v7 = (double)v8 * 0.0039215689;
    a4[2] = v7;
    a4[1] = v7;
    *a4 = v7;
    a4 += 4;
  }
  if ( *(_DWORD *)(this + 16) )
    sub_4735E3((float *)this, &a4[-4 * *(_DWORD *)(this + 4176)]);
}
