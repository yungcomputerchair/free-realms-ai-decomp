// addr: 0x013c0a60
// name: FUN_013c0a60
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_013c0a60(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x84-byte object and constructs it with FUN_013c0860. Exact class
                       is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016891db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x84);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UChatCommand_RequestFriendConfirmReciprocate_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

