// addr: 0x013b29c0
// name: LobbyCommand_create
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * LobbyCommand_create(void) */

void * LobbyCommand_create(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an 8-byte base LobbyCommand and constructs it, returning null on
                       allocation failure. Evidence is Mem_Alloc(8) followed by LobbyCommand_ctor.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016879cb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)LobbyCommand_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

