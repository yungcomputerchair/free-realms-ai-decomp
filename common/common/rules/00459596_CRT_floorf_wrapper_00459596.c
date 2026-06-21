// addr: 0x00459596
// name: CRT_floorf_wrapper_00459596
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float CRT_floorf_wrapper_00459596(float input_) */

float __cdecl CRT_floorf_wrapper_00459596(float input_)

{
  double dVar1;
  
                    /* Duplicate float adapter for the shared CRT floor implementation, returning
                       the floored result as a float. */
  dVar1 = CRT_floor((double)input_);
  return (float)dVar1;
}

