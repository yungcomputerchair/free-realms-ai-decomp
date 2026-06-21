// addr: 0x01529e00
// name: UChatCommand_OnReceiveFriendConfirmRequest_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * UChatCommand_OnReceiveFriendConfirmRequest_create(void) */

void * UChatCommand_OnReceiveFriendConfirmRequest_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x44 bytes, constructs UChatCommand_OnReceiveFriendConfirmRequest,
                       and returns the constructed instance. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b9e1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x44);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UChatCommand_OnReceiveFriendConfirmRequest_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

