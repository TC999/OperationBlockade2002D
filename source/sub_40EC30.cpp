//----- (0040EC30) --------------------------------------------------------
void sub_40EC30()
{
  sub_488CEE((void *)(DWORD_PTR)dword_4F5C8C);
  dword_4F5C8C = 0;
  DeleteCriticalSection(lpCriticalSection);
}
