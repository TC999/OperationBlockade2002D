extern char aScoring[];

//----- (0043D7C0) --------------------------------------------------------
const char **__cdecl sub_43D7C0(const char **self, int a2)
{
  int v3; // esi
  const char **v4; // ebx
  char Buffer[64]; // [esp+10h] [ebp-4Ch] BYREF
  int v7; // [esp+58h] [ebp-4h]

  sub_4233C0((uint32*)self, a2, aScoring);
  v7 = 0;
  *self = (const char *)&off_499940;
  v3 = 1;
  v4 = self + 21;
  do
  {
    sprintf(Buffer, "ScoreIcon%d", v3);
    *(v4 - 4) = sub_424350((_DWORD*)self, Buffer);
    sprintf(Buffer, "ScoreIcon%dName", v3);
    *v4 = sub_424350((_DWORD*)self, Buffer);
    sprintf(Buffer, "ScoreIcon%dText", v3);
    v4[4] = sub_424350((_DWORD*)self, Buffer);
    ++v4;
    ++v3;
  }
  while ( v3 - 1 < 4 );
  self[11] = 0;
  return self;
}
