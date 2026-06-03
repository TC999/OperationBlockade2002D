//----- (00421190) --------------------------------------------------------
int sub_421190(int a1, char *Format, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, Format);
  if ( _vsnprintf(*(char *const *)(a1 + 8), *(_DWORD *)(a1 + 4) - 1, Format, va) == -1 )
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 4) - 1) = 0;
  return sub_421AB0(*(_DWORD *)a1, (char *)*(_DWORD *)(a1 + 8), (float *)(a1 + 24), (_DWORD *)(a1 + 28));
}
