//----- (004375C0) --------------------------------------------------------
int __thiscall sub_4375C0(void *this, char *String1)
{
  int result; // eax
  LPVOID *v4; // eax

  if ( !_strcmpi(String1, aEatYourSpinach) )
  {
    *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 2552) = *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 2552) == 0;
LABEL_5:
    v4 = (LPVOID *)sub_436A90((int)this);
    return sub_421110(v4, aCheatCodeEnabl);
  }
  result = _strcmpi(String1, aSayUncle);
  if ( !result )
  {
    result = sub_45B4E0(*(_DWORD *)(dword_520970 + 236));
    if ( (_BYTE)result )
      goto LABEL_5;
  }
  return result;
}
