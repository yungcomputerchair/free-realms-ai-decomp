// addr: 0x014f9750
// name: FUN_014f9750
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_014f9750(undefined4 *param_1,byte param_2)

{
                    /* Scalar deleting destructor thunk for an unknown object; calls FUN_014f9580
                       cleanup and frees this when requested. */
  PersistentBase_ctor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

