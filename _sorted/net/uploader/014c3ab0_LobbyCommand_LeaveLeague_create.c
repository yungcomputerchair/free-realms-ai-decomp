// addr: 0x014c3ab0
// name: LobbyCommand_LeaveLeague_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * LobbyCommand_LeaveLeague_create(void) */

void * LobbyCommand_LeaveLeague_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x20 bytes, constructs LobbyCommand_LeaveLeague, and returns it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x20);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_LeaveLeague_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

