//----- (00406C20) --------------------------------------------------------
int __thiscall sub_406C20(void *this)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax

  *(_DWORD *)this = &off_4990E8;
  v2 = 0;
  if ( *((int *)this + 5) > 0 )
  {
    v3 = 0;
    do
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 6) + v3 + 88) )
        sub_409A00(*(_DWORD *)(*((_DWORD *)this + 6) + v3 + 88));
      ++v2;
      v3 += 96;
    }
    while ( v2 < *((_DWORD *)this + 5) );
  }
  result = sub_4885A6(*((LPVOID *)this + 6));
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_499040;
  return result;
}
