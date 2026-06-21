// addr: 0x014f9c60
// name: CommandObject_While_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_While_dtor(void * this) */

void __fastcall CommandObject_While_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_While: installs CommandObject_While vftables and
                       chains to the CommandObject base destructor. The vtable symbol identifies the
                       class. */
  puStack_8 = &LAB_016b31b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_While::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_While::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

