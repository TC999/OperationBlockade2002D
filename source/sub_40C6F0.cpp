//----- (0040C6F0) --------------------------------------------------------
bool __cdecl sub_40C6F0(float *a1, float *a2, float *a3)
{
  unsigned __int8 v6; // c0
  unsigned __int8 v7; // c3
  bool result; // al
  unsigned __int8 v10; // c0
  unsigned __int8 v11; // c3
  double v12; // st7
  double v13; // st5
  double v14; // st4
  double v15; // st3
  unsigned __int8 v17; // c0
  unsigned __int8 v18; // c3
  float v19; // [esp+4h] [ebp-1Ch]
  int v20; // [esp+24h] [ebp+4h]
  float v21; // [esp+28h] [ebp+8h]
  int v22; // [esp+2Ch] [ebp+Ch]
  float v24; // [esp+30h] [ebp+10h]
  float v25; // [esp+30h] [ebp+10h]

  *(float *)&v22 = *a3 - *a1;
  v19 = a3[1] - a1[1];
  *(float *)&v20 = a3[2] - a1[2];
  if ( v6 | v7 )
    return 1;
  if ( v10 | v11 )
    return 1;
  v12 = a2[2] - a1[2];
  v13 = a2[1] - a1[1];
  v14 = *a2 - *a1;
  v15 = v14 * v14 + v13 * v13 + v12 * v12;
  result = 0;
  if ( v15 != 0.0 )
  {
    v21 = v13;
    v24 = v14;
    v25 = (v24 * *(float *)&v22 + v12 * *(float *)&v20 + v21 * v19) / v15;
    if ( v25 >= 0.0 && v25 <= 1.0 && v17 | v18 )
      return 1;
  }
  return result;
}
