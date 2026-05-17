//----- (004287D0) --------------------------------------------------------
void __cdecl sub_4287D0(LPSTR lpMultiByteStr, wchar_t *String, size_t a3)
{
  size_t v3; // esi

  if ( lpMultiByteStr && String )
  {
    v3 = a3;
    if ( a3 == -1 )
      v3 = wcslen(String) + 1;
    WideCharToMultiByte(0, 0, String, -1, lpMultiByteStr, v3 - 1, 0, 0);
    lpMultiByteStr[v3 - 1] = 0;
  }
}
