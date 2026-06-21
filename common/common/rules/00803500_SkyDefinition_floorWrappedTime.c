// addr: 0x00803500
// name: SkyDefinition_floorWrappedTime
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: float SkyDefinition_floorWrappedTime(float time_) */

float __cdecl SkyDefinition_floorWrappedTime(float time_)

{
  double dVar1;
  
                    /* Converts a float time to the previous wrapped interval by multiplying by a
                       reciprocal constant, flooring, and multiplying by the period constant. */
  dVar1 = CRT_floor((double)(time_ * DAT_017f1948));
  return (float)dVar1 * _DAT_017f1944;
}

