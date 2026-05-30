//----- (0043CB00) --------------------------------------------------------
int __cdecl sub_43CB00(_DWORD *self)
{
  _DWORD *v1; // esi
  int result; // eax
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  void *v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // [esp+8h] [ebp-238h] BYREF
  int v14; // [esp+Ch] [ebp-234h]
  _DWORD *v15; // [esp+10h] [ebp-230h]
  _DWORD v16[72]; // [esp+14h] [ebp-22Ch] BYREF
  char Buffer[256]; // [esp+134h] [ebp-10Ch] BYREF
  int v18; // [esp+23Ch] [ebp-4h]

  v1 = self;
  v15 = self;
  self[16] = sub_403620((_DWORD *)dword_4B5AB0, aCommander);
  result = v1[12];
  v3 = 0;
  if ( !result )
  {
    sub_40A1D0(v16, aObjectivedialo);
    v13 = 0;
    v4 = 0;
    v18 = 0;
    if ( *(int *)(16 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) + *(_DWORD *)(dword_520970 + 236) + 28) > 0 )
    {
      do
      {
        v5 = v4 + 1;
        v14 = v4 + 1;
        sprintf(Buffer, "mission %d", v4 + 1);
        if ( sub_40AAF0(v16, Buffer, 0) )
        {
          v6 = operator new(0x10u);
          *(_DWORD *)v6 = v4;
          *((_DWORD *)v6 + 3) = 0;
          *((_DWORD *)v6 + 2) = 0;
          sub_40AA40((int)v16, Buffer);
          for ( ; sub_40ABC0(v16, aLine, 0); ++*((_DWORD *)v6 + 2) )
            sub_40AFC0(aLine, (int)&v13);
          *((_DWORD *)v6 + 3) = operator new(4 * *((_DWORD *)v6 + 2));
          sub_40ADB0(v16);
          if ( sub_40ABC0(v16, aLine, 0) )
          {
            do
            {
              sub_40AFC0(aLine, (int)&v13);
              *(_DWORD *)(*((_DWORD *)v6 + 3) + v3) = operator new(strlen((const char *)v13) + 1);
              strcpy(*(char **)(*((_DWORD *)v6 + 3) + v3), (const char *)v13);
              v3 += 4;
            }
            while ( sub_40ABC0(v16, aLine, 0) );
            v1 = v15;
            v3 = 0;
          }
          sub_40AF00((const char *)v16, aDialogue, (char **)v6 + 1);
          v7 = v1[13];
          v8 = v1[12] + 1;
          v1[12] = v8;
          if ( v8 > v7 )
          {
            v9 = v7 + 8;
            v1[13] = v9;
            v10 = sub_488DD7((LPVOID)v1[11], 4 * v9);
            if ( v10 )
            {
              v11 = v1[12];
              v12 = v1[13] - v11;
              v1[11] = v10;
              memset((void *)(v10 + 4 * v11), 0, 4 * v12);
            }
          }
          *(_DWORD *)(v1[11] + 4 * v1[12] - 4) = v6;
          v5 = v14;
        }
        v4 = v5;
      }
      while ( v5 < *(_DWORD *)(16 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20)
                             + *(_DWORD *)(dword_520970 + 236)
                             + 28) );
    }
    while ( sub_40AAF0(v16, aControl, 0) )
      sub_40AA40((int)v16, aControl);
    v18 = -1;
    return sub_40A830((int)v16);
  }
  return result;
}
