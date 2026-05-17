//----- (0040C690) --------------------------------------------------------
int __thiscall sub_40C690(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = this[3];
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 32))(v2);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this[3] + 8))(this[3]);
    this[3] = 0;
  }
  v3 = this[4];
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 32))(this[4]);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this[4] + 8))(this[4]);
    this[4] = 0;
  }
  result = this[2];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[2]);
    this[2] = 0;
  }
  return result;
}
