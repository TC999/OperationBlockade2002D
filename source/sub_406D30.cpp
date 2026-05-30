//----- (00406D30) --------------------------------------------------------
void __cdecl sub_406D30(int self, float a2)
{
  double v2; // st7
  double v3; // st6
  char v4; // al
  int v5; // esi
  int v6; // edx
  int v7; // edx
  int v8; // esi
  int v9; // edx
  _DWORD *v10; // edi
  int v11; // eax
  bool v12; // c0
  int *v13; // edx
  double v14; // st7

  v2 = *(float *)(self + 32);
  v3 = a2 + v2;
  v4 = *(_BYTE *)(self + 48);
  *(float *)(self + 32) = v3;
  if ( v4 )
  {
    v5 = *(_DWORD *)(self + 28);
    v6 = 4 * *(_DWORD *)(self + 44);
    if ( v3 > *(float *)(*(_DWORD *)(v5 + 48) + v6) )
      *(_DWORD *)(self + 32) = *(_DWORD *)(*(_DWORD *)(v5 + 44) + v6);
    if ( *(float *)(self + 32) < (double)*(float *)(*(_DWORD *)(v5 + 44) + v6) )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(v5 + 48) + v6);
LABEL_10:
      *(_DWORD *)(self + 32) = v7;
    }
  }
  else
  {
    v8 = *(_DWORD *)(self + 28);
    v9 = 4 * *(_DWORD *)(self + 44);
    v10 = (_DWORD *)(*(_DWORD *)(v8 + 48) + v9);
    if ( v3 > *(float *)v10 )
      *(_DWORD *)(self + 32) = *v10;
    v11 = *(_DWORD *)(v8 + 44);
    v12 = *(float *)(self + 32) < (double)*(float *)(v9 + v11);
    v13 = (int *)(v11 + v9);
    if ( v12 )
    {
      v7 = *v13;
      goto LABEL_10;
    }
  }
  v14 = v2 - *(float *)(self + 32);
  if ( v14 >= 0.0000099999997 || v14 <= -0.0000099999997 )
    sub_407120(0);
}
