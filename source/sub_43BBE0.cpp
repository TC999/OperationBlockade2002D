//----- (0043BBE0) --------------------------------------------------------
char __thiscall sub_43BBE0(_DWORD *this)
{
  char v2[260]; // [esp+Ch] [ebp-104h] BYREF

  strcpy(v2, *(const char **)(*((_DWORD *)sub_424350(this, aNameedit) + 28) + 8));
  if ( !strcmp(v2, AppName) )
    return 0;
  strcpy(String, v2);
  sub_422E60(AppName, aNetusername, String);
  strcpy((char *)(dword_4F5CC4 + 140), String);
  strcpy((char *)(dword_4F5CC4 + 400), String);
  sub_4229D0(aUiNetnameentry, String);
  return 1;
}
