//----- (00449660) --------------------------------------------------------
int __cdecl sub_449660(void *self)
{
  int v2; // eax

  *(_DWORD *)self = (uint32)(uintptr_t)(&off_499A24);
  v2 = *((_DWORD *)self + 97);
  if ( !v2 )
    goto LABEL_5;
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
      return sub_4690A0(self);
LABEL_5:
    sub_422230(*((int **)self + 98));
    return sub_4690A0(self);
  }
  sub_403B70(*((_DWORD **)self + 100));
  return sub_4690A0(self);
}
