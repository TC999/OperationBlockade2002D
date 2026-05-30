//----- (0040E780) --------------------------------------------------------
char __cdecl sub_40E780(LPVOID *self, FILE *Stream)
{
  FILE *v2; // ebp
  int v4; // edi

  v2 = Stream;
  sub_4898CA(self + 2, 1u, 1u, Stream);
  v4 = 0;
  Stream = 0;
  sub_4898CA(&Stream, 4u, 1u, v2);
  if ( Stream != *self )
  {
    sub_4885A6(self[1]);
    self[1] = operator new(8 * (_DWORD)Stream);
    *self = Stream;
  }
  if ( (int)*self <= 0 )
    return 1;
  do
  {
    sub_4898CA((char *)self[1] + 8 * v4, 4u, 1u, v2);
    sub_4898CA((char *)self[1] + 8 * v4++ + 4, 4u, 1u, v2);
  }
  while ( v4 < (int)*self );
  return 1;
}
