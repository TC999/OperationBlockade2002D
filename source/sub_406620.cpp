//----- (00406620) --------------------------------------------------------
int __cdecl sub_406620(_DWORD *self, int a2, void *a3, float *a4, float a5, int a6)
{
  int v6; // ebp
  int result; // eax
  int v9; // esi
  int v10[16]; // [esp+10h] [ebp-40h] BYREF

  v6 = a6;
  sub_4063E0(self, a2, a3, a4, a5, a6);
  for ( result = self[1] + 172 * a2; *(_BYTE *)result; result = self[1] + 172 * v9 )
  {
    v9 = *(_DWORD *)(result + 28);
    if ( v9 == -1 )
      break;
    sub_4063E0(self, v9, v10, (float *)&a6, a5, v6);
    sub_46B97C((int)(intptr_t)(a3), (int)(intptr_t)a3, (int)(intptr_t)v10);
  }
  return result;
}
