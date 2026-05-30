//----- (00447AA0) --------------------------------------------------------
void __cdecl sub_447AA0(_DWORD *self, float a2)
{
  int v3; // esi
  float v4; // eax
  int v5; // edi
  double v6; // st7
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ebp
  char v11; // bl
  char v12; // al
  char v13; // cl
  bool v14; // al
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  _DWORD *v22; // eax
  int v23; // eax
  const char *v24; // [esp-8h] [ebp-4Ch]
  const char *v25; // [esp-8h] [ebp-4Ch]
  const char *v26; // [esp-4h] [ebp-48h]
  const char *v27; // [esp-4h] [ebp-48h]
  unsigned __int8 v28; // [esp+10h] [ebp-34h]
  float v29[3]; // [esp+14h] [ebp-30h] BYREF
  _WORD v30[4]; // [esp+20h] [ebp-24h] BYREF
  int v31; // [esp+28h] [ebp-1Ch]
  int v32; // [esp+2Ch] [ebp-18h]
  int v33; // [esp+30h] [ebp-14h]
  int v34; // [esp+34h] [ebp-10h]
  int v35; // [esp+38h] [ebp-Ch]
  char v36; // [esp+3Ch] [ebp-8h]
  int v37; // [esp+3Dh] [ebp-7h]
  int v38; // [esp+48h] [ebp+4h]
  float v39; // [esp+48h] [ebp+4h]
  bool v40; // [esp+48h] [ebp+4h]

  v3 = *(_DWORD *)(LODWORD(a2) + 16);
  LODWORD(v4) = *(unsigned __int16 *)(LODWORD(a2) + 12) - 514;
  v5 = (int)self;
  switch ( *(_WORD *)(LODWORD(a2) + 12) )
  {
    case 0x202:
      if ( *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        v6 = (double)*(__int16 *)(v3 + 11);
        v38 = *(__int16 *)(v3 + 13);
        v7 = *(unsigned __int8 *)(v3 + 17);
        v28 = *(_BYTE *)(v3 + 10);
        v8 = self[111];
        v29[2] = 0.0;
        v9 = *(__int16 *)(v3 + 8);
        v29[0] = v6 * 2.5;
        v10 = *(__int16 *)(v3 + 15);
        v29[1] = (double)v38 * 2.5;
        v39 = (double)v7 * 0.0039215689;
        if ( v8 )
        {
          v11 = sub_417190(v8, v9, v29, v28);
          sub_415930(*(_DWORD *)(v5 + 444), v10, v39);
          if ( v11 )
            (*(void (__cdecl **)(int, int))(*(_DWORD *)v5 + 24))(v5, 1);
          v12 = *(_BYTE *)(v5 + 440);
          v13 = *(_BYTE *)(v3 + 18);
          if ( v12 != v13 && !v12 )
            sub_4440B0(v5, v13 == 2);
        }
      }
      break;
    case 0x203:
      if ( *(_BYTE *)(dword_4F5CC4 + 936) )
      {
        dword_5216E8 = *(_DWORD *)(LODWORD(a2) + 4);
        LOBYTE(v4) = *(_BYTE *)(v3 + 28);
        v14 = sub_443CD0((int)self, *(_DWORD *)(v3 + 8), v3 + 12, *(float *)(v3 + 24), v4);
        v40 = v14;
        if ( v14 )
        {
          v15 = sub_411B60(dword_4F5CC4, *(_DWORD *)(LODWORD(a2) + 4));
          if ( v15 )
          {
            v26 = *(const char **)(*(_DWORD *)(v5 + 408) + 4);
            v24 = (const char *)(v15 + 3);
            v16 = sub_436A90(*(_DWORD *)(dword_520970 + 224));
            sub_421190(v16, "%s sunk a %s", v24, v26);
          }
          sub_411BB0(dword_4F5CC4, *(_DWORD *)(LODWORD(a2) + 4));
          v14 = v40;
        }
        v17 = *(_DWORD *)(v3 + 8);
        v30[3] = *(_WORD *)(v5 + 1456);
        v18 = *(_DWORD *)(v3 + 12);
        v31 = v17;
        v19 = *(_DWORD *)(v3 + 16);
        v32 = v18;
        v20 = *(_DWORD *)(v3 + 20);
        v33 = v19;
        v21 = *(_DWORD *)(v3 + 24);
        v34 = v20;
        LOBYTE(v20) = *(_BYTE *)(v3 + 28);
        v35 = v21;
        v36 = v20;
        if ( v14 )
          v37 = *(_DWORD *)(LODWORD(a2) + 4);
        else
          v37 = 0;
        sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x204, v30, 33, 11, 0);
        dword_5216E8 = 0;
      }
      break;
    case 0x204:
      LOBYTE(self) = *(_BYTE *)(v3 + 28);
      sub_443CD0(v5, *(_DWORD *)(v3 + 8), v3 + 12, *(float *)(v3 + 24), *(float *)&self);
      if ( *(_DWORD *)(v3 + 29) )
      {
        v22 = sub_411B60(dword_4F5CC4, *(_DWORD *)(v3 + 29));
        if ( v22 )
        {
          v27 = *(const char **)(*(_DWORD *)(v5 + 408) + 4);
          v25 = (const char *)(v22 + 3);
          v23 = sub_436A90(*(_DWORD *)(dword_520970 + 224));
          sub_421190(v23, "%s sunk a %s", v25, v27);
        }
        sub_411BB0(dword_4F5CC4, *(_DWORD *)(v3 + 29));
      }
      break;
    case 0x205:
      sub_444030(self, 1);
      sub_4477F0(v5, 0);
      *(_DWORD *)(*(_DWORD *)(v5 + 412) + 36) = 1065353216;
      *(_BYTE *)(*(_DWORD *)(v5 + 412) + 48) = 0;
      break;
    default:
      return;
  }
}
