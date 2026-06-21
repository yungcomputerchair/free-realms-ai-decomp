// addr: 0x01304f90
// name: StdVector12_copyRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector12_copyRange(void * param_1, void * param_2, void * param_3) */

void __cdecl StdVector12_copyRange(void *param_1,void *param_2,void *param_3)

{
                    /* Copies a range of 12-byte records into destination storage using the raw copy
                       helper. Evidence: forwards begin/end/destination to 01303ca0, which copies
                       three dwords per element. */
  Std_copy_12byteRecords(param_1,param_2,param_3,param_2,param_2,0);
  return;
}

