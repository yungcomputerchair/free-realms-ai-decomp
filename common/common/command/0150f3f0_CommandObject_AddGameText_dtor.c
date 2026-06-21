// addr: 0x0150f3f0
// name: CommandObject_AddGameText_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_AddGameText_dtor(void * this) */

void __fastcall CommandObject_AddGameText_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_AddGameText: installs the
                       CommandObject_AddGameText vftable and chains to the CommandObject base
                       destructor. */
  puStack_8 = &LAB_016b6578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_AddGameText::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AddGameText::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

