//----- (0040EBA0) --------------------------------------------------------
int sub_40EBA0()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi
  _DWORD *v1; // eax

  v0 = (struct _RTL_CRITICAL_SECTION *)operator new(0x18u);
  InitializeCriticalSection(v0);
  lpCriticalSection = v0;
  v1 = (_DWORD *)malloc(0x200000u);
  dword_4F5C8C = (int)(DWORD_PTR)v1;
  if ( !v1 )
    return -1;
  dword_4F5C88 = (int)v1;
  *v1 &= 3u;
  *v1 |= 0x1FFFFCu;
  dword_4F5C94 = 1;
  dword_4F5CA0 = 0;
  dword_4F5C98 = 0x200000;
  dword_4F5C9C = 0;
  *(_BYTE *)dword_4F5C88 &= ~1u;
  *(_BYTE *)dword_4F5C88 |= 2u;
  return 0;
}
