//----- (0040B420) --------------------------------------------------------
char __thiscall sub_40B420(const char *this, char *ArgList, float *a3, const char **a4)
{
  int v5; // eax
  const char *v6; // esi
  int i; // edi
  char v8; // al
  const char *v9; // ebp
  char v10; // al
  char v11; // al
  const char *v12; // edi

  v5 = sub_40B6E0(ArgList, 1);
  v6 = (const char *)v5;
  *a3 = 0.0;
  *a4 = 0;
  if ( v5 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = v6[i];
      if ( v8 >= 48 && v8 <= 57 )
        break;
      if ( v8 == 46 || v8 == 45 || !v8 )
        break;
    }
    v9 = this + 16;
    sub_40A120(v6[i] != 0, "%s = %s, expected [float, string], see %s", ArgList, v6, this + 16);
    LOBYTE(v5) = v6[i];
    if ( (_BYTE)v5 )
    {
      *a3 = atof(&v6[i]);
      while ( 1 )
      {
        v10 = v6[i];
        if ( (v10 < 48 || v10 > 57) && v10 != 46 && v10 != 45 && v10 )
          break;
        ++i;
      }
      sub_40A120(v6[i] != 0, "%s = %s, expected [float, string], see %s", ArgList, v6, v9);
      LOBYTE(v5) = v6[i];
      if ( (_BYTE)v5 )
      {
        while ( 1 )
        {
          v11 = v6[i];
          if ( v11 != 32 && v11 != 44 )
            break;
          ++i;
        }
        v12 = &v6[i];
        sub_40A120(*v12 != 0, "%s = %s, expected [float, string], see %s", ArgList, v6, v9);
        LOBYTE(v5) = *v12;
        if ( *v12 )
          *a4 = v12;
      }
    }
  }
  return v5;
}
