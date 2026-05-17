//----- (0040B530) --------------------------------------------------------
char __thiscall sub_40B530(const char *this, char *ArgList, _DWORD *a3, _DWORD *a4, const char **a5)
{
  const char *v6; // esi
  char result; // al
  int i; // edi
  char v9; // al
  const char *v10; // ebp
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  const char *v15; // edi

  v6 = (const char *)sub_40B6E0(ArgList, 1);
  result = (char)a5;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( v6 )
  {
    for ( i = 0; ; ++i )
    {
      v9 = v6[i];
      if ( v9 >= 48 && v9 <= 57 )
        break;
      if ( v9 == 46 || v9 == 45 || !v9 )
        break;
    }
    v10 = this + 16;
    sub_40A120(v6[i] != 0, "%s = %s, expected [integer, integer, string], see %s", ArgList, v6, this + 16);
    result = v6[i];
    if ( result )
    {
      *a3 = sub_48A1BB((char *)&v6[i]);
      while ( 1 )
      {
        v11 = v6[i];
        if ( (v11 < 48 || v11 > 57) && v11 != 46 && v11 != 45 && v11 )
          break;
        ++i;
      }
      sub_40A120(v6[i] != 0, "%s = %s, expected [integer, integer, string], see %s", ArgList, v6, v10);
      result = v6[i];
      if ( result )
      {
        while ( 1 )
        {
          v12 = v6[i];
          if ( v12 >= 48 && v12 <= 57 )
            break;
          if ( v12 == 46 || v12 == 45 || !v12 )
            break;
          ++i;
        }
        sub_40A120(v6[i] != 0, "%s = %s, expected [integer, integer, string], see %s", ArgList, v6, v10);
        result = v6[i];
        if ( result )
        {
          *a4 = sub_48A1BB((char *)&v6[i]);
          while ( 1 )
          {
            v13 = v6[i];
            if ( (v13 < 48 || v13 > 57) && v13 != 46 && v13 != 45 && v13 )
              break;
            ++i;
          }
          sub_40A120(v6[i] != 0, "%s = %s, expected [integer, integer, string], see %s", ArgList, v6, v10);
          result = v6[i];
          if ( result )
          {
            while ( 1 )
            {
              v14 = v6[i];
              if ( v14 != 32 && v14 != 44 )
                break;
              ++i;
            }
            v15 = &v6[i];
            sub_40A120(*v15 != 0, "%s = %s, expected [integer, integer, string], see %s", ArgList, v6, v10);
            result = *v15;
            if ( *v15 )
              *a5 = v15;
          }
        }
      }
    }
  }
  return result;
}
