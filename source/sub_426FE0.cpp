//----- (00426FE0) --------------------------------------------------------
char *__cdecl sub_426FE0(int a1)
{
  int v1; // eax
  int *i; // ecx
  int v4; // [esp+0h] [ebp-C0h] BYREF
  _DWORD v5[47]; // [esp+4h] [ebp-BCh]

  v4 = 1073807365;
  v5[0] = aAControlC;
  v5[1] = 1073807368;
  v5[2] = aAControlBreak;
  v5[3] = -2147483646;
  v5[4] = aADatatypeMisal;
  v5[5] = -2147483645;
  v5[6] = aABreakpoint;
  v5[7] = -1073741819;
  v5[8] = aAnAccessViolat;
  v5[9] = -1073741818;
  v5[10] = aAnInPageError;
  v5[11] = -1073741801;
  v5[12] = aANoMemory;
  v5[13] = -1073741795;
  v5[14] = aAnIllegalInstr;
  v5[15] = -1073741787;
  v5[16] = aANoncontinuabl;
  v5[17] = -1073741786;
  v5[18] = aAnInvalidDispo;
  v5[19] = -1073741684;
  v5[20] = aAArrayBoundsEx;
  v5[21] = -1073741683;
  v5[22] = aAFloatDenormal;
  v5[23] = -1073741682;
  v5[24] = aAFloatDivideBy;
  v5[25] = -1073741681;
  v5[26] = aAFloatInexactR;
  v5[27] = -1073741680;
  v5[28] = aAFloatInvalidO;
  v5[29] = -1073741679;
  v5[30] = aAFloatOverflow;
  v5[31] = -1073741678;
  v5[32] = aAFloatStackChe;
  v5[33] = -1073741677;
  v5[34] = aAFloatUnderflo;
  v5[35] = -1073741676;
  v5[36] = aAnIntegerDivid;
  v5[37] = -1073741675;
  v5[38] = aAnIntegerOverf;
  v5[39] = -1073741674;
  v5[40] = aAPrivilegedIns;
  v5[41] = -1073741571;
  v5[42] = aAStackOverflow;
  v5[43] = -1073741502;
  v5[44] = aADllInitializa;
  v5[45] = -529697949;
  v5[46] = aAMicrosoftCExc;
  v1 = 0;
  for ( i = &v4; a1 != *i; i += 2 )
  {
    if ( (unsigned int)++v1 >= 0x18 )
      return aUnknownExcepti;
  }
  return (char *)v5[2 * v1];
}
