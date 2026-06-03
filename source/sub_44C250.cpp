//----- (0044C250) --------------------------------------------------------
int __cdecl sub_44C250(_DWORD *self)
{
  _DWORD *v1; // esi
  int v2; // ebp
  LPVOID *v3; // ebp
  char *v4; // ebx
  char *v5; // edi
  char **v6; // esi
  int v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+10h] [ebp-14h]

  v1 = self;
  *self = (uint32)(uintptr_t)(&off_499A74);
  v2 = self[84];
  v9 = self[85];
  v8 = v2;
  if ( v2 != v9 )
  {
    v3 = (LPVOID *)(v2 + 28);
    do
    {
      v4 = (char *)v3[1];
      v5 = (char *)*v3;
      v6 = (char **)(v3 - 1);
      if ( *v3 != v4 )
      {
        do
        {
          nullsub_4((int)v5);
          v5 += 268;
        }
        while ( v5 != v4 );
      }
      sub_4885A6(*v3);
      *v3 = 0;
      v6[2] = 0;
      v6[3] = 0;
      v3 += 10;
      v8 += 40;
    }
    while ( v8 != v9 );
    v1 = self;
  }
  sub_4885A6((LPVOID)v1[84]);
  v1[84] = 0;
  v1[85] = 0;
  v1[86] = 0;
  return sub_4690A0(v1);
}
