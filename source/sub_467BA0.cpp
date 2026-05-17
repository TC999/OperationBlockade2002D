//----- (00467BA0) --------------------------------------------------------
void __thiscall sub_467BA0(int this, float a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // edx
  char v6; // al
  float v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  char v12; // al
  float v13; // ecx
  bool v14; // bl
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  double v23; // st7
  unsigned __int8 v24; // dl
  int v25; // edx
  int v26; // ebp
  char v27; // bl
  const char *v28; // [esp-8h] [ebp-64h]
  const char *v29; // [esp-8h] [ebp-64h]
  const char *v30; // [esp-4h] [ebp-60h]
  const char *v31; // [esp-4h] [ebp-60h]
  unsigned __int8 v32; // [esp+10h] [ebp-4Ch]
  _DWORD v33[3]; // [esp+14h] [ebp-48h] BYREF
  _DWORD v34[3]; // [esp+20h] [ebp-3Ch] BYREF
  float v35[3]; // [esp+2Ch] [ebp-30h] BYREF
  _WORD v36[4]; // [esp+38h] [ebp-24h] BYREF
  int v37; // [esp+40h] [ebp-1Ch]
  int v38; // [esp+44h] [ebp-18h]
  int v39; // [esp+48h] [ebp-14h]
  int v40; // [esp+4Ch] [ebp-10h]
  int v41; // [esp+50h] [ebp-Ch]
  char v42; // [esp+54h] [ebp-8h]
  int v43; // [esp+55h] [ebp-7h]
  int v44; // [esp+60h] [ebp+4h]
  int v45; // [esp+60h] [ebp+4h]
  float v46; // [esp+60h] [ebp+4h]

  v3 = *(_DWORD *)(LODWORD(a2) + 16);
  switch ( *(_WORD *)(LODWORD(a2) + 12) )
  {
    case 0x802:
      if ( *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        v22 = *(_DWORD *)(this + 452);
        if ( v22 )
        {
          v44 = *(__int16 *)(v3 + 13);
          v35[0] = (float)*(__int16 *)(v3 + 11);
          v23 = (double)v44;
          v45 = *(__int16 *)(v3 + 15);
          v24 = *(_BYTE *)(v3 + 10);
          v35[1] = v23;
          v32 = v24;
          v25 = *(unsigned __int8 *)(v3 + 19);
          v35[2] = (float)v45;
          v26 = *(__int16 *)(v3 + 17);
          v46 = (double)v25 * 0.0039215689;
          v27 = sub_417190(v22, *(__int16 *)(v3 + 8), v35, v32);
          sub_415930(*(_DWORD *)(this + 452), v26, v46);
          if ( v27 )
            *(_BYTE *)(this + 436) = 1;
        }
      }
      break;
    case 0x803:
      if ( *(_BYTE *)(dword_4F5CC4 + 936) )
      {
        dword_5216E8 = *(_DWORD *)(LODWORD(a2) + 4);
        v10 = *(_DWORD *)(v3 + 16);
        v11 = *(_DWORD *)(v3 + 20);
        v34[0] = *(_DWORD *)(v3 + 12);
        v12 = *(_BYTE *)(v3 + 28);
        v34[1] = v10;
        v13 = *(float *)(v3 + 24);
        v34[2] = v11;
        v14 = sub_4666E0((char *)this, *(_DWORD *)(v3 + 8), (int)v34, v13, v12);
        if ( v14 )
        {
          v15 = sub_411B60(dword_4F5CC4, *(_DWORD *)(LODWORD(a2) + 4));
          if ( v15 )
          {
            v31 = *(const char **)(*(_DWORD *)(this + 412) + 4);
            v29 = (const char *)(v15 + 3);
            v16 = sub_436A90(*(_DWORD *)(dword_520970 + 224));
            sub_421190(v16, "%s destroyed a %s", v29, v31);
          }
          sub_411BB0(dword_4F5CC4, *(_DWORD *)(LODWORD(a2) + 4));
        }
        v17 = *(_DWORD *)(v3 + 12);
        v18 = *(_DWORD *)(v3 + 16);
        v36[3] = *(_WORD *)(this + 392);
        v19 = *(_DWORD *)(v3 + 20);
        v38 = v17;
        v20 = *(_DWORD *)(v3 + 24);
        v39 = v18;
        LOBYTE(v18) = *(_BYTE *)(v3 + 28);
        v40 = v19;
        v21 = *(_DWORD *)(v3 + 8);
        v41 = v20;
        v42 = v18;
        v37 = v21;
        if ( v14 )
          v43 = *(_DWORD *)(LODWORD(a2) + 4);
        else
          v43 = 0;
        sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x804, v36, 33, 11, 10000);
        dword_5216E8 = 0;
      }
      break;
    case 0x804:
      v4 = *(_DWORD *)(v3 + 16);
      v5 = *(_DWORD *)(v3 + 20);
      v33[0] = *(_DWORD *)(v3 + 12);
      v6 = *(_BYTE *)(v3 + 28);
      v33[1] = v4;
      v7 = *(float *)(v3 + 24);
      v33[2] = v5;
      sub_4666E0((char *)this, *(_DWORD *)(v3 + 8), (int)v33, v7, v6);
      if ( *(_DWORD *)(v3 + 29) )
      {
        v8 = sub_411B60(dword_4F5CC4, *(_DWORD *)(v3 + 29));
        if ( v8 )
        {
          v30 = *(const char **)(*(_DWORD *)(this + 412) + 4);
          v28 = (const char *)(v8 + 3);
          v9 = sub_436A90(*(_DWORD *)(dword_520970 + 224));
          sub_421190(v9, "%s destroyed a %s", v28, v30);
        }
        sub_411BB0(dword_4F5CC4, *(_DWORD *)(v3 + 29));
      }
      break;
  }
}
