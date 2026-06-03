//----- (00421B70) --------------------------------------------------------
int __cdecl sub_421B70(_DWORD *self, int a2)
{
  float *v2; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  char *v7; // ebx
  double X; // st7
  int v9; // edi
  int v10; // eax
  char v11; // al
  float v14; // [esp+24h] [ebp-3Ch]
  float v15; // [esp+28h] [ebp-38h]
  float v16; // [esp+44h] [ebp-1Ch]
  float v17; // [esp+48h] [ebp-18h]
  float v18; // [esp+48h] [ebp-18h]
  int v19; // [esp+48h] [ebp-18h]
  float v20; // [esp+4Ch] [ebp-14h]
  int v21; // [esp+50h] [ebp-10h]
  float v22; // [esp+54h] [ebp-Ch]
  int v23; // [esp+5Ch] [ebp-4h]

  v2 = *(float **)(a2 + 40);
  v4 = 0;
  v23 = 0;
  if ( v2 )
  {
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 324);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)ArgList + 332))(
      *(_DWORD *)ArgList,
      0,
      self[13],
      28);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, self[14], 0);
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 260);
    if ( v5 )
    {
      sub_41BEF0((_DWORD *)dword_520A50, 0, v5, 0, 1);
      sub_41BEF0((_DWORD *)dword_520A50, 1, 0, -1, -1);
      sub_41BC00((_DWORD *)dword_520A50, 1, 1, 1, 1, 1, -1, 0);
    }
    if ( *((_BYTE *)v2 + 32) )
    {
      v20 = v2[3] - v2[6] * 0.5;
      v22 = v2[4] - v2[7] * 0.5;
    }
    else
    {
      v20 = v2[3];
      v22 = v2[4];
    }
    v6 = 0;
    v21 = 0;
    do
    {
      if ( *((_BYTE *)v2 + 35) || v6 )
      {
        v7 = (char *)*((_DWORD *)v2 + 2);
        X = v20;
        v16 = v22;
        if ( !v6 )
        {
          X = (double)*((int *)v2 + 9) + v20;
          v16 = (double)*((int *)v2 + 10) + v22;
        }
        if ( *v7 )
        {
          do
          {
            v17 = floor(X);
            v16 = floor(v16);
            v9 = (int)sub_421DB0(*(_DWORD *)v2, *v7);
            if ( v9 )
            {
              if ( v21 )
                v10 = *((_DWORD *)v2 + 13);
              else
                v10 = *((_DWORD *)v2 + 14);
              v15 = (double)*((int *)v2 + 10) + v16;
              v14 = (double)*((int *)v2 + 9) + v17;
              sub_421E30((_DWORD **)v2, v14, v15, 0.5f, v10, (float *)v9);
              v11 = v7[1];
              X = v17 + *(float *)(v9 + 20) - 2.0;
              v23 += 2;
              if ( v11 )
              {
                v18 = X;
                X = sub_421DE0(*(_DWORD *)v2, *v7, v11) + v18;
              }
            }
            else if ( *v7 == 10 )
            {
              if ( v21 )
                v19 = 0;
              else
                v19 = *((_DWORD *)v2 + 9);
              X = (double)v19 + v20;
              v16 = (double)*(int *)(*(_DWORD *)v2 + 272) + v16;
            }
            else
            {
              X = v17;
            }
          }
          while ( *++v7 );
          v4 = v23;
          v6 = v21;
        }
      }
      v21 = ++v6;
    }
    while ( v6 < 2 );
  }
  return v4;
}
