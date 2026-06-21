// addr: 0x01351d40
// name: FUN_01351d40
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01351d40(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0167d4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = Mem_Alloc(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  ExceptionList = local_10;
  return;
}

