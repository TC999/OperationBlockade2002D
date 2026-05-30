//----- (00422200) --------------------------------------------------------
int __cdecl sub_422200(int self)
{
  void *v2; // edx

  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(self + 8) + 8))(*(_DWORD *)(self + 8));
  v2 = *(void **)(self + 12);
  *(_DWORD *)(self + 8) = 0;
  return sub_4885A6(v2);
}
