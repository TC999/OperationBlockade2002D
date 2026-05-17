//----- (004026C0) --------------------------------------------------------
int __cdecl sub_4026C0(LPCCH lpMultiByteStr)
{
  int result; // eax
  int v2; // esi

  if ( !sub_402710(lpMultiByteStr) )
    return -2147467259;
  result = sub_402820();
  if ( result >= 0 )
  {
    v2 = sub_402990(lpMultiByteStr);
    if ( !v2 )
      v2 = dword_4B5AA8 != 0;
    sub_4028F0();
    return v2;
  }
  return result;
}
