//----- (00403AE0) --------------------------------------------------------
void __thiscall sub_403AE0(void *self)
{
  if ( *((_DWORD *)self + 21) )
  {
    sub_422230();
    *((_DWORD *)self + 21) = 0;
  }
  sub_4885A6(*((LPVOID *)self + 19));
  *((_DWORD *)self + 19) = 0;
}
