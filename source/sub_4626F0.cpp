//----- (004626F0) --------------------------------------------------------
INT __usercall sub_4626F0(int a1, int a2)
{
  INT result; // eax
  FILE *v4; // esi
  int v5; // eax
  int v6; // eax
  CHAR *v7; // ecx
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  int i; // edi
  int *v12; // ebx
  char *v13; // eax
  int v14; // eax
  int v15; // [esp+8h] [ebp-10h]
  int v16; // [esp+8h] [ebp-10h]

  result = sub_422BA0(AppName, aWritemissionst, 0);
  if ( result == 1 )
  {
    v4 = fopen(aMissionTxt, aA);
    v5 = sub_45A870(*(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 72));
    sub_48B1FD(v4, (int)aMissionS, v5);
    v6 = *(_DWORD *)(dword_520970 + 280);
    v7 = (CHAR *)(v6 + 472);
    if ( !*(_BYTE *)(v6 + 472) )
    {
      v8 = *(_DWORD *)(v6 + 512);
      if ( v8 <= -1 )
        v7 = AppName;
      else
        v7 = (CHAR *)(352 * v8 + v6 + 899);
    }
    sub_48B1FD(v4, (int)aPlayerS, (int)v7);
    sub_48B1FD(v4, (int)aDifficultyD, *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) + 1);
    sub_48B1FD(v4, (int)asc_4A1F30, a2);
    sub_48B1FD(v4, (int)aHealthStarting, COERCE_UNSIGNED_INT64(*(float *)(a1 + 11604)));
    v9 = *(_DWORD *)(a1 + 512);
    if ( v9 >= 0 )
      v10 = *(float *)(352 * v9 + a1 + 924);
    else
      v10 = 0.0;
    sub_48B1FD(v4, (int)aHealthEnding02, SLODWORD(v10));
    sub_48B1FD(v4, (int)aHealthLow02f, COERCE_UNSIGNED_INT64(*(float *)(a1 + 11608)));
    sub_48B1FD(v4, (int)aHealthResuppli, COERCE_UNSIGNED_INT64(*(float *)(a1 + 11612)));
    sub_48B1FD(v4, (int)aHealthLost02f, COERCE_UNSIGNED_INT64(*(float *)(a1 + 11616)));
    sub_48B1FD(v4, (int)asc_4A1F30, v15);
    for ( i = 0; i < 10; ++i )
    {
      v12 = (int *)(16 * i + a1);
      if ( v12[2905] )
      {
        if ( i )
        {
          switch ( i )
          {
            case 1:
              v13 = a45cal;
              break;
            case 2:
              v13 = a50cal;
              break;
            case 3:
              v13 = a40mm;
              break;
            case 4:
              v13 = a105mm;
              break;
            case 5:
              v13 = a155mm;
              break;
            case 6:
              v13 = a203mm;
              break;
            case 7:
              v13 = aBazooka;
              break;
            case 8:
              v13 = aSuperbazooka;
              break;
            default:
              v13 = i != 9 ? 0 : aGrenade;
              break;
          }
        }
        else
        {
          v13 = a30cal;
        }
        sub_48B1FD(v4, (int)aAmmoNameS, (int)v13);
        sub_48B1FD(v4, (int)aAmmoStartingD, v12[2905]);
        v14 = sub_4629B0(i);
        sub_48B1FD(v4, (int)aAmmoEndingD, v14);
        sub_48B1FD(v4, (int)aAmmoLowD, v12[2906]);
        sub_48B1FD(v4, (int)aAmmoResupplied, v12[2907]);
        sub_48B1FD(v4, (int)aAmmoUsedD, *(_DWORD *)(16 * (i + 727) + a1));
        sub_48B1FD(v4, (int)asc_4A1F30, v16);
      }
    }
    sub_48B1FD(v4, (int)asc_4AE234, v16);
    return fclose(v4);
  }
  return result;
}
