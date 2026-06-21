// addr: 0x005f7d89
// name: StdVector16_uninitializedCopyThunk
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
StdVector16_uninitializedCopyThunk
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
                    /* Thin thunk forwarding arguments to a lower-level copy-construction routine
                       for 16-byte vector elements. Evidence: it only reorders parameters for
                       FUN_005f4f35 and is called by the vector constructor helper. */
  FUN_005f4f35(param_2,param_3,param_4,param_5,param_6,param_1);
  return;
}

