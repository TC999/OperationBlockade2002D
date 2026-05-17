//----- (00428E30) --------------------------------------------------------
int __thiscall sub_428E30(_DWORD *this)
{
  void *v1; // esi
  int result; // eax

  v1 = (void *)*this;
  if ( *this )
  {
    sub_428E50(*this);
    return sub_4885A6(v1);
  }
  return result;
}
