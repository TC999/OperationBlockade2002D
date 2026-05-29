//----- (0048861D) --------------------------------------------------------
double __usercall sub_48861D(
        char a1,
        unsigned int a2,
        __int16 a3,
        double result,
        int a5,
        int a6)
{
  char v6; // fps

  if ( a1 )
  {
    if ( (a2 & 0xFFFFF) != 0 || a5 )
    {
      _convertTOStoQNaN();
      goto LABEL_17;
    }
LABEL_16:
    result = *(double *)&tbyte_4B2910;
LABEL_17:
    if ( dword_522320 )
      return result;
LABEL_18:
    ((void (__fastcall *)(char *, int))_startOneArgErrorHandling)(aAcos, 13);
    return result;
  }
  if ( a3 != 639 )
    _load_CW();
  if ( a2 < 0x3FF00000 )
  {
    result = atan2(sqrt((result + 1.0) * (1.0 - result)), result);
    goto LABEL_6;
  }
  if ( a2 > 0x3FF00000 || a5 | a6 & 0xFFFFF )
    goto LABEL_16;
  if ( a6 < 0 )
    result = 3.141592653589793238;
  else
    result = 0.0;
LABEL_6:
  if ( !dword_522320 && a3 != 639 && (a3 & 0x20) != 0 && (v6 & 0x20) != 0 )
    goto LABEL_18;
  return result;
}
