//----- (0041FA20) --------------------------------------------------------
int __cdecl sub_41FA20(int a1, char a2)
{
  int v2; // eax
  float *v3; // edx
  float v4; // ecx
  double v5; // st7
  double v6; // st6
  double v7; // st5
  int result; // eax
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  v2 = sub_408F30(dword_520970);
  dword_520108 = *(_DWORD *)(v2 + 56);
  dword_52010C = *(_DWORD *)(v2 + 60);
  v3 = (float *)(v2 + 44);
  v4 = *(float *)(v2 + 64);
  v2 += 32;
  dword_520110 = LODWORD(v4);
  v5 = *v3 - *(float *)v2;
  v6 = v3[1] - *(float *)(v2 + 4);
  v7 = v3[2] - *(float *)(v2 + 8);
  *(float *)&v9 = *(float *)&dword_52010C * v7 - v4 * v6;
  dword_520118 = v9;
  *(float *)&v10 = v4 * v5 - *(float *)&dword_520108 * v7;
  dword_52011C = v10;
  *(float *)&v11 = *(float *)&dword_520108 * v6 - *(float *)&dword_52010C * v5;
  dword_520120 = v11;
  sub_46B970(&dword_520118, &dword_520118);
  (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 322);
  (*(void (__stdcall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)ArgList + 332))(
    *(_DWORD *)ArgList,
    0,
    dword_5200F8,
    24);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, dword_520124, 0);
  result = a1;
  if ( a1 )
  {
    sub_41BEF0((_DWORD *)dword_520A50, 0, a1, 1, 1);
    sub_41BEF0((_DWORD *)dword_520A50, 1, 0, -1, -1);
    result = sub_41BC00((_DWORD *)dword_520A50, 1, (a2 != 0) + 1, 1, 1, 1, -1, 0);
  }
  dword_520100 = 0;
  byte_5200FC = 0;
  return result;
}
