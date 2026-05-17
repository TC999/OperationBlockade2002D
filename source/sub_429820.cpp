//----- (00429820) --------------------------------------------------------
unsigned int __cdecl sub_429820(char *a1, char *a2)
{
  char *v2; // ebx
  char *v3; // ebp
  unsigned int result; // eax
  int v5; // edx
  _BYTE *v6; // esi
  char *v7; // edi
  char *v8; // edi
  char *v9; // esi
  _BYTE v10[272]; // [esp+8h] [ebp-660h] BYREF
  _BYTE v11[272]; // [esp+118h] [ebp-550h] BYREF
  _BYTE v12[272]; // [esp+228h] [ebp-440h] BYREF
  _BYTE v13[272]; // [esp+338h] [ebp-330h] BYREF
  _BYTE v14[272]; // [esp+448h] [ebp-220h] BYREF
  _BYTE v15[272]; // [esp+558h] [ebp-110h] BYREF

  v2 = a1;
  v3 = a2;
  result = (unsigned int)((unsigned __int64)(2021161081LL * (a2 - a1)) >> 32) >> 31;
  v5 = (a2 - a1) / 272;
  if ( v5 > 16 )
  {
    while ( 1 )
    {
      qmemcpy(v10, v3 - 272, sizeof(v10));
      qmemcpy(v11, &v2[272 * (v5 / 2)], sizeof(v11));
      qmemcpy(v12, v2, sizeof(v12));
      if ( (unsigned __int8)sub_429B10(v11) )
      {
        if ( (unsigned __int8)sub_429B10(v10) )
          goto LABEL_11;
        v6 = v10;
        if ( !(unsigned __int8)sub_429B10(v10) )
          v6 = v12;
      }
      else if ( (unsigned __int8)sub_429B10(v10) )
      {
        v6 = v12;
      }
      else
      {
        v6 = v10;
        if ( !(unsigned __int8)sub_429B10(v10) )
LABEL_11:
          v6 = v11;
      }
      qmemcpy(v14, v6, sizeof(v14));
      qmemcpy(v13, v14, sizeof(v13));
      while ( 1 )
      {
        for ( ; (unsigned __int8)sub_429B10(v13); v2 += 272 )
          ;
        for ( v3 -= 272; (unsigned __int8)sub_429B10(v3); v3 -= 272 )
          ;
        if ( v3 <= v2 )
          break;
        qmemcpy(v15, v2, sizeof(v15));
        v7 = v2;
        v2 += 272;
        qmemcpy(v7, v3, 0x110u);
        qmemcpy(v3, v15, 0x110u);
      }
      v8 = a2;
      v9 = a1;
      if ( (a2 - v2) / 272 > (v2 - a1) / 272 )
      {
        sub_429820(a1, v2);
        a1 = v2;
        v9 = v2;
      }
      else
      {
        sub_429820(v2, a2);
        a2 = v2;
        v8 = v2;
      }
      result = 2021161081 * (v8 - v9);
      v5 = (v8 - v9) / 272;
      if ( v5 <= 16 )
        return result;
      v3 = a2;
      v2 = a1;
    }
  }
  return result;
}
