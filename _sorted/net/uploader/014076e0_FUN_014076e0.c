// addr: 0x014076e0
// name: FUN_014076e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * FUN_014076e0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x24-byte object and constructing it with FUN_014075e0.
                       Type not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169176b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = AccountCommand_SetChallengeStatus_ctor(puVar1);
  }
  ExceptionList = local_c;
  return puVar1;
}

