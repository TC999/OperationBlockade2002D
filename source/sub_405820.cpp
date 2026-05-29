//----- (00405820) --------------------------------------------------------
BOOL __thiscall sub_405820(FILE **self, FILE **a2)
{
  FILE **Buffer; // [esp+0h] [ebp-4h] BYREF

  Buffer = self;
  return sub_4057E0(self, &Buffer) && Buffer == a2;
}
