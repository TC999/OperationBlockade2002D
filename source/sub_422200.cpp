//----- (00422200) --------------------------------------------------------
int __thiscall sub_422200(int this)
{
  void *v2; // edx

  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 8) + 8))(*(_DWORD *)(this + 8));
  v2 = *(void **)(this + 12);
  *(_DWORD *)(this + 8) = 0;
  return sub_4885A6(v2);
}
