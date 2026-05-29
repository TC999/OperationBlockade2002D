//----- (00408680) --------------------------------------------------------
char __thiscall sub_408680(int self, int a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  int v9; // edi
  int v10; // esi
  float *v12; // eax
  int v13; // edx
  int v14; // esi
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  int v21; // ecx
  float *v22; // eax
  float v23; // [esp+14h] [ebp-18h] BYREF
  float v24; // [esp+18h] [ebp-14h]
  float v25; // [esp+1Ch] [ebp-10h]
  int v26; // [esp+20h] [ebp-Ch]
  float *v27; // [esp+24h] [ebp-8h] BYREF
  float *v28; // [esp+28h] [ebp-4h]
  int v29; // [esp+34h] [ebp+8h]

  *a3 = 3.4028235e38;
  *a4 = -3.4028235e38;
  *a5 = 3.4028235e38;
  *a6 = -3.4028235e38;
  *a7 = 3.4028235e38;
  *a8 = -3.4028235e38;
  v9 = *(_DWORD *)(*(_DWORD *)(self + 28) + 4) + 172 * a2;
  v10 = *(_DWORD *)(self + 24) + 96 * a2;
  if ( *(int *)(v9 + 40) <= 0 )
    return 0;
  sub_406F00((float *)self, a2);
  v28 = 0;
  v26 = v9 + 84;
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, float **, _DWORD))(**(_DWORD **)(v9 + 36) + 44))(
    *(_DWORD *)(v9 + 36),
    0,
    0,
    &v27,
    0);
  v12 = v27;
  v28 = v27;
  v13 = *(_DWORD *)(v9 + 40);
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  if ( v13 )
  {
    v29 = v10 + 16;
    v14 = v13;
    do
    {
      v23 = *v12;
      v24 = v12[1];
      v25 = v12[2];
      sub_46C5C5(&v23, &v23, v29);
      if ( *a3 >= (double)v23 )
        v15 = v23;
      else
        v15 = *a3;
      *a3 = v15;
      if ( *a4 <= (double)v23 )
        v16 = v23;
      else
        v16 = *a4;
      *a4 = v16;
      if ( *a5 >= (double)v24 )
        v17 = v24;
      else
        v17 = *a5;
      *a5 = v17;
      if ( *a6 <= (double)v24 )
        v18 = v24;
      else
        v18 = *a6;
      *a6 = v18;
      if ( *a7 >= (double)v25 )
        v19 = v25;
      else
        v19 = *a7;
      *a7 = v19;
      if ( *a8 <= (double)v25 )
        v20 = v25;
      else
        v20 = *a8;
      v21 = v26;
      v22 = v28;
      *a8 = v20;
      v12 = (float *)((char *)v22 + *(_DWORD *)(v21 + 84));
      --v14;
      v28 = v12;
    }
    while ( v14 );
  }
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 36) + 48))(*(_DWORD *)(v9 + 36));
  return 1;
}
