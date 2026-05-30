//----- (0043EFF0) --------------------------------------------------------
_DWORD *__cdecl sub_43EFF0(_DWORD *self, _DWORD *a2)
{
  const char *v2; // ecx

  *a2 = self[235];
  v2 = (const char *)self[236];
  if ( v2 )
    a2[1] = _strdup(v2);
  return a2;
}
