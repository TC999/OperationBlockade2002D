//----- (00412140) --------------------------------------------------------
static const char asc_4A1DC4[] = "*.*";

int __stdcall sub_412140(const char *a1, const char *a2)
{
  void *v2; // ebp
  char *v3; // ebx
  char *v4; // eax
  CHAR FileName[260]; // [esp+10h] [ebp-21Ch] BYREF
  int v8[5]; // [esp+114h] [ebp-118h] BYREF
  char v9[260]; // [esp+128h] [ebp-104h] BYREF

  strcpy(FileName, a1);
  if ( !FileName[0] || FileName[strlen(FileName) - 1] != 92 )
    strcat(FileName, asc_4A1DC4);
  strcat(FileName, a2);
  v2 = (void *)_findfirst(FileName, (struct _finddata64i32_t *)v8);
  if ( v2 != (void *)-1 )
  {
    do
    {
      v3 = (char *)operator new(0x108u);
      strcpy(v3, v9);
      *((_DWORD *)v3 + 65) = v8[4];
      if ( (int)++NumOfElements > dword_4F5CB0 )
      {
        dword_4F5CB0 += 8;
        v4 = (char *)sub_488DD7(*(void **)Base, 4 * dword_4F5CB0);
        if ( v4 )
        {
          *(char **)Base = v4;
          memset(&v4[4 * NumOfElements], 0, 4 * (dword_4F5CB0 - NumOfElements));
        }
      }
      *(_DWORD *)(*(char **)Base + 4 * (NumOfElements - 1)) = (int)v3;
    }
    while ( !_findnext((intptr_t)v2, (struct _finddata64i32_t *)v8) );
  }
  return _findclose((intptr_t)v2);
}
