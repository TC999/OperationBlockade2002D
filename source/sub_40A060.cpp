extern char File[];
extern char aW[];
extern char aFailedToOpenEr[];

//----- (0040A060) --------------------------------------------------------
char *sub_40A060()
{
  byte_4F5B00 = 0;
  dword_4F5B04 = (int)fopen(File, aW);
  sub_4282E0(dword_4F5B04 != 0, aFailedToOpenEr, File);
  return &byte_4F5B00;
}
