//----- (00423600) --------------------------------------------------------
char __thiscall sub_423600(_DWORD *self)
{
  const char *v1; // eax
  char *v2; // ebp
  char *v3; // edi
  unsigned int v4; // kr08_4
  int v5; // eax
  char v6; // bl
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st7
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  double v17; // st7
  int v18; // eax
  double v19; // st7
  int v20; // edx
  double v21; // st7
  int v22; // eax
  double v23; // st7
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // ebx
  int v27; // edi
  void *v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // ecx
  double v34; // st7
  int v35; // eax
  int v36; // eax
  double v37; // st7
  int v38; // eax
  int v39; // eax
  int v40; // eax
  double v41; // st7
  int v42; // eax
  double v43; // st6
  _DWORD *v44; // esi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  _DWORD *v48; // ecx
  _DWORD *v49; // eax
  _DWORD *v50; // eax
  int v51; // eax
  int v52; // ecx
  void *v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // edi
  int v57; // ecx
  unsigned __int8 v59; // [esp-1Ch] [ebp-2CCh]
  unsigned __int8 v60; // [esp-18h] [ebp-2C8h]
  int v61; // [esp-18h] [ebp-2C8h]
  unsigned __int8 v62; // [esp-14h] [ebp-2C4h]
  int v63; // [esp-14h] [ebp-2C4h]
  int v64; // [esp-10h] [ebp-2C0h]
  int v65; // [esp-10h] [ebp-2C0h]
  char *String1; // [esp+4h] [ebp-2ACh] BYREF
  int v67; // [esp+8h] [ebp-2A8h]
  _DWORD *v68; // [esp+Ch] [ebp-2A4h]
  __int64 v69; // [esp+10h] [ebp-2A0h]
  int v70; // [esp+18h] [ebp-298h] BYREF
  int v71; // [esp+1Ch] [ebp-294h] BYREF
  int v72; // [esp+20h] [ebp-290h]
  int v73; // [esp+24h] [ebp-28Ch]
  int v74; // [esp+28h] [ebp-288h]
  int v75; // [esp+2Ch] [ebp-284h]
  int v76; // [esp+30h] [ebp-280h] BYREF
  int v77; // [esp+34h] [ebp-27Ch] BYREF
  int v78; // [esp+38h] [ebp-278h] BYREF
  int v79; // [esp+3Ch] [ebp-274h] BYREF
  int v80; // [esp+40h] [ebp-270h] BYREF
  int v81; // [esp+44h] [ebp-26Ch] BYREF
  int v82; // [esp+48h] [ebp-268h] BYREF
  int v83; // [esp+4Ch] [ebp-264h] BYREF
  int v84; // [esp+50h] [ebp-260h] BYREF
  int v85; // [esp+54h] [ebp-25Ch] BYREF
  int v86; // [esp+58h] [ebp-258h] BYREF
  int v87; // [esp+5Ch] [ebp-254h] BYREF
  int v88; // [esp+60h] [ebp-250h] BYREF
  int v89; // [esp+64h] [ebp-24Ch] BYREF
  float v90; // [esp+68h] [ebp-248h]
  int v91; // [esp+6Ch] [ebp-244h] BYREF
  int v92; // [esp+70h] [ebp-240h] BYREF
  int v93; // [esp+74h] [ebp-23Ch] BYREF
  float v94; // [esp+78h] [ebp-238h]
  int v95; // [esp+7Ch] [ebp-234h] BYREF
  _DWORD v96[72]; // [esp+80h] [ebp-230h] BYREF
  char Buffer[260]; // [esp+1A0h] [ebp-110h] BYREF
  int v98; // [esp+2ACh] [ebp-4h]

  v69 = (unsigned int)dword_5209F4;
  LODWORD(v69) = dword_5209D8;
  v1 = (const char *)self[5];
  v68 = self;
  v90 = ((double)(unsigned int)dword_5209F4 - 640.0) * 0.5;
  v94 = ((double)v69 - 480.0) * 0.5;
  sprintf(Buffer, "UI_%s.ini", v1);
  sub_40A1D0(v96, Buffer);
  v98 = 0;
  String1 = 0;
  if ( sub_40AAF0(v96, aControl, 0) )
  {
    while ( 1 )
    {
      sub_40AA40((int)v96, aControl);
      v2 = (char *)operator new(0xC0u);
      memset(v2, 0, 0xC0u);
      v2[45] = 1;
      v2[44] = 1;
      sub_40AFC0(aName, (int)&String1);
      v4 = strlen(String1) + 1;
      v3 = &String1[v4];
      qmemcpy(v2, String1, 4 * (v4 >> 2));
      qmemcpy(&v2[4 * (v4 >> 2)], &v3[4 * (v4 >> 2) - v4], v4 & 3);
      sub_40AFC0(aType, (int)&String1);
      if ( !_strcmpi(String1, aStatic) )
      {
        *((_DWORD *)v2 + 9) = 1;
        goto LABEL_14;
      }
      if ( !_strcmpi(String1, aButton) )
      {
        *((_DWORD *)v2 + 9) = 2;
        goto LABEL_14;
      }
      if ( !_strcmpi(String1, aEditbox) )
      {
        *((_DWORD *)v2 + 9) = 3;
        goto LABEL_14;
      }
      if ( !_strcmpi(String1, aCheckbox) )
      {
        *((_DWORD *)v2 + 9) = 4;
        goto LABEL_14;
      }
      if ( !_strcmpi(String1, aRadiobutton) )
      {
        *((_DWORD *)v2 + 9) = 5;
        goto LABEL_14;
      }
      if ( !_strcmpi(String1, aListbox) )
        break;
      sub_4229D0("UI: control %s has an invalid type '%s'", v2, String1);
      sub_4885A6(v2);
LABEL_115:
      if ( !sub_40AAF0(v96, aControl, 0) )
        goto LABEL_116;
    }
    *((_DWORD *)v2 + 9) = 6;
LABEL_14:
    if ( sub_40ABC0(v96, aEnabled, 0) )
      sub_40B130((const char *)v96, aEnabled, v2 + 45);
    if ( sub_40ABC0(v96, aVisible, 0) )
      sub_40B130((const char *)v96, aVisible, v2 + 44);
    v5 = *((_DWORD *)v2 + 9);
    if ( (v5 == 1 || v5 == 3) && sub_40ABC0(v96, aImage, 0) )
    {
      sub_40AFC0(aImage, (int)&String1);
      *((_DWORD *)v2 + 37) = sub_4242F0(String1);
    }
    if ( sub_40ABC0(v96, aHotkey, 0) )
    {
      sub_40AFC0(aHotkey, (int)&String1);
      v6 = 0;
      if ( *String1 )
      {
        if ( _strcmpi(String1, aSpace) )
        {
          if ( _strcmpi(String1, aEnter) )
          {
            if ( _strcmpi(String1, aEsc) )
            {
              if ( !String1[1] )
              {
                v6 = *String1;
                v7 = *String1;
                if ( isupper(v7) )
                  v6 = tolower(v7);
              }
            }
            else
            {
              v6 = 27;
            }
          }
          else
          {
            v6 = 13;
          }
        }
        else
        {
          v6 = 32;
        }
      }
      v2[180] = v6;
    }
    v73 = 255;
    v72 = 255;
    v74 = 255;
    v75 = 255;
    v2[46] = 0;
    if ( sub_40ABC0(v96, aColor, 0) )
    {
      sub_40AFC0(aColor, (int)&String1);
      if ( sscanf(String1, "%d,%d,%d,%d", &v82, &v93, &v80, &v95) == 4 )
      {
        v8 = v93;
        v9 = v80;
        v73 = v82;
        v10 = v95;
        v2[46] = 1;
        v72 = v8;
        v74 = v9;
        v75 = v10;
      }
    }
    v11 = *((_DWORD *)v2 + 9);
    if ( v11 == 2 || v11 == 4 || v11 == 5 )
    {
      if ( sub_40ABC0(v96, aNormal, 0) )
      {
        sub_40AFC0(aNormal, (int)&String1);
        *((_DWORD *)v2 + 37) = sub_4242F0(String1);
      }
      if ( sub_40ABC0(v96, aPush, 0) )
      {
        sub_40AFC0(aPush, (int)&String1);
        *((_DWORD *)v2 + 38) = sub_4242F0(String1);
      }
      if ( sub_40ABC0(v96, aLit, 0) )
      {
        sub_40AFC0(aLit, (int)&String1);
        *((_DWORD *)v2 + 39) = sub_4242F0(String1);
      }
    }
    *((_DWORD *)v2 + 13) = 0;
    *((_DWORD *)v2 + 12) = 0;
    if ( sub_40ABC0(v96, aPos, 0) )
    {
      sub_40B1F0((const char *)v96, aPos, (float *)&v78, (float *)&v84);
      v12 = *(float *)&v84;
      *((_DWORD *)v2 + 12) = (__int64)((double)(int)(__int64)*(float *)&v78 + v90);
      v67 = (__int64)v12;
      *((_DWORD *)v2 + 13) = (__int64)((double)v67 + v94);
    }
    *((_DWORD *)v2 + 15) = 0;
    *((_DWORD *)v2 + 14) = 0;
    if ( sub_40ABC0(v96, aSize, 0) )
    {
      sub_40B1F0((const char *)v96, aSize, (float *)&v86, (float *)&v92);
      v13 = *(float *)&v92;
      *((_DWORD *)v2 + 14) = (__int64)(double)(int)(__int64)*(float *)&v86;
      v67 = (__int64)v13;
      v14 = (__int64)(double)v67;
    }
    else
    {
      v15 = *((_DWORD *)v2 + 37);
      if ( !v15 )
        goto LABEL_53;
      *((_DWORD *)v2 + 14) = *(_DWORD *)(v15 + 308);
      LODWORD(v14) = *(_DWORD *)(v15 + 312);
    }
    *((_DWORD *)v2 + 15) = v14;
LABEL_53:
    *((_DWORD *)v2 + 16) = 0;
    if ( sub_40ABC0(v96, aZ, 0) )
      sub_40AF60((const char *)v96, aZ, (float *)v2 + 16);
    v16 = *((_DWORD *)v2 + 13);
    *((_DWORD *)v2 + 17) = *((_DWORD *)v2 + 12);
    *((_DWORD *)v2 + 18) = v16;
    if ( sub_40ABC0(v96, aBoundpos, 0) )
    {
      sub_40B1F0((const char *)v96, aBoundpos, (float *)&v88, (float *)&v79);
      v67 = (__int64)*(float *)&v88;
      v17 = *(float *)&v79;
      *((_DWORD *)v2 + 17) = (__int64)((double)v67 + (double)*((int *)v2 + 12));
      v67 = (__int64)v17;
      *((_DWORD *)v2 + 18) = (__int64)((double)v67 + (double)*((int *)v2 + 13));
    }
    v18 = *((_DWORD *)v2 + 15);
    *((_DWORD *)v2 + 19) = *((_DWORD *)v2 + 14);
    *((_DWORD *)v2 + 20) = v18;
    if ( sub_40ABC0(v96, aBoundsize, 0) )
    {
      sub_40B1F0((const char *)v96, aBoundsize, (float *)&v81, (float *)&v83);
      v19 = *(float *)&v83;
      *((_DWORD *)v2 + 19) = (__int64)(double)(int)(__int64)*(float *)&v81;
      v67 = (__int64)v19;
      *((_DWORD *)v2 + 20) = (__int64)(double)v67;
    }
    if ( sub_40ABC0(v96, aTextcentered, 0) )
      sub_40B130((const char *)v96, aTextcentered, v2 + 104);
    v20 = *((_DWORD *)v2 + 13);
    *((_DWORD *)v2 + 21) = *((_DWORD *)v2 + 12);
    *((_DWORD *)v2 + 22) = v20;
    if ( sub_40ABC0(v96, aTextpos, 0) )
    {
      sub_40B1F0((const char *)v96, aTextpos, (float *)&v85, (float *)&v87);
      v67 = (__int64)*(float *)&v85;
      v21 = *(float *)&v87;
      *((_DWORD *)v2 + 21) = (__int64)((double)v67 + (double)*((int *)v2 + 12));
      v67 = (__int64)v21;
      *((_DWORD *)v2 + 22) = (__int64)((double)v67 + (double)*((int *)v2 + 13));
    }
    v22 = *((_DWORD *)v2 + 15);
    *((_DWORD *)v2 + 23) = *((_DWORD *)v2 + 14);
    *((_DWORD *)v2 + 24) = v22;
    if ( sub_40ABC0(v96, aTextsize, 0) )
    {
      sub_40B1F0((const char *)v96, aTextsize, (float *)&v89, (float *)&v91);
      v23 = *(float *)&v91;
      *((_DWORD *)v2 + 23) = (__int64)(double)(int)(__int64)*(float *)&v89;
      v67 = (__int64)v23;
      *((_DWORD *)v2 + 24) = (__int64)(double)v67;
    }
    *((_DWORD *)v2 + 25) = 0;
    if ( sub_40ABC0(v96, aTextz, 0) )
      sub_40AF60((const char *)v96, aTextz, (float *)v2 + 25);
    if ( *((_DWORD *)v2 + 9) == 3 )
    {
      if ( sub_40ABC0(v96, aEditmaxchars, 0) )
        sub_40AF00((const char *)v96, aEditmaxchars, (char **)v2 + 35);
      if ( sub_40ABC0(v96, aEditrestricted, 0) )
        sub_40B130((const char *)v96, aEditrestricted, v2 + 144);
    }
    v24 = v2 + 108;
    if ( *((_DWORD *)v2 + 9) == 6 )
    {
      *v24 = 4;
      if ( sub_40ABC0(v96, aTextfont, 0) )
        sub_40AF00((const char *)v96, aTextfont, (char **)v2 + 27);
      v25 = sub_421B20(*((_DWORD *)v2 + 27));
      v26 = v25 - 2;
      if ( v25 == 2 )
      {
        v27 = 1;
      }
      else
      {
        v27 = *((_DWORD *)v2 + 24) / v26;
        if ( v27 <= 0 )
          goto LABEL_95;
      }
      v28 = operator new(4 * v27);
      v29 = *((_DWORD *)v2 + 21);
      *((_DWORD *)v2 + 29) = v28;
      v30 = *((_DWORD *)v2 + 22);
      v31 = 0;
      *((_DWORD *)v2 + 30) = v27;
      v67 = v30;
      *(float *)&v69 = (float)v29;
      do
      {
        v32 = sub_409AD0(*((_DWORD *)v2 + 27), 64);
        v33 = v69;
        v34 = (double)v67;
        *(_DWORD *)(*((_DWORD *)v2 + 29) + 4 * v31) = v32;
        v35 = *(_DWORD *)(*((_DWORD *)v2 + 29) + 4 * v31);
        *(float *)(v35 + 16) = v34;
        *(_DWORD *)(v35 + 12) = v33;
        *(_BYTE *)(v35 + 32) = 0;
        v36 = *(_DWORD *)(*((_DWORD *)v2 + 29) + 4 * v31);
        v37 = *((float *)v2 + 25) + 1000.0;
        ++v31;
        v67 += v26;
        *(float *)(v36 + 20) = v37;
      }
      while ( v31 < v27 );
    }
    else
    {
      *v24 = 3;
      if ( sub_40ABC0(v96, aTextfont, 0) )
        sub_40AF00((const char *)v96, aTextfont, (char **)v2 + 27);
      if ( sub_40ABC0(v96, aText, 0) )
      {
        v38 = *((_DWORD *)v2 + 9);
        v76 = 255;
        v71 = 186;
        v77 = 0;
        v70 = 255;
        if ( v38 == 2 )
          v70 = 191;
        if ( sub_40ABC0(v96, aTextcolor, 0) )
        {
          sub_40AFC0(aTextcolor, (int)&String1);
          sscanf(String1, "%d,%d,%d,%d", &v76, &v71, &v77, &v70);
        }
        sub_40AFC0(aText, (int)&String1);
        v39 = sub_409AD0(*v24, 64);
        v64 = v70;
        v62 = v77;
        v60 = v71;
        v59 = v76;
        *((_DWORD *)v2 + 28) = v39;
        sub_421300(v39, v59, v60, v62, v64);
        v40 = *((_DWORD *)v2 + 28);
        if ( *((_DWORD *)v2 + 9) == 2 )
        {
          *(_BYTE *)(v40 + 35) = 0;
        }
        else
        {
          *(_BYTE *)(v40 + 35) = 1;
          sub_421370(*((_DWORD **)v2 + 28), 0, 0, 0, 255);
        }
        sub_421110(*((LPVOID **)v2 + 28), String1);
        if ( v2[104] )
        {
          v42 = *((_DWORD *)v2 + 28);
          v41 = (double)*((int *)v2 + 24) * 0.5 + (double)*((int *)v2 + 22);
          v43 = (double)*((int *)v2 + 23) * 0.5 + (double)*((int *)v2 + 21);
          *(_BYTE *)(v42 + 32) = 1;
          *(float *)(v42 + 12) = v43;
        }
        else
        {
          v41 = (double)*((int *)v2 + 22);
          v42 = *((_DWORD *)v2 + 28);
          *(float *)(v42 + 12) = (float)*((int *)v2 + 21);
          *(_BYTE *)(v42 + 32) = 0;
        }
        *(float *)(v42 + 16) = v41;
        *(float *)(*((_DWORD *)v2 + 28) + 20) = *((float *)v2 + 25) + 1000.0;
      }
    }
LABEL_95:
    if ( sub_40ABC0(v96, aSlave1, 0) )
    {
      sub_40AFC0(aSlave1, (int)&String1);
      v44 = v68;
      v45 = sub_424350(String1);
      *((_DWORD *)v2 + 46) = v45;
      if ( v45 )
        *(_BYTE *)(v45 + 45) = 0;
    }
    else
    {
      v44 = v68;
    }
    if ( sub_40ABC0(v96, aSlave2, 0) )
    {
      sub_40AFC0(aSlave2, (int)&String1);
      v46 = sub_424350(String1);
      *((_DWORD *)v2 + 47) = v46;
      if ( v46 )
        *(_BYTE *)(v46 + 45) = 0;
    }
    v47 = 0;
    v48 = v2 + 148;
    while ( !*v48 )
    {
      ++v47;
      ++v48;
      if ( v47 >= 6 )
      {
        if ( !v2[46] )
          goto LABEL_110;
        break;
      }
    }
    v49 = operator new(0x80u);
    LODWORD(v69) = v49;
    LOBYTE(v98) = 1;
    if ( v49 )
      v50 = sub_412AB0(v49);
    else
      v50 = 0;
    v65 = v74;
    v63 = v72;
    v61 = v73;
    LOBYTE(v98) = 0;
    *((_DWORD *)v2 + 44) = v50;
    sub_413160(v61, v63, v65);
    sub_413180(*((_DWORD *)v2 + 44), v75, 1);
    sub_428680(*((_DWORD *)v2 + 44));
LABEL_110:
    v51 = v44[8];
    v52 = v44[7] + 1;
    v44[7] = v52;
    if ( v52 > v51 )
    {
      v53 = (void *)v44[6];
      v54 = v51 + 8;
      v44[8] = v54;
      v55 = sub_488DD7(v53, 4 * v54);
      if ( v55 )
      {
        v56 = v44[7];
        v57 = v44[8] - v56;
        v44[6] = v55;
        memset((void *)(v55 + 4 * v56), 0, 4 * v57);
      }
    }
    *(_DWORD *)(v44[6] + 4 * v44[7] - 4) = v2;
    goto LABEL_115;
  }
LABEL_116:
  v98 = -1;
  sub_40A830((int)v96);
  return 1;
}
