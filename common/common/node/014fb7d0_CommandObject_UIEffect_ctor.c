// addr: 0x014fb7d0
// name: CommandObject_UIEffect_ctor
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_UIEffect_ctor(void * this, void * environment, void *
   baseArg) */

void * __thiscall CommandObject_UIEffect_ctor(void *this,void *environment,void *baseArg)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObject_UIEffect, initializes the base CommandObject,
                       stores the environment/argument at offset 0x124, installs the UIEffect
                       vtables, and sets the command name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,baseArg);
  local_4 = 0;
  *(void **)((int)this + 0x124) = environment;
  *(undefined ***)this = CommandObject_UIEffect::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_UIEffect::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_UIEffect",0x16);
  ExceptionList = local_c;
  return this;
}

