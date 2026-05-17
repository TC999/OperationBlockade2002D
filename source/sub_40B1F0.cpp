//----- (0040B1F0) --------------------------------------------------------
void __thiscall sub_40B1F0(const char *this, char *ArgList, float *a3, float *a4)
{
  const char *v5; // esi
  int i; // edi
  char v7; // al
  const char *v8; // ebp
  char v9; // al
  char v10; // al
  const char *v11; // edi

  v5 = (const char *)sub_40B6E0(ArgList, 1);
  *a3 = 0.0;
  *a4 = 0.0;
  if ( v5 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = v5[i];
      if ( v7 >= 48 && v7 <= 57 )
        break;
      if ( v7 == 46 || v7 == 45 || !v7 )
        break;
    }
    v8 = this + 16;
    sub_40A120(v5[i] != 0, "%s = %s, expected [integer, integer], see %s", ArgList, v5, this + 16);
    if ( v5[i] )
    {
      *a3 = atof(&v5[i]);
      while ( 1 )
      {
        v9 = v5[i];
        if ( (v9 < 48 || v9 > 57) && v9 != 46 && v9 != 45 && v9 )
          break;
        ++i;
      }
      sub_40A120(v5[i] != 0, "%s = %s, expected [integer, integer], see %s", ArgList, v5, v8);
      if ( v5[i] )
      {
        while ( 1 )
        {
          v10 = v5[i];
          if ( v10 >= 48 && v10 <= 57 )
            break;
          if ( v10 == 46 || v10 == 45 || !v10 )
            break;
          ++i;
        }
        v11 = &v5[i];
        sub_40A120(*v11 != 0, "%s = %s, expected [integer, integer], see %s", ArgList, v5, v8);
        if ( *v11 )
          *a4 = atof(v11);
      }
    }
  }
}
