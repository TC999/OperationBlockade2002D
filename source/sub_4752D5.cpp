//----- (004752D5) --------------------------------------------------------
void __thiscall sub_4752D5(int self, int a2, int a3, float *a4)
{
  unsigned __int8 *v4; // eax
  unsigned __int8 *i; // esi
  double v7; // st7
  int v8; // [esp+14h] [ebp+10h]

  v4 = (unsigned __int8 *)(*(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168));
  for ( i = &v4[*(_DWORD *)(self + 4176)]; v4 < i; *(a4 - 1) = 1.0 )
  {
    v8 = *v4++;
    v7 = (double)v8 * 0.0039215689;
    a4[2] = v7;
    a4[1] = v7;
    *a4 = v7;
    a4 += 4;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, &a4[-4 * *(_DWORD *)(self + 4176)]);
}
