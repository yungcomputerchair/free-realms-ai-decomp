// addr: 0x01503d90
// name: CommandObject_Move_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Move_dtor(void * this) */

void __fastcall CommandObject_Move_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_Move: installs the CommandObject_Move vftable
                       and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b4b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Move::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Move::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

