//----- (00422AE0) --------------------------------------------------------
char __cdecl sub_422AE0(LPCSTR lpFileName)
{
  intptr_t v1; // eax
  int v3[70]; // [esp+0h] [ebp-118h] BYREF

  v1 = _findfirst(lpFileName, (int)v3);
  if ( v1 <= -1 )
    return 0;
  _findclose(v1);
  return 1;
}
