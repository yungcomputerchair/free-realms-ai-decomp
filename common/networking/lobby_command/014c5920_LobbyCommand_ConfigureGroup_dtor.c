// addr: 0x014c5920
// name: LobbyCommand_ConfigureGroup_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ConfigureGroup_dtor(void * this) */

void __fastcall LobbyCommand_ConfigureGroup_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_ConfigureGroup; it releases an owned pointer at
                       field 2 through its virtual deleting destructor, nulls it, then calls the
                       base destructor. Evidence is LobbyCommand_ConfigureGroup::vftable and the
                       virtual call with delete flag 1. */
  puStack_8 = &LAB_016aacb8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_ConfigureGroup::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 8))(1,uVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

