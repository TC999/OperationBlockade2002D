//----- (00426FE0) --------------------------------------------------------
extern const char *aAControlC;
extern const char *aAControlBreak;
extern const char *aADatatypeMisal;
extern const char *aABreakpoint;
extern const char *aAnAccessViolat;
extern const char *aAnInPageError;
extern const char *aANoMemory;
extern const char *aAnIllegalInstr;
extern const char *aANoncontinuabl;
extern const char *aAnInvalidDispo;
extern const char *aAArrayBoundsEx;
extern const char *aAFloatDenormal;
extern const char *aAFloatDivideBy;
extern const char *aAFloatInexactR;
extern const char *aAFloatInvalidO;
extern const char *aAFloatOverflow;
extern const char *aAFloatStackChe;
extern const char *aAFloatUnderflo;
extern const char *aAnIntegerDivid;
extern const char *aAnIntegerOverf;
extern const char *aAPrivilegedIns;
extern const char *aAStackOverflow;
extern const char *aADllInitializa;
extern const char *aAMicrosoftCExc;
extern const char *aUnknownExcepti;

int sub_426FE0()
{
  int v1; // eax
  int *i; // ecx
  int a1; // [esp+8h] [ebp-B8h]
  int v4; // [esp+0h] [ebp-C0h] BYREF
  _DWORD v5[47]; // [esp+4h] [ebp-BCh]

  a1 = 0;
  v4 = 1073807365;
  v5[0] = (_DWORD)aAControlC;
  v5[1] = 1073807368;
  v5[2] = (_DWORD)aAControlBreak;
  v5[3] = -2147483646;
  v5[4] = (_DWORD)aADatatypeMisal;
  v5[5] = -2147483645;
  v5[6] = (_DWORD)aABreakpoint;
  v5[7] = -1073741819;
  v5[8] = (_DWORD)aAnAccessViolat;
  v5[9] = -1073741818;
  v5[10] = (_DWORD)aAnInPageError;
  v5[11] = -1073741801;
  v5[12] = (_DWORD)aANoMemory;
  v5[13] = -1073741795;
  v5[14] = (_DWORD)aAnIllegalInstr;
  v5[15] = -1073741787;
  v5[16] = (_DWORD)aANoncontinuabl;
  v5[17] = -1073741786;
  v5[18] = (_DWORD)aAnInvalidDispo;
  v5[19] = -1073741684;
  v5[20] = (_DWORD)aAArrayBoundsEx;
  v5[21] = -1073741683;
  v5[22] = (_DWORD)aAFloatDenormal;
  v5[23] = -1073741682;
  v5[24] = (_DWORD)aAFloatDivideBy;
  v5[25] = -1073741681;
  v5[26] = (_DWORD)aAFloatInexactR;
  v5[27] = -1073741680;
  v5[28] = (_DWORD)aAFloatInvalidO;
  v5[29] = -1073741679;
  v5[30] = (_DWORD)aAFloatOverflow;
  v5[31] = -1073741678;
  v5[32] = (_DWORD)aAFloatStackChe;
  v5[33] = -1073741677;
  v5[34] = (_DWORD)aAFloatUnderflo;
  v5[35] = -1073741676;
  v5[36] = (_DWORD)aAnIntegerDivid;
  v5[37] = -1073741675;
  v5[38] = (_DWORD)aAnIntegerOverf;
  v5[39] = -1073741674;
  v5[40] = (_DWORD)aAPrivilegedIns;
  v5[41] = -1073741571;
  v5[42] = (_DWORD)aAStackOverflow;
  v5[43] = -1073741502;
  v5[44] = (_DWORD)aADllInitializa;
  v5[45] = -529697949;
  v5[46] = (_DWORD)aAMicrosoftCExc;
  v1 = 0;
  for ( i = &v4; a1 != *i; i += 2 )
  {
    if ( (unsigned int)++v1 >= 0x18 )
      return (int)aUnknownExcepti;
  }
  return (int)v5[2 * v1];
}
