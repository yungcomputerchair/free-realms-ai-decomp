// addr: 0x014355b0
// name: SynchronizationCommand_create
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 SynchronizationCommand_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory helper that allocates 4 bytes and constructs a base
                       SynchronizationCommand if allocation succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696ecb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(4);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = SynchronizationCommand_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

