//----- (00428820) --------------------------------------------------------
LPCCH __cdecl sub_428820(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int a3)
{
  LPCCH result; // eax

  if ( lpWideCharStr )
  {
    result = lpMultiByteStr;
    if ( lpMultiByteStr )
      return (LPCCH)sub_428780(lpWideCharStr, lpMultiByteStr, a3);
  }
  return result;
}
