//----- (00407350) --------------------------------------------------------
char __thiscall sub_407350(_DWORD *this, int a2)
{
  _BYTE *v3; // eax

  v3 = sub_407190(this, a2, 1);
  if ( v3 && *v3 )
    return v3[1];
  else
    return *(_BYTE *)(*(_DWORD *)(this[7] + 4) + 172 * a2);
}
