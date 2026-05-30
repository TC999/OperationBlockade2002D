//----- (00437B70) --------------------------------------------------------
void __cdecl sub_437B70(_DWORD *self, float a2)
{
  int v3; // ecx
  int v4; // esi
  float *v5; // ebp
  double v6; // st7
  int v7; // eax
  double v9; // st7
  char v10; // c0
  double v11; // st7
  _DWORD *v12; // eax
  void *v13; // eax
  bool v14; // zf
  _DWORD *v15; // eax
  void *v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  float v19; // [esp+0h] [ebp-B0h]
  float v20; // [esp+0h] [ebp-B0h]
  float v21; // [esp+8h] [ebp-A8h]
  int v22; // [esp+8h] [ebp-A8h]
  int v23; // [esp+8h] [ebp-A8h]
  float v24; // [esp+1Ch] [ebp-94h]
  float v25; // [esp+1Ch] [ebp-94h]
  float v26; // [esp+1Ch] [ebp-94h]
  int *v27; // [esp+1Ch] [ebp-94h]
  float v28; // [esp+1Ch] [ebp-94h]
  int *v29; // [esp+1Ch] [ebp-94h]
  float v30; // [esp+20h] [ebp-90h]
  int v31; // [esp+20h] [ebp-90h]
  float v32; // [esp+20h] [ebp-90h]
  float v33; // [esp+20h] [ebp-90h]
  int v34; // [esp+20h] [ebp-90h]
  float v35; // [esp+20h] [ebp-90h]
  int v36; // [esp+24h] [ebp-8Ch]
  float v37; // [esp+28h] [ebp-88h]
  float v38; // [esp+2Ch] [ebp-84h]
  _DWORD v39[16]; // [esp+30h] [ebp-80h] BYREF
  _DWORD v40[16]; // [esp+70h] [ebp-40h] BYREF

  v3 = self[609];
  if ( v3 )
  {
    sub_41D0C0(v3, a2);
    v21 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(self[609], v21);
  }
  v4 = 0;
  v36 = 0;
  v5 = (float *)(self + 182);
  v38 = (sin(*(float *)(dword_520970 + 72)) + 1.0) * 0.5;
  do
  {
    v37 = *v5;
    if ( *(v5 - 1) <= 0.0 )
    {
      if ( v5[1] != 0.0 )
      {
        v25 = a2 / v5[1] + *v5;
        *v5 = v25;
        if ( v25 >= 1.0 )
          v6 = 1.0;
        else
          v6 = v25;
        *v5 = v6;
      }
    }
    else
    {
      v24 = *(v5 - 1) - a2;
      *(v5 - 1) = v24;
      *v5 = 0.0;
      if ( v24 >= 0.0 )
        *(v5 - 1) = v24;
      else
        *(v5 - 1) = 0.0;
    }
    v7 = *((_DWORD *)v5 - 2);
    switch ( v7 )
    {
      case 5:
        v9 = *v5;
        if ( v10 )
        {
          v11 = v9 * 10.0;
        }
        else
        {
          if ( v9 < 0.69999999 )
          {
LABEL_21:
            v11 = 1.0;
            goto LABEL_24;
          }
          if ( *v5 < 0.69999999 || *v5 > 1.0 )
            goto LABEL_23;
          v11 = 1.0 - (*v5 - 0.69999999) * 3.3333333;
        }
        if ( v11 >= 1.0 )
          goto LABEL_21;
        if ( v11 > 0.0 )
        {
LABEL_24:
          v30 = 1.0 - v11;
          sub_438430(v4, 1065353216, LODWORD(v30), LODWORD(v30));
          if ( *(_DWORD *)v5 == 1065353216 )
          {
            *((_DWORD *)v5 - 2) = 1;
            *v5 = 0.0;
            *(v5 - 1) = 0.0;
            v5[1] = 1.0;
          }
          break;
        }
LABEL_23:
        v11 = 0.0;
        goto LABEL_24;
      case 6:
        sub_438460(v4, *v5, 0.0, 0.0);
        v26 = 1.0 - *v5;
        sub_438430(v4, 1065353216, LODWORD(v26), LODWORD(v26));
        if ( *(_DWORD *)v5 == 1065353216 )
        {
          *((_DWORD *)v5 - 2) = 7;
          *v5 = 0.0;
          *(v5 - 1) = 0.0;
          v5[1] = 0.60000002;
          v27 = self + 604;
          v31 = 5;
          do
          {
            v12 = sub_413870(*(_DWORD **)(dword_520970 + 116), *v27);
            if ( v12 )
            {
              v13 = v12 + 29;
              memset(&v39[11], 0, 16);
              memset(&v39[6], 0, 16);
              memset(&v39[1], 0, 16);
              v39[15] = 1065353216;
              v39[10] = 1065353216;
              v39[5] = 1065353216;
              v39[0] = 1065353216;
              qmemcpy(v13, v39, 0x40u);
              *(float *)&v22 = *(v5 - 6) + 19.0;
              sub_40E880(v13, *((_DWORD *)v5 - 8), *((_DWORD *)v5 - 7), v22);
              v4 = v36;
            }
            v14 = v31 == 1;
            ++v27;
            --v31;
          }
          while ( !v14 );
          sub_41CF50(self[609]);
          sub_41CF00(self[609]);
          sub_41CD90(self[609]);
        }
        break;
      case 7:
        sub_438460(v4, 1.0, 0.0, *v5);
LABEL_35:
        sub_438430(v4, 1065353216, 0, 0);
        break;
      case 8:
        v19 = 1.0 - *v5;
        sub_438460(v4, v19, 0.0, 1.0);
        sub_438430(v4, 1065353216, 0, 0);
        if ( *(_DWORD *)v5 == 1065353216 )
        {
          *((_DWORD *)v5 - 2) = 3;
          *v5 = 0.0;
          *(v5 - 1) = 0.0;
          v5[1] = 1.0;
        }
        break;
      case 9:
        v28 = 1.0 - *v5;
        sub_438430(v4, 1065353216, LODWORD(v28), LODWORD(v28));
        if ( *(_DWORD *)v5 == 1065353216 )
        {
          *(v5 - 2) = 0.0;
          *v5 = 0.0;
          *(v5 - 1) = 0.0;
          v5[1] = 1.0;
        }
        break;
      case 2:
        sub_438460(v4, 0.0, 1.0, 0.0);
        sub_438430(v4, 1065353216, 1065353216, 1065353216);
        break;
      case 3:
        sub_438460(v4, 0.0, 0.0, 1.0);
        goto LABEL_35;
      case 4:
        sub_438460(v4, 1.0, 0.0, 1.0);
        v32 = (sin(v38 * 3.1415927) + 1.0) * 0.5;
        sub_438430(v4, 1065353216, LODWORD(v32), LODWORD(v32));
        if ( *(_DWORD *)v5 == 1065353216 )
        {
          *((_DWORD *)v5 - 2) = 10;
          *v5 = 0.0;
          *(v5 - 1) = 0.0;
          v5[1] = 1.0;
        }
        break;
      case 10:
        v33 = (1.0 - *v5) * ((sin(v38 * 3.1415927) + 1.0) * 0.5) + *v5;
        v20 = 1.0 - *v5;
        sub_438460(v4, v20, 0.0, 1.0);
        sub_438430(v4, 1065353216, LODWORD(v33), LODWORD(v33));
        if ( *(_DWORD *)v5 == 1065353216 )
        {
          *((_DWORD *)v5 - 2) = 11;
          *v5 = 0.0;
          *(v5 - 1) = 0.2;
          v5[1] = 1.0;
        }
        break;
      case 11:
        if ( *v5 == 0.0 )
          sub_438460(v4, 0.0, 0.0, 1.0);
        else
          sub_438460(v4, 0.0, *v5, 0.0);
        if ( v37 == 0.0 && *v5 > 0.0 )
        {
          v34 = 5;
          v29 = self + 604;
          do
          {
            v15 = sub_413870(*(_DWORD **)(dword_520970 + 116), *v29);
            if ( v15 )
            {
              v16 = v15 + 29;
              memset(&v40[11], 0, 16);
              memset(&v40[6], 0, 16);
              memset(&v40[1], 0, 16);
              v40[15] = 1065353216;
              v40[10] = 1065353216;
              v40[5] = 1065353216;
              v40[0] = 1065353216;
              qmemcpy(v16, v40, 0x40u);
              *(float *)&v23 = *(v5 - 6) + 19.0;
              sub_40E880(v16, *((_DWORD *)v5 - 8), *((_DWORD *)v5 - 7), v23);
              v4 = v36;
            }
            v14 = v34 == 1;
            ++v29;
            --v34;
          }
          while ( !v14 );
          sub_41CF50(self[609]);
          sub_41CF00(self[609]);
          sub_41CD90(self[609]);
        }
        if ( *(_DWORD *)v5 == 1065353216 && v37 < 1.0 )
        {
          v17 = *(_DWORD *)(self[148] + 396);
          if ( v17 + 1 < 12 )
          {
            v18 = &self[35 * v17 + 184];
            v18[31] = 13;
            v18[33] = 0;
            v18[32] = 0x40000000;
            v18[34] = 1065353216;
            sub_43A120(*(_DWORD *)(self[148] + 396) + 1);
            sub_4030B0(*(_DWORD **)(self[148] + 468), 0, aCommandertakeb_0, -1);
            sub_4030B0(*(_DWORD **)(self[148] + 468), 0, aCommanderprovi_0, *(_DWORD *)(self[148] + 396) + 1);
          }
          else
          {
            sub_438D00();
          }
        }
        break;
      case 13:
        v35 = *v5 * ((sin(v38 * 3.1415927) + 1.0) * 0.5);
        sub_438460(v4, *v5, 0.0, 1.0);
        sub_438430(v4, 1065353216, LODWORD(v35), LODWORD(v35));
        if ( *(_DWORD *)v5 == 1065353216 && v37 < 1.0 )
          *(_BYTE *)(self[148] + 432) = 1;
        break;
    }
    ++v4;
    v5 += 35;
    v36 = v4;
  }
  while ( v4 < 13 );
}
