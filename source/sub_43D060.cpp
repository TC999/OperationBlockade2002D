extern char aHelptext1[];
extern char aAirStrikeTorpe[];
extern char aHelptext2[];
extern char aQAWTEBSpaceMou[];

//----- (0043D060) --------------------------------------------------------
int __cdecl sub_43D060(_DWORD *self)
{
  const char *v2; // eax
  const char *v3; // eax

  v2 = sub_424350(self, aHelptext1);
  sub_421110(*((LPVOID **)v2 + 28), aAirStrikeTorpe);
  v3 = sub_424350(self, aHelptext2);
  return 0;
}
