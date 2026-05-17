//----- (00403AE0) --------------------------------------------------------
void __thiscall sub_403AE0(void *this)
{
  if ( *((_DWORD *)this + 21) )
  {
    sub_422230();
    *((_DWORD *)this + 21) = 0;
  }
  sub_4885A6(*((LPVOID *)this + 19));
  *((_DWORD *)this + 19) = 0;
}
