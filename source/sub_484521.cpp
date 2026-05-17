//----- (00484521) --------------------------------------------------------
int __usercall sub_484521@<eax>(_DWORD *a1@<esi>)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edi
  int v4; // [esp+4h] [ebp-4h]

  result = a1[105];
  v2 = 0;
  v4 = 2 * a1[23] + 4;
  if ( (int)a1[25] > 0 )
  {
    v3 = (int *)(result + 68);
    do
    {
      result = (*(int (__cdecl **)(_DWORD *, int, int))(a1[1] + 4))(a1, 1, v4);
      *v3 = result;
      ++v2;
      ++v3;
    }
    while ( v2 < a1[25] );
  }
  return result;
}
