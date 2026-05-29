//----- (00429240) --------------------------------------------------------
int __thiscall sub_429240(int self, int a2)
{
  int v2; // esi
  Concurrency::details::TaskStack *v4; // eax
  Concurrency::details::TaskStack *v5; // ebp
  int v6; // esi
  Concurrency::details::TaskStack *v7; // edi
  int v8; // esi
  int v9; // edx
  int v10; // eax
  int result; // eax

  v2 = a2 + 1;
  if ( a2 + 1 >= 8 )
  {
    if ( v2 < 2 * *(_DWORD *)(self + 8) )
      v2 = 2 * *(_DWORD *)(self + 8);
  }
  else
  {
    v2 = 8;
  }
  *(_DWORD *)(self + 8) = v2;
  v4 = (Concurrency::details::TaskStack *)operator new(272 * v2);
  v5 = v4;
  if ( v4 )
  {
    v6 = v2 - 1;
    v7 = v4;
    if ( v6 >= 0 )
    {
      v8 = v6 + 1;
      do
      {
        Concurrency::details::TaskStack::TaskStack(v7);
        v7 = (Concurrency::details::TaskStack *)((char *)v7 + 272);
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v5 = 0;
  }
  v9 = 0;
  if ( *(int *)(self + 4) > 0 )
  {
    v10 = 0;
    do
    {
      ++v9;
      qmemcpy((char *)v5 + v10, (const void *)(*(_DWORD *)self + v10), 0x110u);
      v10 += 272;
    }
    while ( v9 < *(_DWORD *)(self + 4) );
  }
  result = sub_4885A6(*(LPVOID *)self);
  *(_DWORD *)self = v5;
  return result;
}
