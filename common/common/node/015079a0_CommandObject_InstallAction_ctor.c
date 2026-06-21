// addr: 0x015079a0
// name: CommandObject_InstallAction_ctor
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_InstallAction_ctor(void * this, void * environment, void
   * baseArg) */

void * __thiscall CommandObject_InstallAction_ctor(void *this,void *environment,void *baseArg)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObject_InstallAction, initializes the base CommandObject,
                       stores the environment/argument at offset 0x124, installs vtables, and
                       assigns the command name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b52c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,baseArg);
  local_4 = 0;
  *(void **)((int)this + 0x124) = environment;
  *(undefined ***)this = CommandObject_InstallAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_InstallAction::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_InstallAction",0x1b);
  ExceptionList = local_c;
  return this;
}

