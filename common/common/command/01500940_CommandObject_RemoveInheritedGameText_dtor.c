// addr: 0x01500940
// name: CommandObject_RemoveInheritedGameText_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveInheritedGameText_dtor(void * this) */

void __fastcall CommandObject_RemoveInheritedGameText_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CommandObject_RemoveInheritedGameText: installs class vftables
                       and chains to CommandObject destruction. */
  puStack_8 = &LAB_016b42e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_RemoveInheritedGameText::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveInheritedGameText::vftable;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

