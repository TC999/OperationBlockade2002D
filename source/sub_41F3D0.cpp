//----- (0041F3D0) --------------------------------------------------------
int __cdecl sub_41F3D0(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8)
{
  int i; // eax
  double v9; // st7
  float v11[17]; // [esp+0h] [ebp-44h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[4] = (double)SLODWORD(a5) * 0.0039215689;
  a5 = (double)SLODWORD(a6) * 0.0039215689;
  v11[5] = a5;
  v11[1] = a5;
  a6 = (double)SLODWORD(a7) * 0.0039215689;
  v11[6] = a6;
  v11[2] = a6;
  a7 = (double)a8 * 0.0039215689;
  v11[7] = a7;
  v11[3] = a7;
  v11[0] = v11[4];
  (*(void (__stdcall **)(_DWORD, float *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v11);
  sub_41BEF0((_DWORD *)dword_520A50, 0, 0, -1, -1);
  sub_41BEF0((_DWORD *)dword_520A50, 1, 0, -1, -1);
  sub_41BC00((_DWORD *)dword_520A50, 0, a8 != 255, 1, 0, 2, 0, 1);
  (*(void (__stdcall **)(int, _DWORD, _DWORD, float *, _DWORD))(*(_DWORD *)dword_5200EC + 44))(
    dword_5200EC,
    0,
    0,
    &a5,
    0);
  for ( i = 0; i < 372; *(_DWORD *)(i * 4 + LODWORD(a5) - 4) = dword_4A35D4[i] )
  {
    v9 = a4 * flt_4A35D8[i];
    i += 6;
    *(float *)(i * 4 + LODWORD(a5) - 24) = v9 + a1;
    *(float *)(i * 4 + LODWORD(a5) - 20) = a4 * flt_4A35C4[i] + a2;
    *(float *)(i * 4 + LODWORD(a5) - 16) = a4 * flt_4A35C8[i] + a3;
    *(_DWORD *)(i * 4 + LODWORD(a5) - 12) = dword_4A35CC[i];
    *(_DWORD *)(i * 4 + LODWORD(a5) - 8) = dword_4A35D0[i];
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200EC + 48))(dword_5200EC);
  (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 18);
  (*(void (__stdcall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)ArgList + 332))(
    *(_DWORD *)ArgList,
    0,
    dword_5200EC,
    24);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, dword_5200F0, 0);
  (*(void (__stdcall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)ArgList + 284))(
    *(_DWORD *)ArgList,
    4,
    0,
    62,
    0,
    120);
  *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
  return 120;
}
