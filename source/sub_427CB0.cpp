//----- (00427CB0) --------------------------------------------------------
char sub_427CB0()
{
  int v0; // eax

  v0 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)ArgList + 12))(*(_DWORD *)ArgList);
  if ( v0 == -2005530520 )
    return 0;
  if ( v0 == -2005530519 )
  {
    (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ArgList + 56))(*(_DWORD *)ArgList, &dword_520980);
    sub_427B80();
  }
  return 1;
}
