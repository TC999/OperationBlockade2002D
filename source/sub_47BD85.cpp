//----- (0047BD85) --------------------------------------------------------
#include <intrin.h>

unsigned int sub_47BD85()
{
  unsigned int v0; // kr00_4
  unsigned int v1; // kr04_4
  int v2; // edx
  int cpuInfo[4];

  v0 = __readeflags();
  __writeeflags(v0 ^ 0x200000);
  v1 = __readeflags();
  v2 = v0 ^ v1;
  if ( v0 != v1 )
  {
    __cpuid(cpuInfo, 1);
    return (cpuInfo[3] & 0x800000u) >> 23;
  }
  return v2;
}
