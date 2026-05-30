//----- (004069C0) --------------------------------------------------------
char *__cdecl sub_4069C0(_DWORD *self, char *String1)
{
  int v3; // esi
  _DWORD *v4; // eax
  char *v5; // esi

  v3 = self[5];
  if ( v3 )
  {
    while ( _strcmpi(String1, (const char *)(v3 + 60)) )
    {
      v3 = *(_DWORD *)(v3 + 580);
      if ( !v3 )
        goto LABEL_4;
    }
    ++*(_DWORD *)(v3 + 56);
    return (char *)v3;
  }
  else
  {
LABEL_4:
    v4 = operator new(0x24Cu);
    if ( v4 )
      v5 = (char *)sub_403B10(v4);
    else
      v5 = 0;
    *((_DWORD *)v5 + 146) = self;
    *((_DWORD *)v5 + 145) = self[5];
    self[5] = v5;
    sub_403D90(v5, String1);
    sub_403E30((int)v5);
    return v5;
  }
}
