//----- (00467E30) --------------------------------------------------------
char __cdecl sub_467E30(int a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // eax
  char v5; // bl
  double v6; // st7
  char result; // al
  double v8; // st7
  _DWORD *v9; // eax
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+4h] [ebp-8h]
  int v14; // [esp+8h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 448) || sub_417160(*(_DWORD *)(a1 + 452)) > 0 )
    return sub_418E50(*(_DWORD *)(a1 + 452), 1, COERCE_FLOAT(1));
  v1 = *(_DWORD *)(a1 + 448);
  if ( v1 == 1 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 452) + 4132);
    v3 = *(_DWORD *)(a1 + 412);
    v10 = *(float *)(v3 + 1208);
    v12 = *(float *)(v3 + 1212);
    if ( v10 == v12 )
      v11 = *(float *)(v3 + 1208);
    else
      v11 = fabs((double)rand() * 0.000030518509) * (v12 - v10) + v10;
    v4 = *(_DWORD *)(a1 + 452);
    v14 = *(_DWORD *)(v4 + 4284);
    *(_DWORD *)(v4 + 4284) = *(_DWORD *)(*(_DWORD *)(a1 + 412) + 1216);
    v5 = 1;
    v13 = 0.0;
    if ( v11 > 0.0 )
    {
      while ( sub_419910(*(_DWORD *)(a1 + 452), 0.0, 0.0, COERCE_FLOAT(1), 1, 0) )
      {
        v6 = v13 + *(float *)(*(_DWORD *)(a1 + 412) + 1192);
        v13 = v6;
        if ( v6 >= v11 )
          goto LABEL_12;
      }
      v5 = 0;
    }
LABEL_12:
    *(_DWORD *)(*(_DWORD *)(a1 + 452) + 4284) = v14;
    if ( !v5 || !sub_419910(*(_DWORD *)(a1 + 452), 0.0, 0.0, COERCE_FLOAT(1), 1, 0) )
    {
      sub_4164A0(*(_DWORD **)(a1 + 452), v2);
      return 0;
    }
    v8 = v11 + *(float *)(a1 + 456);
    *(_DWORD *)(a1 + 448) = 0;
    result = 1;
    *(float *)(a1 + 456) = v8;
  }
  else
  {
    if ( v1 != 2 )
      return 0;
    v9 = (_DWORD *)sub_417140(0);
    return sub_416350(*(_DWORD *)(a1 + 452), v9, 0);
  }
  return result;
}
