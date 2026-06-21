// addr: 0x015004e0
// name: CommandObject_RemoveInstalledAction_ctor
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveInstalledAction_ctor(void * this, void * baseArg,
   void * actionArg) */

void * __thiscall CommandObject_RemoveInstalledAction_ctor(void *this,void *baseArg,void *actionArg)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObject_RemoveInstalledAction, initializes its
                       CommandObject base, stores the action argument at offset 0x124, installs
                       vtables, and assigns the command name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,baseArg);
  local_4 = 0;
  *(void **)((int)this + 0x124) = actionArg;
  *(undefined ***)this = CommandObject_RemoveInstalledAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveInstalledAction::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_RemoveInstalledAction",0x23);
  ExceptionList = local_c;
  return this;
}

