//----- (00468750) --------------------------------------------------------
int __stdcall sub_468750(_DWORD *a1, float a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // edi
  int v9; // [esp+18h] [ebp-8h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  v2 = a1[9];
  v10 = 0;
  (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)v2 + 44))(v2, 0, 0, &v9, 0);
  v3 = a1[10];
  v4 = v9;
  v5 = 0;
  v10 = v9;
  if ( v3 > 0 )
  {
    v6 = a1 + 21;
    do
    {
      *(float *)(v6[5] + v4 + 4) = *(float *)(v6[6] + v4 + 4) + a2;
      v6 = a1 + 21;
      v4 = a1[42] + v10;
      v7 = a1[10];
      ++v5;
      v10 = v4;
    }
    while ( v5 < v7 );
  }
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)a1[9] + 48))(a1[9]);
}
