// addr: 0x0143e610
// name: LobbyCommand_AddGroups_dtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddGroups_dtor(void * this) */

void __fastcall LobbyCommand_AddGroups_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructs LobbyCommand_AddGroups by freeing its vector storage at fields 3-5
                       and then calling LobbyCommand_dtor. */
  puStack_8 = &LAB_01698393;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_AddGroups::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

