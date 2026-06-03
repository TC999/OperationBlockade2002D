//----- (00448F70) --------------------------------------------------------
extern char aGravity[];
extern char aLife[];
extern char aDamage[];
extern char aSplashradius[];
extern char aArmorpiercing[];
extern char aDrag[];
extern char aTorpedoaccel[];
extern char aTorpedodepth[];
extern char aTorpedospeed[];
extern char aTraileffect[];
extern char aExplodeeffect[];
extern char aImpacts[];
extern char aCustomImpacts[];
extern char aRibbontexture[];
extern char aRibbonred[];
extern char aRibbongreen[];
extern char aRibbonblue[];
extern char aRibbonlength[];
extern char aRibbonrenderin[];
extern char aRibbonwidth[];
extern char aRibbonstartwid[];
extern char aRibbonendwidth[];
extern char aRibbonfacecame[];
extern char aRibbonfadeaten[];
extern char aRibbonuvscroll[];
extern char aSprite[];
extern char aModel[];
extern char aStrip[];
extern char aTexturefile[];
extern char aLength_0[];
extern char aWidth[];
extern char aModelfile[];
extern char aNodename[];
extern char aScale[];
extern char aRadius[];

int __cdecl sub_448F70(int a1, int a2, char *String1, char a4)
{
  char *v4; // edi
  int *v6; // ebp
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  int v13; // eax
  const char *v15; // [esp-Ch] [ebp-78h]
  const char *v16; // [esp-8h] [ebp-74h]
  char ArgList[4]; // [esp+10h] [ebp-5Ch] BYREF
  int v18; // [esp+14h] [ebp-58h] BYREF
  int v19[2]; // [esp+18h] [ebp-54h] BYREF
  int v20[16]; // [esp+20h] [ebp-4Ch] BYREF
  int v21; // [esp+68h] [ebp-4h]

  v4 = String1;
  v19[1] = a1;
  sub_468FF0((void *)a1, a2);
  v21 = 0;
  *(_DWORD *)a1 = (int)&off_499A24;
  sub_40AF60(v4, aGravity, (float *)(a1 + 292));
  sub_40AF60(v4, aLife, (float *)(a1 + 296));
  v6 = (int *)(a1 + 300);
  sub_40AF60(v4, aDamage, (float *)(a1 + 300));
  *(_DWORD *)(a1 + 308) = 0;
  if ( sub_40ABC0((int)v4, aSplashradius, 0) )
    sub_40AF60(v4, aSplashradius, (float *)(a1 + 308));
  if ( *(float *)(a1 + 308) > 0.0 )
  {
    v7 = *v6;
    *v6 = 0;
    *(_DWORD *)(a1 + 304) = v7;
  }
  *(_BYTE *)(a1 + 312) = 1;
  if ( sub_40ABC0((int)v4, aArmorpiercing, 0) )
    sub_40B130(v4, aArmorpiercing, (_BYTE *)(a1 + 312));
  *(_DWORD *)(a1 + 316) = 0;
  if ( sub_40ABC0((int)v4, aDrag, 0) )
    sub_40AF60(v4, aDrag, (float *)(a1 + 316));
  *(_BYTE *)(a1 + 320) = 0;
  if ( sub_40ABC0((int)v4, aTorpedoaccel, 0) )
  {
    *(_BYTE *)(a1 + 320) = 1;
    sub_40AF60(v4, aTorpedodepth, (float *)(a1 + 324));
    sub_40AF60(v4, aTorpedoaccel, (float *)(a1 + 328));
    sub_40AF60(v4, aTorpedospeed, (float *)(a1 + 332));
  }
  *(_DWORD *)(a1 + 336) = 0;
  if ( sub_40ABC0((int)v4, aTraileffect, 0) )
  {
    sub_40AFC0(v4, aTraileffect, (_DWORD*)&String1);
    sub_469160(a1 + 336, (_DWORD *)String1, aEffect, aEffect);
  }
  *(_DWORD *)(a1 + 340) = 0;
  if ( sub_40ABC0((int)v4, aExplodeeffect, 0) )
  {
    sub_40AFC0(v4, aExplodeeffect, (_DWORD*)&String1);
    sub_469160(a1 + 340, (_DWORD *)String1, aEffect, aEffect);
  }
  v8 = (_DWORD *)operator new(0x14Cu);
  v18 = (int)v8;
  *(_BYTE *)&v21 = 1;
  if ( v8 )
    v9 = sub_448C90(v8, (int)v4);
  else
    v9 = 0;
  *(_BYTE *)&v21 = 0;
  *(_DWORD *)(a1 + 344) = *(uint32*)(v9);
  v9[3] = (int)aImpacts;
  sub_469700(*(_DWORD **)(a1 + 344), 0, aCustomImpacts);
  sub_469160(a1 + 344, 0, 0, aEffect);
  *(_DWORD *)(a1 + 348) = 0;
  if ( sub_40ABC0((int)v4, aRibbontexture, 0) )
  {
    sub_40AFC0(v4, aRibbontexture, (_DWORD*)ArgList);
    v10 = sub_422400(*(_DWORD **)(dword_520970 + 124), *(char **)ArgList, 0);
    v16 = *(const char **)(a1 + 4);
    v15 = *(const char **)ArgList;
    *(_DWORD *)(a1 + 348) = v10;
    sub_40A120(v10 != 0, "failed to load texture %s, see %s : %s", v15, v16, v4 + 16);
    *(_DWORD *)(a1 + 352) = 255;
    if ( sub_40ABC0((int)v4, aRibbonred, 0) )
      sub_40AF00(v4, aRibbonred, (char **)(a1 + 352));
    *(_DWORD *)(a1 + 356) = 255;
    if ( sub_40ABC0((int)v4, aRibbongreen, 0) )
      sub_40AF00(v4, aRibbongreen, (char **)(a1 + 356));
    *(_DWORD *)(a1 + 360) = 255;
    if ( sub_40ABC0((int)v4, aRibbonblue, 0) )
      sub_40AF00(v4, aRibbonblue, (char **)(a1 + 360));
    *(_DWORD *)(a1 + 364) = 1065353216;
    if ( sub_40ABC0((int)v4, aRibbonlength, 0) )
      sub_40AF60(v4, aRibbonlength, (float *)(a1 + 364));
    *(float *)(a1 + 368) = *(float *)(a1 + 364) * 0.2f;
    if ( sub_40ABC0((int)v4, aRibbonrenderin, 0) )
      sub_40AF60(v4, aRibbonrenderin, (float *)(a1 + 368));
    if ( sub_40ABC0((int)v4, aRibbonwidth, 0) )
    {
      sub_40AF60(v4, aRibbonwidth, (float *)&v18);
      v11 = v18;
      *(_DWORD *)(a1 + 372) = v18;
      *(_DWORD *)(a1 + 376) = v11;
    }
    else
    {
      *(_DWORD *)(a1 + 372) = 1112014848;
      if ( sub_40ABC0((int)v4, aRibbonstartwid, 0) )
        sub_40AF60(v4, aRibbonstartwid, (float *)(a1 + 372));
      *(_DWORD *)(a1 + 376) = 1112014848;
      if ( sub_40ABC0((int)v4, aRibbonendwidth, 0) )
        sub_40AF60(v4, aRibbonendwidth, (float *)(a1 + 376));
    }
    *(_BYTE *)(a1 + 380) = 1;
    if ( sub_40ABC0((int)v4, aRibbonfacecame, 0) )
      sub_40B130(v4, aRibbonfacecame, (_BYTE *)(a1 + 380));
    *(_BYTE *)(a1 + 381) = 1;
    if ( sub_40ABC0((int)v4, aRibbonfadeaten, 0) )
      sub_40B130(v4, aRibbonfadeaten, (_BYTE *)(a1 + 381));
    *(_DWORD *)(a1 + 384) = 0;
    if ( sub_40ABC0((int)v4, aRibbonuvscroll, 0) )
      sub_40AF60(v4, aRibbonuvscroll, (float *)(a1 + 384));
  }
  if ( a4 )
  {
    sub_40AFC0(v4, String2, (_DWORD*)&String1);
    if ( _strcmpi(String1, aSprite) )
    {
      if ( _strcmpi(String1, aModel) )
      {
        if ( _strcmpi(String1, aStrip) )
        {
          sub_40A120(0, "invalid chunk type, see file %s", v4 + 16);
        }
        else
        {
          *(_DWORD *)(a1 + 388) = 2;
          sub_40AFC0(v4, aTexturefile, (_DWORD*)&String1);
          *(_DWORD *)(a1 + 392) = sub_422400(*(_DWORD **)(dword_520970 + 124), String1, 0);
          sub_40AF60(v4, aLength_0, (float *)(a1 + 412));
          sub_40AF60(v4, aWidth, (float *)(a1 + 416));
        }
      }
      else
      {
        *(_DWORD *)(a1 + 388) = 1;
        sub_40AFC0(v4, aModelfile, (_DWORD*)&String1);
        v12 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), String1);
        *(_DWORD *)(a1 + 400) = (int)v12;
        if ( !v12 )
          sub_40A120(0, "could not load model %s", String1);
        sub_40AFC0(v4, aNodename, (_DWORD*)&String1);
        v13 = sub_405A30(*(_DWORD **)(a1 + 400), String1, -1, 1);
        *(_DWORD *)(a1 + 404) = v13;
        if ( v13 == -1 )
          sub_40A120(0, "could not find nodeName %s, see %s : %s", String1, *(const char **)(a1 + 4), v4 + 16);
        sub_4063E0(*(_DWORD **)(a1 + 400), *(_DWORD *)(a1 + 404), v20, (float *)(a1 + 408), 0.0f, 0);
        if ( sub_40ABC0((int)v4, aScale, 0) )
        {
          sub_40AF60(v4, aScale, (float *)v19);
          *(float *)(a1 + 408) = *(float *)v19 * *(float *)(a1 + 408);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 388) = 0;
      sub_40AFC0(v4, aTexturefile, (_DWORD*)&String1);
      *(_DWORD *)(a1 + 392) = sub_422400(*(_DWORD **)(dword_520970 + 124), String1, 0);
      sub_40AF60(v4, aRadius, (float *)(a1 + 396));
    }
  }
  return a1;
}
