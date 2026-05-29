//----- (00403F50) --------------------------------------------------------
bool __thiscall sub_403F50(_DWORD *self)
{
  char v2; // al
  char v3; // al
  int Buffer; // [esp+4h] [ebp-4h] BYREF

  v2 = sub_4057E0(&Buffer);
  self[6] = -1;
  if ( !v2 )
    goto LABEL_7;
  if ( (Buffer & 0xDAFA0000) == 0xDAFA0000 )
    self[6] = (unsigned __int16)Buffer;
  if ( self[6] != -1 && (unsigned __int8)sub_4057E0(self + 7) )
    v3 = 1;
  else
LABEL_7:
    v3 = 0;
  if ( !self[13] )
    self[2] = self[7];
  return v3 && (unsigned __int8)sub_4057E0(self + 9) && (unsigned __int8)sub_4057E0(self + 10);
}
