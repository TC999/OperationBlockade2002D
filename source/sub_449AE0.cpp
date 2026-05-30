//----- (00449AE0) --------------------------------------------------------
_DWORD *__cdecl sub_449AE0(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = &off_499A3C;
  return result;
}
