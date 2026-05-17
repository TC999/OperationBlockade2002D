//----- (00427B80) --------------------------------------------------------
int sub_427B80()
{
  _DWORD v1[3]; // [esp+14h] [ebp-B8h] BYREF
  _DWORD v2[17]; // [esp+20h] [ebp-ACh] BYREF
  _DWORD v3[26]; // [esp+64h] [ebp-68h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[4] = 1065353216;
  v2[0] = 1065353216;
  v2[5] = 1065353216;
  v2[1] = 1065353216;
  v2[6] = 1065353216;
  v2[2] = 1065353216;
  v2[7] = 1065353216;
  v2[3] = 1065353216;
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v2);
  memset(v3, 0, sizeof(v3));
  v1[0] = -1082130432;
  v1[1] = -1082130432;
  v3[0] = 3;
  v3[5] = 1065353216;
  v3[6] = 1065353216;
  v3[7] = 1065353216;
  v3[1] = 1054649352;
  v3[2] = 1058055127;
  v3[3] = 1065353216;
  v1[2] = -1063256064;
  sub_46B970(&v3[16], v1);
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD *))(**(_DWORD **)ArgList + 176))(*(_DWORD *)ArgList, 0, v3);
  return (*(int (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)ArgList + 184))(*(_DWORD *)ArgList, 0, 1);
}
