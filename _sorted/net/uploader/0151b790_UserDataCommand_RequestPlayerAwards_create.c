// addr: 0x0151b790
// name: UserDataCommand_RequestPlayerAwards_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * UserDataCommand_RequestPlayerAwards_create(void) */

void * UserDataCommand_RequestPlayerAwards_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a UserDataCommand_RequestPlayerAwards, returning
                       null on allocation failure. Evidence is the
                       UserDataCommand_RequestPlayerAwards_ctor or vtable-named constructor callee.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7dcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UserDataCommand_RequestPlayerAwards_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

