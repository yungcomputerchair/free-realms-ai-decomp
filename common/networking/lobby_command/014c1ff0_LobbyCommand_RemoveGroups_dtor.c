// addr: 0x014c1ff0
// name: LobbyCommand_RemoveGroups_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveGroups_dtor(void * this) */

void __fastcall LobbyCommand_RemoveGroups_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_RemoveGroups; it releases an owned buffer/list
                       and then delegates to base cleanup. */
  puStack_8 = &LAB_016aa253;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_RemoveGroups::vftable;
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

