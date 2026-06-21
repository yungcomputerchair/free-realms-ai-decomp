// addr: 0x014be590
// name: LobbyCommand_SetDraftedCards_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetDraftedCards_ctor(void * this) */

void * __fastcall LobbyCommand_SetDraftedCards_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SetDraftedCards by installing its vtable,
                       initializing a container member, and clearing a field. Evidence is
                       LobbyCommand_SetDraftedCards::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9813;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = LobbyCommand_SetDraftedCards::vftable;
  FUN_005258fb();
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

