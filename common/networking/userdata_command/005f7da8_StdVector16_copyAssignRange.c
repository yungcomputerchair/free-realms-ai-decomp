// addr: 0x005f7da8
// name: StdVector16_copyAssignRange
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void StdVector16_copyAssignRange(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* Wrapper for copy-assigning an existing range of 16-byte vector elements.
                       Evidence: used by the vector assignment helper when destination capacity is
                       reused. */
  FUN_005f4f5d(param_1,param_2,param_3,param_2,param_2,0);
  return;
}

