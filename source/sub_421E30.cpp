//----- (00421E30) --------------------------------------------------------
int __thiscall sub_421E30(_DWORD **self, float a2, float a3, float a4, int a5, float *a6)
{
  double v7; // st7
  double v8; // st6
  int result; // eax
  float *v10; // [esp+28h] [ebp-Ch] BYREF
  float v11; // [esp+2Ch] [ebp-8h]
  float v12; // [esp+30h] [ebp-4h]
  float v13; // [esp+38h] [ebp+4h]

  (*(void (__stdcall **)(_DWORD *, _DWORD, int, float **, _DWORD))(*self[13] + 44))(self[13], 0, 112, &v10, 0);
  v12 = a2 + 0.5;
  v11 = a3 + 0.5;
  v13 = floor(a2 + a6[5] + 0.5) + 0.5;
  v7 = floor(a3 + a6[6] + 0.5) + 0.5;
  *v10 = v12;
  v10[1] = v11;
  v10[2] = a4;
  v10[3] = 0.5;
  *((_DWORD *)v10 + 4) = a5;
  v10[5] = a6[1];
  v10[6] = a6[2];
  v10[7] = v13;
  v10[8] = v11;
  v10[9] = a4;
  v8 = v12;
  v10[10] = 0.5;
  *((_DWORD *)v10 + 11) = a5;
  v10[12] = a6[3];
  v10[13] = a6[2];
  v10[14] = v8;
  v10[15] = v7;
  v10[16] = a4;
  v10[17] = 0.5;
  *((_DWORD *)v10 + 18) = a5;
  v10[19] = a6[1];
  v10[20] = a6[4];
  v10[21] = v13;
  v10[22] = v7;
  v10[23] = a4;
  v10[24] = 0.5;
  *((_DWORD *)v10 + 25) = a5;
  v10[26] = a6[3];
  v10[27] = a6[4];
  (*(void (__stdcall **)(_DWORD *))(*self[13] + 48))(self[13]);
  (*(void (__stdcall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)ArgList + 284))(
    *(_DWORD *)ArgList,
    4,
    0,
    4,
    0,
    2);
  result = dword_520A20;
  *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
  return result;
}
