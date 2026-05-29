//----- (00455ED0) --------------------------------------------------------
char __thiscall sub_455ED0(_DWORD *self)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int i; // ecx

  v1 = self[100];
  if ( v1 )
    v2 = (self[101] - v1) >> 2;
  else
    v2 = 0;
  v3 = 0;
  if ( v2 <= 0 )
    return 1;
  for ( i = self[100]; !*(_BYTE *)(*(_DWORD *)i + 404); i += 4 )
  {
    if ( ++v3 >= v2 )
      return 1;
  }
  return 0;
}
