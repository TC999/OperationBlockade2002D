//----- (0040EB70) --------------------------------------------------------
void __cdecl sub_40EB70(unsigned int *a1)
{
  EnterCriticalSection(lpCriticalSection);
  sub_40EA70(a1);
  LeaveCriticalSection(lpCriticalSection);
}
