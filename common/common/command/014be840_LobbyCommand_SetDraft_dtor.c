// addr: 0x014be840
// name: LobbyCommand_SetDraft_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraft_dtor(void * this) */

void __fastcall LobbyCommand_SetDraft_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_SetDraft, chaining through lobby command base
                       cleanup. */
  puStack_8 = &LAB_016a98a3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SetDraft::vftable;
  local_4 = 0;
  FUN_012c2de0(uVar1);
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

