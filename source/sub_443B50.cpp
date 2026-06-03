//----- (00443B50) --------------------------------------------------------
unsigned int __cdecl sub_443B50(int self, int *a2, float a3, float a4, float a5, int a6)
{
  float v6; // ebx
  int v8; // ebp
  unsigned int result; // eax
  int v10; // edx
  signed int v11; // ecx
  int v12; // esi
  char v13; // al
  float v14; // [esp+0h] [ebp-48h]
  char v15; // [esp+1Bh] [ebp-2Dh]
  int v16; // [esp+1Ch] [ebp-2Ch] BYREF
  int v17; // [esp+20h] [ebp-28h]
  int v18; // [esp+24h] [ebp-24h]
  _WORD v19[4]; // [esp+28h] [ebp-20h] BYREF
  int v20; // [esp+30h] [ebp-18h]
  int v21; // [esp+34h] [ebp-14h]
  int v22; // [esp+38h] [ebp-10h]
  int v23; // [esp+3Ch] [ebp-Ch]
  float v24; // [esp+40h] [ebp-8h]
  char v25; // [esp+44h] [ebp-4h]

  v6 = a5;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  v8 = -2;
  while ( 1 )
  {
    result = *(_DWORD *)(self + 1432);
    if ( result )
    {
      v11 = *(_DWORD *)(self + 1436) - result;
      result = (unsigned int)((unsigned __int64)(1278501893LL * v11) >> 32) >> 31;
      v10 = v11 / 860;
    }
    else
    {
      v10 = 0;
    }
    if ( v8 >= v10 )
      return result;
    if ( v8 == -2 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(self + 408) + 612);
    }
    else if ( v8 == -1 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(self + 408) + 616);
    }
    else
    {
      v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v8) + 52);
    }
    if ( v12 > -1 && sub_407F00(*(_DWORD *)(self + 412), v12, a2, a3, &v16, &a5) )
    {
      if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
      {
        v14 = a5 * a4;
        if ( (unsigned __int8)sub_443CD0(v12, (int)&v16, (int)v14, v6, 0) || (v13 = v15, v15 = 0, v13) )
          v15 = 1;
        goto LABEL_19;
      }
      v19[3] = *(_WORD *)(self + 1456);
      v22 = v17;
      v24 = a5 * a4;
      v21 = v16;
      v20 = v12;
      v23 = v18;
      v25 = (_BYTE)v6;
      sub_4117D0(dword_4F5CC4, (_DWORD *)0x203, v19, 29, 2, 2000);
      ++v8;
    }
    else
    {
LABEL_19:
      ++v8;
    }
  }
}
