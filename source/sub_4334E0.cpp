//----- (004334E0) --------------------------------------------------------
extern char aSShotDownAS[];
void __cdecl sub_4334E0(int self, float a2)
{
  int v3; // esi
  int v5; // ecx
  int v6; // edx
  double v7; // st7
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  char v11; // bl
  char v12; // al
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  _DWORD *v20; // eax
  int v21; // eax
  char *v22; // [esp-Ch] [ebp-50h]
  char *v23; // [esp-Ch] [ebp-50h]
  unsigned __int8 v24; // [esp+10h] [ebp-34h]
  float v25[3]; // [esp+14h] [ebp-30h] BYREF
  _WORD v26[4]; // [esp+20h] [ebp-24h] BYREF
  int v27; // [esp+28h] [ebp-1Ch]
  int v28; // [esp+2Ch] [ebp-18h]
  int v29; // [esp+30h] [ebp-14h]
  int v30; // [esp+34h] [ebp-10h]
  int v31; // [esp+38h] [ebp-Ch]
  char v32; // [esp+3Ch] [ebp-8h]
  int v33; // [esp+3Dh] [ebp-7h]
  int v34; // [esp+48h] [ebp+4h]
  int v35; // [esp+48h] [ebp+4h]
  float v36; // [esp+48h] [ebp+4h]
  char v37; // [esp+48h] [ebp+4h]

  v3 = *(_DWORD *)(LODWORD(a2) + 16);
  switch ( *(_WORD *)(LODWORD(a2) + 12) )
  {
    case 0x102:
      if ( *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        v5 = *(_DWORD *)(self + 468);
        if ( v5 )
        {
          v34 = *(__int16 *)(v3 + 13);
          v6 = *(__int16 *)(v3 + 15);
          v25[0] = (double)*(__int16 *)(v3 + 11) + (double)*(__int16 *)(v3 + 11);
          v7 = (double)v34;
          v35 = v6;
          v24 = *(_BYTE *)(v3 + 10);
          v8 = *(unsigned __int8 *)(v3 + 19);
          v9 = *(__int16 *)(v3 + 8);
          v25[1] = v7 + v7;
          v10 = *(__int16 *)(v3 + 17);
          v25[2] = (double)v35 + (double)v35;
          v36 = (double)v8 * 0.0039215689;
          v11 = sub_417190(v5, v9, (_DWORD *)v25, v24);
          sub_415930(*(_DWORD *)(self + 468), v10, v36);
          if ( v11 )
          {
            sub_4317B0((_DWORD *)self, 0);
            (*(void (__cdecl **)(int, int))(*(_DWORD *)self + 24))(self, 1);
          }
        }
      }
      break;
    case 0x103:
      if ( *(_BYTE *)(dword_4F5CC4 + 936) )
      {
        dword_5216E8 = *(_DWORD *)(LODWORD(a2) + 4);
        v12 = sub_430F00(self, *(_DWORD *)(v3 + 8), v3 + 12, *(float *)(v3 + 24), *(_BYTE *)(v3 + 28));
        v37 = v12;
        if ( v12 )
        {
          v13 = sub_411B60(dword_4F5CC4, *(_DWORD *)(LODWORD(a2) + 4));
          if ( v13 )
          {
            v14 = sub_436A90(
                    *(_DWORD *)(dword_520970 + 224));
            sub_421190(v14, aSShotDownAS,
                    v13 + 3,
                    *(_DWORD *)(*(_DWORD *)(self + 428) + 4));
            sub_421190(v14, v22);
          }
          sub_411BB0(dword_4F5CC4, *(_DWORD *)(LODWORD(a2) + 4));
          v12 = v37;
        }
        v15 = *(_DWORD *)(v3 + 8);
        v26[3] = *(_WORD *)(self + 392);
        v16 = *(_DWORD *)(v3 + 12);
        v27 = v15;
        v17 = *(_DWORD *)(v3 + 16);
        v28 = v16;
        v18 = *(_DWORD *)(v3 + 20);
        v29 = v17;
        v19 = *(_DWORD *)(v3 + 24);
        v30 = v18;
        SLOBYTE(v18) = *(_BYTE *)(v3 + 28);
        v31 = v19;
        v32 = v18;
        if ( v12 )
          v33 = *(_DWORD *)(LODWORD(a2) + 4);
        else
          v33 = 0;
        sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x104, v26, 33, 11, 0);
        dword_5216E8 = 0;
      }
      break;
    case 0x104:
      sub_430F00(self, *(_DWORD *)(v3 + 8), v3 + 12, *(float *)(v3 + 24), *(_BYTE *)(v3 + 28));
      if ( *(_DWORD *)(v3 + 29) )
      {
        v20 = sub_411B60(dword_4F5CC4, *(_DWORD *)(v3 + 29));
        if ( v20 )
        {
          v21 = sub_436A90(
                  *(_DWORD *)(dword_520970 + 224));
          sub_421190(v21, aSShotDownAS,
                  v20 + 3,
                  *(_DWORD *)(*(_DWORD *)(self + 428) + 4));
          sub_421190(v21, v23);
        }
        sub_411BB0(dword_4F5CC4, *(_DWORD *)(v3 + 29));
      }
      break;
    case 0x105:
      if ( *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)self + 24))(self, 0);
        sub_4333C0(self, 0);
      }
      break;
    default:
      return;
  }
}
