//----- (0040B030) --------------------------------------------------------
char __cdecl sub_40B030(char *self, char *ArgList, float *a3)
{
  char *v3; // ebx
  int v4; // ebp
  char result; // al
  int v6; // edi
  char v7; // al
  char *v8; // esi
  const char *v9; // ebx
  char v10; // al
  bool v11; // cc
  int v12; // [esp+10h] [ebp-8h]

  v3 = self;
  v4 = sub_40B6E0(ArgList, 1);
  result = (char)a3;
  v6 = 0;
  *a3 = 0.0;
  a3[1] = 0.0;
  a3[2] = 0.0;
  if ( v4 )
  {
    v12 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_BYTE *)(v6 + v4);
        v8 = (char *)(v6 + v4);
        if ( v7 >= 48 && v7 <= 57 )
          break;
        if ( v7 == 46 || v7 == 45 || !v7 )
          break;
        ++v6;
      }
      v9 = v3 + 16;
      sub_40A120(v7 != 0, "failed to get Vector element, see entry %s, in file %s", ArgList, v9);
      result = *v8;
      if ( !*v8 )
        break;
      *a3 = atof((const char *)(v6 + v4));
      while ( 1 )
      {
        v10 = *(_BYTE *)(v6 + v4);
        if ( (v10 < 48 || v10 > 57) && v10 != 46 && v10 != 45 && v10 )
          break;
        ++v6;
      }
      sub_40A120(*(_BYTE *)(v6 + v4) != 0, "failed to get Vector element, see entry %s, in file %s", ArgList, v9);
      result = *(_BYTE *)(v6 + v4);
      if ( !result )
        break;
      result = v12 + 1;
      v11 = ++v12 < 3;
      ++a3;
      if ( !v11 )
        break;
      v3 = self;
    }
  }
  return result;
}
