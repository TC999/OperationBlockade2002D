//----- (0041D090) --------------------------------------------------------
char __fastcall sub_41D090(int a1)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-4h] BYREF

  v3 = a1;
  v1 = *(_DWORD *)(a1 + 32);
  if ( !v1 )
    return 0;
  v3 = 0;
  (*(void (__stdcall **)(int, int *))(*(_DWORD *)v1 + 36))(v1, &v3);
  return v3 & 1;
}
