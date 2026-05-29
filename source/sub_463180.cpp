//----- (00463180) --------------------------------------------------------
int __thiscall sub_463180(_BYTE *self)
{
  char v2; // al
  char v3; // cl
  char *v4; // ebp
  _BYTE *v5; // ebx
  char v6; // cl
  char v7; // dl
  int v8; // eax
  char v9; // cl
  char *v10; // edx
  int result; // eax
  int v12; // edi
  _BYTE *v13; // esi
  char ArgList[4]; // [esp+10h] [ebp-9Ch]
  _BYTE *v15; // [esp+14h] [ebp-98h]
  __int16 v16[3]; // [esp+18h] [ebp-94h] BYREF
  char v17; // [esp+1Eh] [ebp-8Eh]
  char v18; // [esp+1Fh] [ebp-8Dh]
  char v19; // [esp+3Ch] [ebp-70h] BYREF

  v2 = self[520];
  v3 = self[524];
  v15 = self;
  v17 = v2;
  v18 = v3;
  sub_4229D0(aHostSendingLis);
  *(_DWORD *)ArgList = 0;
  v4 = &v19;
  v5 = self + 896;
  do
  {
    sub_4229D0("%d: %s", *(_DWORD *)ArgList, v5 + 3);
    v6 = *v5;
    v7 = v5[2];
    *((_DWORD *)v4 - 7) = *((_DWORD *)v5 - 2);
    v8 = *((_DWORD *)v5 - 1);
    *v4 = v6;
    v9 = *(v5 - 16);
    v4[1] = v7;
    *(_DWORD *)(v4 + 3) = v8;
    v4[2] = v9;
    v10 = v4 - 24;
    v5 += 352;
    v4 += 35;
    strcpy(v10, v5 + 3);
    ++*(_DWORD *)ArgList;
  }
  while ( *(int *)ArgList < 4 );
  v15[472] = 0;
  sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x601, v16, 148, 15, 0);
  sub_436E20(*(_DWORD *)(dword_520970 + 224));
  result = *((_DWORD *)v15 + 130);
  v12 = 0;
  if ( result > 0 )
  {
    v13 = v15 + 884;
    do
    {
      *(_DWORD *)v13 = sub_436E40(*(char **)(dword_520970 + 224), v13 + 15);
      result = *((_DWORD *)v15 + 130);
      ++v12;
      v13 += 352;
    }
    while ( v12 < result );
  }
  return result;
}
