//----- (0043D7C0) --------------------------------------------------------
const char **__thiscall sub_43D7C0(const char **this, int a2)
{
  int v3; // esi
  const char **v4; // ebx
  char Buffer[64]; // [esp+10h] [ebp-4Ch] BYREF
  int v7; // [esp+58h] [ebp-4h]

  sub_4233C0(this, a2, aScoring);
  v7 = 0;
  *this = (const char *)&off_499940;
  v3 = 1;
  v4 = this + 21;
  do
  {
    sprintf(Buffer, "ScoreIcon%d", v3);
    *(v4 - 4) = sub_424350(this, Buffer);
    sprintf(Buffer, "ScoreIcon%dName", v3);
    *v4 = sub_424350(this, Buffer);
    sprintf(Buffer, "ScoreIcon%dText", v3);
    v4[4] = sub_424350(this, Buffer);
    ++v4;
    ++v3;
  }
  while ( v3 - 1 < 4 );
  this[11] = 0;
  return this;
}
