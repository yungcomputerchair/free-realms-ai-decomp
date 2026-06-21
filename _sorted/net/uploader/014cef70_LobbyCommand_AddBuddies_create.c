// addr: 0x014cef70
// name: LobbyCommand_AddBuddies_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * LobbyCommand_AddBuddies_create(void) */

void * LobbyCommand_AddBuddies_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a LobbyCommand_AddBuddies, returning null on
                       allocation failure. Evidence is the LobbyCommand_AddBuddies_ctor callee or
                       vtable-named constructor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016abd0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_AddBuddies_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

