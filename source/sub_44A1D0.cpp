//----- (0044A1D0) --------------------------------------------------------
char __cdecl sub_44A1D0(char *self, int a2, _DWORD *a3, int a4, float a5, char a6, char a7, float a8, int a9)
{
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  int v12[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v11, 0, sizeof(v11));
  sub_44A250(a2, (int)a3, (int)v11, a4, (int)v11, a5, (int)v12);
  return sub_449C40(self, a2, a3, v12, a6, a7, a8, a9);
}
