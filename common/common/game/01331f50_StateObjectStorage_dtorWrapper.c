// addr: 0x01331f50
// name: StateObjectStorage_dtorWrapper
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateObjectStorage_dtorWrapper(void * this) */

void __cdecl StateObjectStorage_dtorWrapper(void *this)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around 01331b60, which frees a vector-like member at offset +0x2c
                       and then destroys additional nested state/storage data. It is referenced from
                       multiple state-related thunks. */
  puStack_8 = &LAB_0167ab2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01331b60(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

