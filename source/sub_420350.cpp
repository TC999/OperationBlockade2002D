//----- (00420350) --------------------------------------------------------
int __cdecl sub_420350(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int result; // eax
  _DWORD *v6; // [esp+14h] [ebp-4h] BYREF

  byte_5200FC = 1;
  (*(void (__stdcall **)(int, _DWORD, int, _DWORD **, _DWORD))(*(_DWORD *)dword_5200F8 + 44))(
    dword_5200F8,
    0,
    24576,
    &v6,
    0);
  v6 += 24 * dword_520100;
  *v6 = *a1;
  v6[1] = a1[1];
  v6[2] = a1[2];
  v6[3] = a5;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = *a2;
  v6[7] = a2[1];
  v6[8] = a2[2];
  v6[9] = a5;
  v6[10] = 1065353216;
  v6[11] = 0;
  v6[12] = *a4;
  v6[13] = a4[1];
  v6[14] = a4[2];
  v6[15] = a5;
  v6[16] = 0;
  v6[17] = 1065353216;
  v6[18] = *a3;
  v6[19] = a3[1];
  v6[20] = a3[2];
  v6[21] = a5;
  v6[22] = 1065353216;
  v6[23] = 1065353216;
  (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200F8 + 48))(dword_5200F8);
  result = 0;
  if ( ++dword_520100 == 256 )
  {
    result = sub_4204C0();
    dword_520100 = 0;
  }
  return result;
}
