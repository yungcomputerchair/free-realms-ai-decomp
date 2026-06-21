// addr: 0x0045957c
// name: CRT_floorf_wrapper_0045957c
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float CRT_floorf_wrapper_0045957c(float input_) */

float __cdecl CRT_floorf_wrapper_0045957c(float input_)

{
  double dVar1;
  
                    /* Converts a float to double, calls the shared CRT floor implementation, and
                       returns the result rounded back to float. */
  dVar1 = CRT_floor((double)input_);
  return (float)dVar1;
}

