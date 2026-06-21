// addr: 0x005f4f99
// name: StdVector16_uninitializedCopyRange
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void StdVector16_uninitializedCopyRange
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* Wrapper for uninitialized-copying a range of 16-byte vector elements into
                       destination storage. Evidence: vector assignment uses it when
                       allocating/replacing storage. */
  FUN_005f3dbb(param_1,param_2,param_3,param_4,param_2,0);
  return;
}

