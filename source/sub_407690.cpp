//----- (00407690) --------------------------------------------------------
int __thiscall sub_407690(int self, int a2, _DWORD *a3)
{
  int result; // eax

  if ( a2 < 0 || a2 >= *(_DWORD *)(self + 20) )
  {
    result = (int)a3;
    a3[14] = 0;
    a3[13] = 0;
    a3[12] = 0;
    a3[11] = 0;
    a3[9] = 0;
    a3[8] = 0;
    a3[7] = 0;
    a3[6] = 0;
    a3[4] = 0;
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    a3[15] = 1065353216;
    a3[10] = 1065353216;
    a3[5] = 1065353216;
    *a3 = 1065353216;
  }
  else
  {
    sub_406F00((float *)self, a2);
    result = 96 * a2;
    qmemcpy(a3, (const void *)(96 * a2 + *(_DWORD *)(self + 24) + 16), 0x40u);
  }
  return result;
}
