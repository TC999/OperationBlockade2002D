//----- (0047D01D) --------------------------------------------------------
int __cdecl sub_47D01D(int a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // esi
  char v5; // al
  int result; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-4h]

  v10 = *(_DWORD *)(a1 + 380);
  sub_47CE2E(v9);
  v1 = (**(int (__cdecl ***)(int, int, int))(a1 + 4))(a1, 1, 1408) + 256;
  v2 = 0;
  *(_DWORD *)(a1 + 284) = v1;
  memset((void *)(v1 - 256), 0, 0x100u);
  do
  {
    *(_BYTE *)(v2 + v1) = v2;
    ++v2;
  }
  while ( v2 <= 255 );
  v3 = v1 + 128;
  memset((void *)(v3 + 128), 0xFFu, 0x180u);
  memset((void *)(v3 + 512), 0, 0x180u);
  qmemcpy((void *)(v3 + 896), *(const void **)(a1 + 284), 0x80u);
  v4 = v10;
  *(_DWORD *)(v10 + 12) = 0;
  *(_BYTE *)(v10 + 16) = sub_47CDBD(0, a1);
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  v5 = *(_BYTE *)(a1 + 74);
  if ( !v5 || !*(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 89) = 0;
    *(_BYTE *)(a1 + 90) = 0;
  }
  if ( v5 )
  {
    if ( *(_BYTE *)(a1 + 65) )
    {
      *(_DWORD *)(*(_DWORD *)a1 + 20) = 46;
      (**(void (__cdecl ***)(int))a1)(a1);
    }
    if ( *(_DWORD *)(a1 + 100) == 3 )
    {
      if ( *(_DWORD *)(a1 + 116) )
      {
        *(_BYTE *)(a1 + 89) = 1;
        goto LABEL_12;
      }
      if ( *(_BYTE *)(a1 + 80) )
      {
        *(_BYTE *)(a1 + 90) = 1;
        goto LABEL_12;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 89) = 0;
      *(_BYTE *)(a1 + 90) = 0;
      *(_DWORD *)(a1 + 116) = 0;
    }
    *(_BYTE *)(a1 + 88) = 1;
LABEL_12:
    if ( *(_BYTE *)(a1 + 88) )
    {
      sub_484647((uint32*)a1);
      *(_DWORD *)(v10 + 20) = *(_DWORD *)(a1 + 420);
    }
    if ( *(_BYTE *)(a1 + 90) || *(_BYTE *)(a1 + 89) )
    {
      sub_483B99(a1);
      *(_DWORD *)(v10 + 24) = *(_DWORD *)(a1 + 420);
    }
  }
  if ( !*(_BYTE *)(a1 + 65) )
  {
    if ( *(_BYTE *)(v10 + 16) )
    {
      sub_482C1B(a1);
    }
    else
    {
      sub_48261E(a1);
      sub_481EA9(a1);
    }
    sub_4819E1(a1, *(_BYTE *)(a1 + 90));
  }
  sub_481744(a1);
  if ( *(_BYTE *)(a1 + 201) )
  {
    *(_DWORD *)(*(_DWORD *)a1 + 20) = 1;
    (**(void (__cdecl ***)(int))a1)(a1);
  }
  else if ( *(_BYTE *)(a1 + 200) )
  {
    sub_481529(a1);
  }
  else
  {
    sub_48097A(a1);
  }
  BYTEn(v10, 0) = *(_BYTE *)(*(_DWORD *)(a1 + 396) + 16) || *(_BYTE *)(a1 + 64);
  sub_47FFA9(a1, v10);
  if ( !*(_BYTE *)(a1 + 65) )
    sub_47F357(a1, 0);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 4) + 24))(a1);
  result = (*(int (__cdecl **)(int))(*(_DWORD *)(a1 + 396) + 8))(a1);
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( !*(_BYTE *)(a1 + 64) )
    {
      result = *(_DWORD *)(a1 + 396);
      if ( *(_BYTE *)(result + 16) )
      {
        v8 = *(_DWORD *)(a1 + 32);
        if ( *(_BYTE *)(a1 + 200) )
          v8 = 3 * v8 + 2;
        *(_DWORD *)(v7 + 4) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) = v8 * *(_DWORD *)(a1 + 280);
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) = 0;
        result = (*(_BYTE *)(a1 + 90) != 0) + 2;
        *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16) = result;
        ++*(_DWORD *)(v4 + 12);
      }
    }
  }
  return result;
}
