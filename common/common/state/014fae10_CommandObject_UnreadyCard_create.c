// addr: 0x014fae10
// name: CommandObject_UnreadyCard_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int CommandObject_UnreadyCard_create(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a CommandObject_UnreadyCard-sized object, runs its constructor
                       thunk, and returns the adjusted object pointer. This is a factory/allocator
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b34eb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x138);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CommandObject_UnreadyCard_ctor(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return iVar2 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

