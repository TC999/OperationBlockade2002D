//----- (00409B70) --------------------------------------------------------
int __thiscall sub_409B70(_DWORD *self)
{
  int v2; // eax
  int result; // eax

  *self = &off_49914C;
  v2 = self[12];
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    self[12] = 0;
  }
  result = self[13];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(self[13]);
    self[13] = 0;
  }
  *self = &off_499040;
  return result;
}
