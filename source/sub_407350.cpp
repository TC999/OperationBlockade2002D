//----- (00407350) --------------------------------------------------------
char __cdecl sub_407350(_DWORD *self, int a2)
{
  _BYTE *v3; // eax

  v3 = (uint8*)sub_407190(self, a2, 1);
  if ( v3 && *v3 )
    return v3[1];
  else
    return *(_BYTE *)(*(_DWORD *)(self[7] + 4) + 172 * a2);
}
