extern char aArrowup[];
extern char aArrowdown[];
extern char aSavedgames_0[];

//----- (0043B330) --------------------------------------------------------
bool __cdecl sub_43B330(_DWORD *self)
{
  const char *v2; // edi
  const char *v3; // ebx
  const char *v4; // eax
  bool result; // al

  v2 = sub_424350(self, aArrowup);
  v3 = sub_424350(self, aArrowdown);
  v4 = sub_424350(self, aSavedgames_0);
  *((_BYTE *)v2 + 44) = *((_DWORD *)v4 + 32) > 0;
  result = *((_DWORD *)v4 + 32) + *((_DWORD *)v4 + 30) < *((_DWORD *)v4 + 33);
  *((_BYTE *)v3 + 44) = result;
  return result;
}
