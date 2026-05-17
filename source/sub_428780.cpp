//----- (00428780) --------------------------------------------------------
int __cdecl sub_428780(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int a3)
{
  unsigned int v3; // esi
  int result; // eax

  if ( lpWideCharStr && lpMultiByteStr )
  {
    v3 = a3;
    if ( a3 == -1 )
      v3 = strlen(lpMultiByteStr) + 1;
    result = MultiByteToWideChar(0, 0, lpMultiByteStr, -1, lpWideCharStr, v3 - 1);
    lpWideCharStr[v3 - 1] = 0;
  }
  return result;
}
