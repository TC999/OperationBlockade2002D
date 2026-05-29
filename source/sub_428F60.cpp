//----- (00428F60) --------------------------------------------------------
int __thiscall sub_428F60(int *self)
{
  int v1; // eax

  v1 = *self;
  if ( *(_DWORD *)(*self + 288) )
    return *(_DWORD *)(v1 + 292);
  else
    return sub_42A5C0((void *)(v1 + 284));
}
