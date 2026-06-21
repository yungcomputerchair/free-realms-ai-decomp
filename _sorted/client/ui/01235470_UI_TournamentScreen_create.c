// addr: 0x01235470
// name: UI_TournamentScreen_create
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * UI_TournamentScreen_create(void) */

void * UI_TournamentScreen_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x28 bytes and constructs a UI::TournamentScreen, returning null on
                       allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0165222b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UI_TournamentScreen_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

