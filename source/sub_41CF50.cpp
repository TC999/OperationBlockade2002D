//----- (0041CF50) --------------------------------------------------------
int __thiscall sub_41CF50(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 32);
  if ( result )
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 72))(result);
  *(_BYTE *)(this + 1) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 340) = 0;
  return result;
}
