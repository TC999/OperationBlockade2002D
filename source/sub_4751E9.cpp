//----- (004751E9) --------------------------------------------------------
void __thiscall sub_4751E9(int self, int a2, int a3, float *a4)
{
  unsigned __int8 *v4; // eax
  float *v6; // edi
  float *v7; // esi
  unsigned __int8 *i; // [esp+8h] [ebp+8h]
  int v9; // [esp+10h] [ebp+10h]

  v4 = (unsigned __int8 *)(*(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168));
  for ( i = &v4[2 * *(_DWORD *)(self + 4176)]; v4 < i; *(a4 - 1) = (double)v9 * 0.0039215689 )
  {
    v6 = a4;
    a4 += 4;
    v7 = (float *)(self + 16 * (*v4 + 3));
    *v6 = *v7++;
    *++v6 = *v7++;
    *++v6 = *v7;
    v6[1] = v7[1];
    v9 = v4[1];
    v4 += 2;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, &a4[-4 * *(_DWORD *)(self + 4176)]);
}
