//----- (0046D89A) --------------------------------------------------------
int __cdecl sub_46D89A(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        BOOL a9,
        int a10,
        int a11,
        int a12,
        int a13,
        void *a14,
        int *a15)
{
  int v15; // eax
  int v16; // esi
  _BYTE v18[8]; // [esp+4h] [ebp-10h] BYREF
  int v19; // [esp+Ch] [ebp-8h]
  int v20; // [esp+10h] [ebp-4h]

  sub_472AF9(v18);
  v15 = sub_472B0B(v18, a3, 0);
  if ( v15 >= 0 )
    v15 = sub_46D461(a1, a2, v19, v20, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v16 = v15;
  sub_472C9E(v18);
  return v16;
}
