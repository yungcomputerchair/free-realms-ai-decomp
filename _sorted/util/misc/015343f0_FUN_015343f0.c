// addr: 0x015343f0
// name: FUN_015343f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_015343f0(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor thunk for an unknown user-data/object type; calls
                       FUN_01533d30 cleanup and frees this when requested. */
  UserDataCommandPayload_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

