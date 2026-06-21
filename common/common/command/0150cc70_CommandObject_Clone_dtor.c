// addr: 0x0150cc70
// name: CommandObject_Clone_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Clone_dtor(void * this) */

void __fastcall CommandObject_Clone_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_Clone: installs the CommandObject_Clone vftable
                       and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b5e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Clone::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Clone::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

