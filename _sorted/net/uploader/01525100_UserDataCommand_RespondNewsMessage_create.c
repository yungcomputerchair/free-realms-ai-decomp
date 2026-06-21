// addr: 0x01525100
// name: UserDataCommand_RespondNewsMessage_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * UserDataCommand_RespondNewsMessage_create(void) */

void * UserDataCommand_RespondNewsMessage_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x48 bytes, constructs UserDataCommand_RespondNewsMessage, and
                       returns the constructed instance. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b906b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x48);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UserDataCommand_RespondNewsMessage_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

