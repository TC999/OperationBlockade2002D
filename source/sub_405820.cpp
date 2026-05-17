//----- (00405820) --------------------------------------------------------
BOOL __thiscall sub_405820(FILE **this, FILE **a2)
{
  FILE **Buffer; // [esp+0h] [ebp-4h] BYREF

  Buffer = this;
  return sub_4057E0(this, &Buffer) && Buffer == a2;
}
