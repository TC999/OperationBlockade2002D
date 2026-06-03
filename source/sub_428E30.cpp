//----- (00428E30) --------------------------------------------------------
int __cdecl sub_428E30(_DWORD *self)
{
  void *v1; // esi
  int result; // eax

  v1 = (void *)*self;
  if ( *self )
  {
    sub_428E50((LPVOID*)*self);
    sub_4885A6(v1);
    return 0;
  }
  return result;
}
