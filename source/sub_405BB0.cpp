//----- (00405BB0) --------------------------------------------------------
int __cdecl sub_405BB0(_DWORD *self, int a2)
{
  int v2; // eax
  char v3; // cl
  int v4; // eax

  v2 = self[1];
  v3 = *(_BYTE *)(v2 + 172 * a2);
  v4 = v2 + 172 * a2;
  if ( v3 )
    return *(_DWORD *)(v4 + 28);
  else
    return -1;
}
