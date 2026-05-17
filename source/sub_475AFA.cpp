//----- (00475AFA) --------------------------------------------------------
void __thiscall sub_475AFA(int this, int a2, int a3, void *a4)
{
  if ( sub_4757B0(this, *(_DWORD *)(this + 4148) + a2, *(_DWORD *)(this + 4160) + a3, 1) >= 0 )
  {
    qmemcpy(
      a4,
      (const void *)(*(_DWORD *)(this + 4196) + 16 * (*(_DWORD *)(this + 4144) - *(_DWORD *)(this + 4200))),
      16 * *(_DWORD *)(this + 4176));
    if ( *(_DWORD *)(this + 16) )
      sub_4735E3((float *)this, (float *)a4);
  }
}
