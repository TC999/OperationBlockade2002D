//----- (00428F60) --------------------------------------------------------
int __thiscall sub_428F60(int *this)
{
  int v1; // eax

  v1 = *this;
  if ( *(_DWORD *)(*this + 288) )
    return *(_DWORD *)(v1 + 292);
  else
    return sub_42A5C0((void *)(v1 + 284));
}
