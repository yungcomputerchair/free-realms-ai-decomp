// addr: 0x0150d9d0
// name: CommandObject_Attach_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Attach_dtor(void * this) */

void __fastcall CommandObject_Attach_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_Attach: installs the CommandObject_Attach
                       vftable and chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b60b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Attach::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Attach::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

