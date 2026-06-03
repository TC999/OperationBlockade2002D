//----- (004046C0) --------------------------------------------------------
extern char aSFailedToLoad[];
extern char aUnknownFailedT[];

bool __cdecl sub_4046C0(_DWORD *self, int a2, int ArgList)
{
  _DWORD *v3; // ebp
  bool v4; // dl
  int v5; // esi
  bool v6; // al
  int *v7; // edi
  bool v8; // bl
  int v9; // ebp
  bool v10; // al
  int *v11; // ebp
  bool v12; // bl
  int v13; // edi
  bool result; // al
  int v15; // ecx
  int v16; // esi
  char v17; // al
  char v18; // [esp+0h] [ebp-1Ch]
  int Buffer; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h] BYREF
  int v23; // [esp+20h] [ebp+4h]

  v3 = self;
  v4 = (unsigned __int8)sub_405820((FILE **)self, (FILE **)-15891371) && (unsigned __int8)sub_4057E0((FILE **)self, &Buffer);
  v5 = v3[8] + 172 * Buffer;
  *(_DWORD *)(v5 + 28) = a2;
  *(_DWORD *)(v5 + 32) = ArgList;
  *(_BYTE *)(v5 + 56) = 0;
  v6 = 0;
  if ( v4 )
  {
      if ( (unsigned __int8)sub_4057E0((FILE **)self, &v22) )
      {
        *(_DWORD *)(v5 + 4) = v22;
        if ( (unsigned __int8)sub_405770((FILE **)self, v5 + 8) )
          v6 = 1;
      }
  }
  *(_BYTE *)v5 = 1;
  if ( !v6 )
    goto LABEL_22;
  v7 = (int *)(v5 + 12);
  if ( !(unsigned __int8)sub_4057E0((FILE **)self, (void *)(v5 + 12)) )
    goto LABEL_22;
  v8 = 1;
  *(_DWORD *)(v5 + 16) = (unsigned int)malloc(40 * *v7);
  v23 = 0;
  if ( *v7 > 0 )
  {
    v9 = 0;
    do
    {
        v8 = v8 && (unsigned __int8)sub_405850((int)self, v9 + *(_DWORD *)(v5 + 16));
      v9 += 40;
      ++v23;
    }
    while ( v23 < *v7 );
    v3 = self;
    if ( !v8 )
      goto LABEL_22;
  }
  if ( (unsigned __int8)sub_405820((FILE **)self, (FILE **)-536964205) )
    v10 = 1;
  else
LABEL_22:
    v10 = 0;
  if ( (int)v3[6] < 2 )
  {
    if ( !v10 )
      goto LABEL_40;
  }
  else
  {
    if ( !v10 )
      goto LABEL_35;
    v11 = (int *)(v5 + 20);
    if ( !(unsigned __int8)sub_4057E0((FILE **)self, (void *)(v5 + 20)) )
      goto LABEL_35;
    v12 = 1;
    *(_DWORD *)(v5 + 24) = (unsigned int)operator new(8 * *v11);
    v13 = 0;
    if ( *v11 > 0 )
    {
      do
        v12 = v12 && (unsigned __int8)sub_4059A0((FILE **)self, *(_DWORD *)(v5 + 24) + 8 * v13++);
      while ( v13 < *v11 );
      if ( !v12 )
        goto LABEL_35;
    }
    if ( !(unsigned __int8)sub_405820((FILE **)self, (FILE **)734614648) )
    {
LABEL_35:
      v10 = 0;
      goto LABEL_40;
    }
    v10 = 1;
  }
  if ( **(_BYTE **)(v5 + 8) == 42 )
  {
    *(_BYTE *)(v5 + 80) = 1;
    *(_BYTE *)(v5 + 81) = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 80) = 0;
    *(_BYTE *)(v5 + 81) = 1;
  }
LABEL_40:
  if ( *(_DWORD *)(v5 + 4) == -267452414 )
    v10 = v10 && (unsigned __int8)sub_404950((int *)self, v5);
  else
    *(_DWORD *)(v5 + 76) = 0;
  if ( !*(_DWORD *)(v5 + 48) || !*(_DWORD *)(v5 + 40) )
  {
    *(_BYTE *)(v5 + 81) = 0;
    *(_BYTE *)(v5 + 80) = 0;
  }
  if ( v10 )
  {
    if ( !(unsigned __int8)sub_4057E0((FILE **)self, &v21) )
      return 0;
    v15 = v21;
    result = 1;
    if ( v21 > 0 )
    {
      v16 = 0;
      do
      {
        if ( result )
        {
          v17 = sub_4046C0(self, Buffer, ArgList + 1);
          v15 = v21;
          result = v17 != 0;
        }
        ++v16;
      }
      while ( v16 < v15 );
    }
  }
  else
  {
    if ( v5 )
    {
      sub_4229D0(aSFailedToLoad, *(_DWORD *)(v5 + 8));
      return 0;
    }
    sub_4229D0(aUnknownFailedT, v18);
    return 0;
  }
  return result;
}
