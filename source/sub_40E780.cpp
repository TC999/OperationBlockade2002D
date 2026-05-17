//----- (0040E780) --------------------------------------------------------
char __thiscall sub_40E780(LPVOID *this, FILE *Stream)
{
  FILE *v2; // ebp
  int v4; // edi

  v2 = Stream;
  sub_4898CA(this + 2, 1u, 1u, Stream);
  v4 = 0;
  Stream = 0;
  sub_4898CA(&Stream, 4u, 1u, v2);
  if ( Stream != *this )
  {
    sub_4885A6(this[1]);
    this[1] = operator new(8 * (_DWORD)Stream);
    *this = Stream;
  }
  if ( (int)*this <= 0 )
    return 1;
  do
  {
    sub_4898CA((char *)this[1] + 8 * v4, 4u, 1u, v2);
    sub_4898CA((char *)this[1] + 8 * v4++ + 4, 4u, 1u, v2);
  }
  while ( v4 < (int)*this );
  return 1;
}
