// addr: 0x0152b8b0
// name: UChatCommand_RequestSetFriendComment_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * UChatCommand_RequestSetFriendComment_create(void) */

void * UChatCommand_RequestSetFriendComment_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a UChatCommand_RequestSetFriendComment, returning
                       null on allocation failure. Evidence is the
                       UChatCommand_RequestSetFriendComment_ctor or vtable-named constructor callee.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba45b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x98);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UChatCommand_RequestSetFriendComment_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

