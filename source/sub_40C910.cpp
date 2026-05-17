//----- (0040C910) --------------------------------------------------------
char __cdecl sub_40C910(float *a1, float *a2, int a3, int a4, int a5, float *a6)
{
  double v6; // st7
  float v7; // eax
  double v8; // st7
  float *v9; // ecx
  char result; // al
  double v11; // st7
  double v12; // st6
  float v13; // [esp+4h] [ebp-Ch] BYREF
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]

  v13 = *a2;
  v6 = v13 - *a1;
  v14 = a2[1];
  v7 = a2[2];
  v13 = v6;
  v8 = v14 - a1[1];
  v15 = v7;
  v14 = v8;
  v15 = v7 - a1[2];
  if ( !(unsigned __int8)sub_40C9E0(a1, &v13, a3, a4, a5, &a2) || *(float *)&a2 < 0.0 || *(float *)&a2 > 1.0 )
    return 0;
  v9 = a6;
  result = 1;
  if ( a6 )
  {
    v11 = v15 * *(float *)&a2 + a1[2];
    v12 = v14 * *(float *)&a2 + a1[1];
    *a6 = v13 * *(float *)&a2 + *a1;
    v9[1] = v12;
    v9[2] = v11;
  }
  return result;
}
