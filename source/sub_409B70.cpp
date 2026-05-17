//----- (00409B70) --------------------------------------------------------
int __thiscall sub_409B70(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  *this = &off_49914C;
  v2 = this[12];
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    this[12] = 0;
  }
  result = this[13];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[13]);
    this[13] = 0;
  }
  *this = &off_499040;
  return result;
}
