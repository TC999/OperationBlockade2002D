//----- (0044B870) --------------------------------------------------------
char *__cdecl sub_44B870(char *self, char *a2)
{
  char *v2; // esi
  double v4; // st7
  unsigned int v5; // edi
  unsigned int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // esi
  unsigned int v26; // edi
  unsigned int v27; // edx
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // edx
  double v32; // st7
  double v33; // st7
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // eax
  int v41; // edx
  unsigned int v43; // [esp+10h] [ebp-274h]
  unsigned int v44; // [esp+10h] [ebp-274h]
  int v45; // [esp+10h] [ebp-274h]
  unsigned int v46; // [esp+10h] [ebp-274h]
  char v47; // [esp+17h] [ebp-26Dh]
  int v48; // [esp+18h] [ebp-26Ch] BYREF
  float v49; // [esp+1Ch] [ebp-268h]
  int v50; // [esp+20h] [ebp-264h] BYREF
  unsigned int v51; // [esp+24h] [ebp-260h]
  int v52; // [esp+28h] [ebp-25Ch] BYREF
  __int64 v53; // [esp+2Ch] [ebp-258h]
  char *v54; // [esp+34h] [ebp-250h]
  char v55[24]; // [esp+38h] [ebp-24Ch] BYREF
  char v56[4]; // [esp+50h] [ebp-234h] BYREF
  int v57; // [esp+54h] [ebp-230h]
  int v58; // [esp+58h] [ebp-22Ch]
  int v59; // [esp+5Ch] [ebp-228h]
  char v60[268]; // [esp+60h] [ebp-224h] BYREF
  char v61[268]; // [esp+16Ch] [ebp-118h] BYREF
  int v62; // [esp+280h] [ebp-4h]

  v2 = a2;
  v54 = self;
  sub_468FF0(a2);
  v62 = 0;
  self[332] = v47;
  *((_DWORD *)self + 84) = 0;
  *((_DWORD *)self + 85) = 0;
  *((_DWORD *)self + 86) = 0;
  LOBYTE(v62) = 1;
  *(_DWORD *)self = &off_499A74;
  self[292] = 1;
  if ( sub_40ABC0(a2, aAlwaysloaded, 0) )
    sub_40B130(a2, aAlwaysloaded, self + 292);
  self[293] = 0;
  if ( sub_40ABC0(a2, aStreaming, 0) )
    sub_40B130(a2, aStreaming, self + 293);
  self[294] = 0;
  if ( sub_40ABC0(a2, aLooping, 0) )
    sub_40B130(a2, aLooping, self + 294);
  *((_DWORD *)self + 74) = 1050253722;
  if ( sub_40ABC0(a2, aFadepercent, 0) )
    sub_40AF60(a2, aFadepercent, (float *)self + 74);
  self[300] = 0;
  if ( sub_40ABC0(a2, aDontduplicate, 0) )
    sub_40B130(a2, aDontduplicate, self + 300);
  self[301] = 0;
  self[330] = 0;
  if ( sub_40ABC0(a2, aEngine, 0) )
    sub_40B130(a2, aEngine, self + 301);
  if ( self[301] )
  {
    *((_DWORD *)self + 78) = 1065353216;
    *((_DWORD *)self + 79) = 1065353216;
    *((_DWORD *)self + 80) = 1065353216;
    *((_DWORD *)self + 81) = 1065353216;
    self[294] = 1;
    self[330] = 1;
    *((_DWORD *)self + 76) = 0;
    *((_DWORD *)self + 77) = 0;
    if ( sub_40ABC0(a2, aEnginefade, 0) )
    {
      sub_40B1B0((char)aEnginefade, (int)&v48);
      v4 = v49;
      if ( *(float *)&v48 >= (double)v49 )
      {
        *((float *)self + 79) = *(float *)&v48;
        *((float *)self + 78) = v4;
      }
      else
      {
        *((float *)self + 76) = *(float *)&v48;
        *((float *)self + 77) = v4;
      }
    }
    if ( sub_40ABC0(a2, aEnginepitch, 0) )
      sub_40B1D0((char)aEnginepitch, (int)(self + 320), (int)(self + 324));
  }
  if ( sub_40ABC0(a2, aDoppler_0, 0) )
    sub_40B130(a2, aDoppler_0, self + 330);
  self[328] = 0;
  if ( sub_40ABC0(a2, aBomb, 0) )
    sub_40B130(a2, aBomb, self + 328);
  self[329] = self[294];
  if ( sub_40ABC0(a2, aDiewithpe, 0) )
    sub_40B130(a2, aDiewithpe, self + 329);
  if ( sub_40AE00(a2, aRange) <= 1 )
    v5 = 1;
  else
    v5 = sub_40AE00(a2, aRange);
  v6 = 0;
  v56[0] = v47;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v7 = *((_DWORD *)self + 84);
  LOBYTE(v62) = 2;
  if ( v7 )
    v6 = (*((_DWORD *)self + 85) - v7) / 40;
  if ( v6 >= v5 )
  {
    if ( v5 < sub_44E980(self + 332) )
      sub_44F0E0(*((_DWORD *)self + 84) + 40 * v5, *((_DWORD *)self + 85));
  }
  else
  {
    v48 = *((int *)self + 85);
    v8 = sub_44E980(self + 332);
    sub_44ED60(v48, v5 - v8, v55);
  }
  LOBYTE(v62) = 1;
  sub_44E9B0(v56);
  v9 = 0;
  v51 = 0;
  while ( 1 )
  {
    v10 = *((_DWORD *)self + 84);
    if ( !v10 || v51 >= (*((_DWORD *)self + 85) - v10) / 40 )
      break;
    *(_DWORD *)(v9 + *((_DWORD *)self + 84)) = 1133903872;
    *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 4) = 1189765120;
    if ( sub_40ABC0(v2, aRange, 0) )
      sub_40B1B0((char)aRange, *((_DWORD *)self + 84) + v9);
    *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 8) = 0;
    *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 12) = 1065353216;
    if ( sub_40ABC0(v2, aVolume_0, 0) )
      sub_40B1B0((char)aVolume_0, v9 + *((_DWORD *)self + 84) + 8);
    *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 16) = 1065353216;
    *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 20) = 1065353216;
    if ( sub_40ABC0(v2, aPitch, 0) )
      sub_40B1B0((char)aPitch, v9 + *((_DWORD *)self + 84) + 16);
    if ( sub_422BA0(AppName, aLoadsounds, 1) )
    {
      if ( !sub_40ACC0(v2, aSound, aRange) || !sub_40AD80(aSound) )
      {
        if ( sub_40ACC0(v2, aSound, aRange) )
        {
          do
          {
            sub_40AFC0(aSound, (int)&v50);
            v22 = *((_DWORD *)self + 84);
            v23 = v9 + v22 + 24;
            v24 = *(_DWORD *)(v9 + v22 + 28);
            if ( v24 )
              v45 = (*(_DWORD *)(v23 + 8) - v24) / 268;
            else
              v45 = 0;
            v25 = *(_DWORD *)(v23 + 4);
            v26 = v45 + 1;
            if ( v25 )
              v27 = (*(_DWORD *)(v23 + 8) - v25) / 268;
            else
              v27 = 0;
            if ( v27 >= v26 )
            {
              if ( v25 && v26 < (*(_DWORD *)(v23 + 8) - v25) / 268 )
                sub_44ED10(v25 + 268 * v26, *(_DWORD *)(v23 + 8));
            }
            else
            {
              if ( v25 )
                v28 = (*(_DWORD *)(v23 + 8) - v25) / 268;
              else
                v28 = 0;
              sub_44E9E0(*(_DWORD *)(v23 + 8), v26 - v28, v61);
            }
            *(_DWORD *)(*(_DWORD *)(v9 + *((_DWORD *)self + 84) + 28) + 268 * v45) = 0;
            v48 = *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 28) + 268 * v45 + 4;
            strcpy((char *)v48, (const char *)v50);
            *(_DWORD *)(*(_DWORD *)(v9 + *((_DWORD *)self + 84) + 28) + 268 * v45 + 264) = 0;
            v2 = a2;
          }
          while ( sub_40ACC0(a2, aSound, aRange) );
        }
        v29 = *((_DWORD *)self + 84);
        v30 = *(_DWORD *)(v9 + v29 + 28);
        if ( v30 )
          v31 = (*(_DWORD *)(v9 + v29 + 32) - v30) / 268;
        else
          v31 = 0;
        v53 = (unsigned int)v31;
        v32 = (double)(unsigned int)v31;
        if ( v32 == 0.0 )
          v33 = 0.0;
        else
          v33 = 1.0 / v32;
        v46 = 0;
        *(float *)&v48 = 0.0;
        while ( 1 )
        {
          v34 = *((_DWORD *)self + 84);
          v35 = *(_DWORD *)(v9 + v34 + 28);
          v36 = v9 + v34;
          if ( !v35 || v46 >= (*(_DWORD *)(v36 + 32) - v35) / 268 )
            break;
          v37 = v48;
          *(float *)(*(_DWORD *)(v36 + 28) + v48) = v33;
          ++v46;
          v48 = v37 + 268;
        }
        goto LABEL_93;
      }
      if ( sub_40ACC0(v2, aSound, aRange) )
      {
        do
        {
          sub_40B420(v2, aSound, (float *)&v52, (const char **)&v50);
          v11 = *((_DWORD *)self + 84);
          v12 = v9 + v11 + 24;
          v13 = *(_DWORD *)(v9 + v11 + 28);
          if ( v13 )
            v14 = (*(_DWORD *)(v12 + 8) - v13) / 268;
          else
            v14 = 0;
          v15 = *(_DWORD *)(v12 + 4);
          v43 = v14 + 1;
          if ( v15 )
            v16 = (*(_DWORD *)(v12 + 8) - v15) / 268;
          else
            v16 = 0;
          if ( v16 >= v43 )
          {
            if ( v43 < sub_44E910(v12) )
              sub_44ED10(*(_DWORD *)(v12 + 4) + 268 * v43, *(_DWORD *)(v12 + 8));
          }
          else
          {
            if ( v15 )
              v17 = (*(_DWORD *)(v12 + 8) - v15) / 268;
            else
              v17 = 0;
            sub_44E9E0(*(_DWORD *)(v12 + 8), v43 - v17, v60);
          }
          *(float *)(*(_DWORD *)(v9 + *((_DWORD *)self + 84) + 28) + 268 * v14) = *(float *)&v52 * 0.0099999998;
          v48 = *(_DWORD *)(v9 + *((_DWORD *)self + 84) + 28) + 268 * v14 + 4;
          strcpy((char *)v48, (const char *)v50);
          *(_DWORD *)(*(_DWORD *)(v9 + *((_DWORD *)self + 84) + 28) + 268 * v14 + 264) = 0;
          v2 = a2;
        }
        while ( sub_40ACC0(a2, aSound, aRange) );
      }
      v18 = 0;
      v19 = 0.0;
      v44 = 0;
      v20 = v9 + *((_DWORD *)self + 84);
      while ( 1 )
      {
        v48 = v18;
        v21 = *(_DWORD *)(v20 + 28);
        if ( !v21 || v44 >= (*(_DWORD *)(v20 + 32) - v21) / 268 )
          break;
        v19 = v19 + *(float *)(*(_DWORD *)(v20 + 28) + v48);
        v18 = v48 + 268;
        ++v44;
      }
      sub_40A120(v19 <= 1.0, aPercentsForThe, *((_DWORD *)self + 1), v2 + 16);
      v9 += 40;
      ++v51;
    }
    else
    {
LABEL_93:
      v9 += 40;
      ++v51;
    }
  }
  if ( self[301] )
  {
    v38 = *((_DWORD *)self + 84);
    if ( v38 )
      v39 = (*((_DWORD *)self + 85) - v38) / 40;
    else
      v39 = 0;
    v40 = *((_DWORD *)self + 84);
    if ( v40 )
      v41 = (*((_DWORD *)self + 85) - v40) / 40;
    else
      v41 = 0;
    sub_40A120(
      v41 == 1,
      "engine sounds must have only one set of sounds (you have %d sound ranges), see %s : %s",
      v39,
      *((const char **)self + 1),
      v2 + 16);
  }
  return self;
}
