//----- (0040C690) --------------------------------------------------------
int __cdecl sub_40C690(_DWORD *self)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = self[3];
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 32))(v2);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)self[3] + 8))(self[3]);
    self[3] = 0;
  }
  v3 = self[4];
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 32))(self[4]);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)self[4] + 8))(self[4]);
    self[4] = 0;
  }
  result = self[2];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(self[2]);
    self[2] = 0;
  }
  return result;
}
