//----- (00406620) --------------------------------------------------------
int __thiscall sub_406620(_DWORD *this, int a2, void *a3, float *a4, float a5, int a6)
{
  int v6; // ebp
  int result; // eax
  int v9; // esi
  int v10[16]; // [esp+10h] [ebp-40h] BYREF

  v6 = a6;
  sub_4063E0(this, a2, a3, a4, a5, a6);
  for ( result = this[1] + 172 * a2; *(_BYTE *)result; result = this[1] + 172 * v9 )
  {
    v9 = *(_DWORD *)(result + 28);
    if ( v9 == -1 )
      break;
    sub_4063E0(this, v9, v10, (float *)&a6, a5, v6);
    sub_46B97C(a3, a3, v10);
  }
  return result;
}
