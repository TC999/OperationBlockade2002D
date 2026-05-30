//----- (00468000) --------------------------------------------------------
int __cdecl sub_468000(int self)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  _BYTE *v5; // ebp
  int v6; // eax
  int v7; // edi
  void *v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edi
  void *v13; // edx
  int v14; // eax
  int v17; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  int v19; // [esp+10h] [ebp-14h]
  int v20; // [esp+10h] [ebp-14h]

  sub_403B10((_DWORD *)self);
  v2 = 0;
  *(_BYTE *)(self + 628) = 1;
  *(_DWORD *)(self + 616) = 0;
  *(_DWORD *)(self + 620) = 0;
  *(_DWORD *)(self + 624) = 0;
  *(_DWORD *)self = &off_499CD4;
  sub_403D90((char *)self, aIslandPf3);
  sub_403E30(self);
  *(_DWORD *)(self + 588) = sub_422400(*(_DWORD **)(dword_520970 + 124), aWater1Tga, 0);
  *(_DWORD *)(self + 592) = sub_422400(*(_DWORD **)(dword_520970 + 124), aWater2Tga, 0);
  *(_DWORD *)(self + 596) = sub_422400(*(_DWORD **)(dword_520970 + 124), aWater3Tga, 0);
  *(_DWORD *)(self + 600) = sub_422400(*(_DWORD **)(dword_520970 + 124), aWater4Tga, 0);
  v3 = *(_DWORD *)(self + 8);
  *(_DWORD *)(self + 604) = 0;
  *(_DWORD *)(self + 608) = 1;
  *(_DWORD *)(self + 612) = 0x40000000;
  v17 = 0;
  if ( v3 > 0 )
  {
    for ( i = 0; ; i += 172 )
    {
      v4 = v2 + *(_DWORD *)(self + 4);
      if ( *(_BYTE *)(v4 + 81) )
        break;
LABEL_15:
      v2 = i + 172;
      if ( ++v17 >= *(_DWORD *)(self + 8) )
        return self;
    }
    if ( !_strnicmp(*(const char **)(v4 + 8), aWave, strlen(aWave)) )
    {
      v5 = operator new(0x1Cu);
      v5[8] = 0;
      *((_DWORD *)v5 + 6) = 1065353216;
      *(_DWORD *)v5 = v4;
      *((_DWORD *)v5 + 1) = v17;
      *((float *)v5 + 3) = fabs((double)rand() * 0.000030518509) * 0.85000002 + 0.15000001;
      v19 = rand();
      *((_DWORD *)v5 + 5) = 0;
      *((float *)v5 + 4) = fabs((double)v19 * 0.000030518509) * 0.050000004 + 0.1;
      v6 = *(_DWORD *)(self + 624);
      v7 = *(_DWORD *)(self + 620) + 1;
      *(_DWORD *)(self + 620) = v7;
      if ( v7 <= v6 )
        goto LABEL_13;
      v8 = *(void **)(self + 616);
      v9 = v6 + 8;
      *(_DWORD *)(self + 624) = v9;
      v10 = sub_488DD7(v8, 4 * v9);
      if ( !v10 )
        goto LABEL_13;
    }
    else
    {
      if ( !*(_BYTE *)(v4 + 81) || _strnicmp(*(const char **)(v4 + 8), aFoam, strlen(aFoam)) )
        goto LABEL_15;
      v5 = operator new(0x1Cu);
      v5[8] = 1;
      *((_DWORD *)v5 + 6) = 1065353216;
      *(_DWORD *)v5 = v4;
      *((_DWORD *)v5 + 1) = v17;
      *((float *)v5 + 3) = fabs((double)rand() * 0.000030518509);
      v20 = rand();
      *((_DWORD *)v5 + 5) = 0;
      *((float *)v5 + 4) = fabs((double)v20 * 0.000030518509) * 0.0099999998 + 0.025;
      v11 = *(_DWORD *)(self + 624);
      v12 = *(_DWORD *)(self + 620) + 1;
      *(_DWORD *)(self + 620) = v12;
      if ( v12 <= v11 )
        goto LABEL_13;
      v13 = *(void **)(self + 616);
      v14 = v11 + 8;
      *(_DWORD *)(self + 624) = v14;
      v10 = sub_488DD7(v13, 4 * v14);
      if ( !v10 )
        goto LABEL_13;
    }
    *(_DWORD *)(self + 616) = v10;
    memset((void *)(v10 + 4 * *(_DWORD *)(self + 620)), 0, 4 * (*(_DWORD *)(self + 624) - *(_DWORD *)(self + 620)));
LABEL_13:
    *(_DWORD *)(*(_DWORD *)(self + 616) + 4 * *(_DWORD *)(self + 620) - 4) = v5;
    if ( v5 )
    {
      *(_BYTE *)(*(_DWORD *)v5 + 57) = 1;
      sub_4229D0("%s using %s", *(const char **)(v4 + 8), *(const char **)(*(_DWORD *)(v4 + 52) + 76));
    }
    goto LABEL_15;
  }
  return self;
}
