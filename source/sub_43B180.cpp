extern char FileName[];
extern char aSps[];

//----- (0043B180) --------------------------------------------------------
int __cdecl sub_43B180(_DWORD *self)
{
  void *v2; // esi
  int i; // esi
  void *v4; // edi
  void *v5; // esi
  int v6; // ebp
  char *v7; // eax
  char *v8; // edx
  void *v10; // [esp+Ch] [ebp-220h]
  int v11[5]; // [esp+10h] [ebp-21Ch] BYREF
  char String1[260]; // [esp+24h] [ebp-208h] BYREF
  char Str[260]; // [esp+128h] [ebp-104h] BYREF

  sub_43B160((int)self);
  v2 = (void *)_findfirst(FileName, (struct _finddata_t *)v11);
  if ( v2 != (void *)-1 )
  {
    do
    {
      if ( _strcmpi(String1, aSps) )
        ++self[12];
    }
    while ( !_findnext((intptr_t)v2, (struct _finddata_t *)v11) );
  }
  _findclose((intptr_t)v2);
  self[11] = (int)operator new(4 * self[12]);
  for ( i = 0; i < self[12]; ++i )
  {
    *(_DWORD *)(self[11] + 4 * i) = (int)operator new(0x18u);
    v4 = *(void **)(self[11] + 4 * i);
    memset(v4, 0, 0x18u);
  }
  v5 = (void *)_findfirst(FileName, (struct _finddata_t *)v11);
  v10 = v5;
  if ( v5 != (void *)-1 )
  {
    v6 = 0;
    do
    {
      if ( _strcmpi(String1, aSps) )
      {
        strcpy(Str, String1);
        v7 = strrchr(Str, 46);
        if ( v7 )
          *v7 = 0;
        v8 = *(char **)(self[11] + v6);
        v6 += 4;
        strcpy(v8, Str);
        v5 = v10;
      }
    }
    while ( !_findnext((intptr_t)v5, (struct _finddata_t *)v11) );
  }
  return _findclose((intptr_t)v5);
}
