//----- (00449660) --------------------------------------------------------
int __thiscall sub_449660(void *this)
{
  int v2; // eax

  *(_DWORD *)this = &off_499A24;
  v2 = *((_DWORD *)this + 97);
  if ( !v2 )
    goto LABEL_5;
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
      return sub_4690A0(this);
LABEL_5:
    sub_422230(*((int **)this + 98));
    return sub_4690A0(this);
  }
  sub_403B70(*((_DWORD **)this + 100));
  return sub_4690A0(this);
}
