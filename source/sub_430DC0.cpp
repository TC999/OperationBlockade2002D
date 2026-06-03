//----- (00430DC0) --------------------------------------------------------
char __cdecl sub_430DC0(int self, int *a2, float a3, float a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // edi
  int i; // ebp
  int v10; // eax
  float v12; // [esp+0h] [ebp-44h]
  int v13; // [esp+18h] [ebp-2Ch] BYREF
  int v14; // [esp+1Ch] [ebp-28h]
  int v15; // [esp+20h] [ebp-24h]
  _WORD v16[4]; // [esp+24h] [ebp-20h] BYREF
  int v17; // [esp+2Ch] [ebp-18h]
  int v18; // [esp+30h] [ebp-14h]
  int v19; // [esp+34h] [ebp-10h]
  int v20; // [esp+38h] [ebp-Ch]
  float v21; // [esp+3Ch] [ebp-8h]
  char v22; // [esp+40h] [ebp-4h]

  v6 = a5;
  v7 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  for ( i = 0; i < 120; i += 24 )
  {
    v10 = *(_DWORD *)(self + 428);
    if ( *(_BYTE *)(v10 + i + 624) )
    {
      SLOBYTE(v10) = sub_407F00(*(_DWORD *)(self + 432), *(_DWORD *)(v10 + i + 628), a2, a3, &v13, (float *)&a5);
      if ( (_BYTE)v10 )
      {
        sub_4229D0("%s splashed on section %d", *(const char **)(*(_DWORD *)(self + 428) + 4), v7);
        if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
        {
          v16[3] = *(_WORD *)(self + 392);
          v19 = v14;
          v21 = *(float *)&a5 * a4;
          v18 = v13;
          v17 = v7;
          v20 = v15;
          v22 = v6;
          SLOBYTE(v10) = sub_4117D0(dword_4F5CC4, (_DWORD *)0x103, v16, 29, 2, 10000);
        }
        else
        {
          sub_4229D0("%s hit on section %d", *(const char **)(*(_DWORD *)(self + 428) + 4), v7);
          v12 = *(float *)&a5 * a4;
          SLOBYTE(v10) = sub_430F00(self, v7, (int)&v13, v12, v6);
        }
      }
    }
    ++v7;
  }
  return v10;
}
