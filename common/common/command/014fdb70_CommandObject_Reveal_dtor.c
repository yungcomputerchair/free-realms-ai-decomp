// addr: 0x014fdb70
// name: CommandObject_Reveal_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Reveal_dtor(void * this) */

void __fastcall CommandObject_Reveal_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_Reveal: installs class vftables and chains to
                       CommandObject destruction. */
  puStack_8 = &LAB_016b3bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Reveal::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Reveal::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

