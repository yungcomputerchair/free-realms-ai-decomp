// addr: 0x01324100
// name: FUN_01324100
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01324100(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH cleanup wrapper around FUN_013239f0 for an unknown object/member. No
                       class evidence. */
  puStack_8 = &LAB_016791cb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_013239f0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

