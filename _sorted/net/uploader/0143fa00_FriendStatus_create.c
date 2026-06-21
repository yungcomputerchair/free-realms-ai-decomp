// addr: 0x0143fa00
// name: FriendStatus_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FriendStatus_create(void) */

void * FriendStatus_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a FriendStatus, returning null on allocation
                       failure. Evidence is the FriendStatus_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016986eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x60);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FriendStatus_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

