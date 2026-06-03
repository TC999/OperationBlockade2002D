//----- (0046A3A0) --------------------------------------------------------
char __cdecl sub_46A3A0(_BYTE *self, LPCSTR lpFileName)
{
  int v4; // [esp+Ch] [ebp-118h] BYREF
  _BYTE v5[8]; // [esp+10h] [ebp-114h] BYREF
  _BYTE v6[4]; // [esp+18h] [ebp-10Ch] BYREF
  _BYTE v7[264]; // [esp+1Ch] [ebp-108h] BYREF

  sub_46A410((int)self, lpFileName, strlen(lpFileName) + 1);
  _findfirst(lpFileName, (_finddata64i32_t *)&v4);
  sub_46A410((int)self, v5, 4);
  sub_46A410((int)self, v6, 4);
  sub_46A410((int)self, v7, 4);
  return self[300];
}
