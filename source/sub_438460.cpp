//----- (00438460) --------------------------------------------------------
int __cdecl sub_438460(_DWORD **self, int a2, float a3, float a4, float a5)
{
  int v6; // ebp
  int *v7; // ebx
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+18h] [ebp+8h]

  v6 = 0;
  *(float *)&v11 = a3 * 19.0;
  if ( (int)self[35 * a2 + 169] > 0 )
  {
    v7 = (int *)&self[35 * a2 + 149];
    do
    {
      sub_4074B0(self[147], *v7);
      sub_407600(self[147], *v7, 0, 0, v11);
      ++v6;
      ++v7;
    }
    while ( v6 < (int)self[35 * a2 + 169] );
  }
  sub_4074B0(self[147], (int)self[35 * a2 + 170]);
  if ( a4 == 0.0 )
  {
    sub_408640(self[35 * a2 + 170], 0, 0);
  }
  else
  {
    sub_408640(self[35 * a2 + 170], 1, 0);
    *(float *)&v9 = *(float *)&v11 - 110.0 + 110.0 * a4;
    sub_407600(self[147], (int)self[35 * a2 + 170], 0, 0, v9);
  }
  sub_4074B0(self[147], (int)self[35 * a2 + 171]);
  if ( a5 == 0.0 )
    return sub_408640(self[35 * a2 + 171], 0, 0);
  sub_408640(self[35 * a2 + 171], 1, 0);
  *(float *)&v10 = *(float *)&v11 - 110.0 + 110.0 * a5;
  return sub_407600(self[147], (int)self[35 * a2 + 171], 0, 0, v10);
}
