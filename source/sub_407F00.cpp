//----- (00407F00) --------------------------------------------------------
bool __cdecl sub_407F00(int self, int a2, int *a3, float a4, int *a5, float *a6)
{
  int v7; // ecx
  int v8; // esi
  float v9; // edx
  int v10; // ebx
  int v11; // edi
  float v12; // edx
  float v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int16 v16; // dx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  char v22; // [esp+31h] [ebp-99h]
  int v23; // [esp+32h] [ebp-98h] BYREF
  float v24; // [esp+36h] [ebp-94h]
  float v25; // [esp+3Ah] [ebp-90h]
  int v26; // [esp+3Eh] [ebp-8Ch] BYREF
  int v27; // [esp+42h] [ebp-88h]
  int v28; // [esp+46h] [ebp-84h]
  int v29; // [esp+4Ah] [ebp-80h] BYREF
  int *v30; // [esp+4Eh] [ebp-7Ch]
  int v31; // [esp+52h] [ebp-78h] BYREF
  int v32; // [esp+56h] [ebp-74h]
  int v33; // [esp+5Ah] [ebp-70h]
  int v34; // [esp+5Eh] [ebp-6Ch] BYREF
  int v35; // [esp+62h] [ebp-68h]
  int v36; // [esp+66h] [ebp-64h]
  int v37; // [esp+6Ah] [ebp-60h] BYREF
  int v38; // [esp+6Eh] [ebp-5Ch]
  int v39; // [esp+72h] [ebp-58h]
  int v40; // [esp+76h] [ebp-54h] BYREF
  int v41; // [esp+7Ah] [ebp-50h]
  int v42; // [esp+7Eh] [ebp-4Ch]
  int v43; // [esp+82h] [ebp-48h] BYREF
  int v44; // [esp+86h] [ebp-44h]
  _BYTE v45[64]; // [esp+8Ah] [ebp-40h] BYREF

  sub_406F00((float *)self, a2);
  v7 = *(_DWORD *)(*(_DWORD *)(self + 28) + 4);
  v8 = *(_DWORD *)(self + 24) + 96 * a2;
  v23 = *(int *)v8;
  v9 = *(float *)(v8 + 12);
  v24 = *(float *)(v8 + 4);
  v10 = v7 + 172 * a2;
  v25 = *(float *)(v8 + 8);
  v44 = v10;
  if ( !(unsigned __int8)sub_40CC80() )
    return 0;
  qmemcpy(v45, (const void *)(v8 + 16), sizeof(v45));
  v11 = 0;
  sub_46B9FD((float *)v45, (float *)0, (float *)v45);
  v12 = *((float *)a3 + 1);
  v13 = *((float *)a3 + 2);
  v23 = *a3;
  v24 = v12;
  v25 = v13;
  sub_46C5C5((float *)&v23, (float *)&v23, (float *)v45);
  v22 = 0;
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(**(_DWORD **)(v10 + 44) + 44))(
    *(_DWORD *)(v10 + 44),
    0,
    0,
    &v43,
    0);
  v28 = v10 + 84;
  v14 = *(_DWORD *)(v10 + 36);
  v30 = 0;
  (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)v14 + 44))(v14, 0, 0, &v29, 0);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  *a6 = -1.0;
  v15 = *(_DWORD *)(v10 + 48);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v27 = 0;
  if ( v15 > 0 )
  {
    do
    {
      v16 = *(_WORD *)(v11 + v43 + 4);
      v17 = *(unsigned __int16 *)(v11 + v43 + 2);
      v30 = (int *)(v29 + *(_DWORD *)(v28 + 84) * *(unsigned __int16 *)(v11 + v43));
      v31 = *v30;
      v32 = v30[1];
      v33 = v30[2];
      v30 = (int *)(v29 + *(_DWORD *)(v28 + 84) * v17);
      v34 = *v30;
      v35 = v30[1];
      v36 = v30[2];
      v30 = (int *)(v29 + *(_DWORD *)(v28 + 84) * v16);
      v40 = *v30;
      v41 = v30[1];
      v42 = v30[2];
      if ( (unsigned __int8)sub_40CCD0((float *)&v23, a4, (float *)&v31, (float *)&v34, (float *)&v40, (float *)&v37, (float *)&v26) )
      {
        if ( *(float *)&v26 > (double)*a6 )
        {
          *a6 = *(float *)&v26;
          v18 = v38;
          *a5 = v37;
          v19 = v39;
          v22 = 1;
          a5[1] = v18;
          a5[2] = v19;
        }
      }
      v10 = v44;
      v11 += 6;
      v20 = *(_DWORD *)(v44 + 48);
      ++v27;
    }
    while ( v27 < v20 );
  }
  *(float *)dword_520A58 = (float)((double)*(int *)(v10 + 48) + *(float *)dword_520A58);
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v10 + 44) + 48))(*(_DWORD *)(v10 + 44));
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v10 + 36) + 48))(*(_DWORD *)(v10 + 36));
  return v22 != 0;
}
