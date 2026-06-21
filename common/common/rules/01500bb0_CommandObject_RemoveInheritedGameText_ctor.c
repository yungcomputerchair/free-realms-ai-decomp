// addr: 0x01500bb0
// name: CommandObject_RemoveInheritedGameText_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveInheritedGameText_ctor(void * this, void * env) */

void * __thiscall CommandObject_RemoveInheritedGameText_ctor(void *this,void *env)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RemoveInheritedGameText command, installs vftables, sets the
                       command name, and stores an environment-derived field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_RemoveInheritedGameText::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveInheritedGameText::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_RemoveInheritedGameText",0x25);
  pvVar1 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar1;
  ExceptionList = local_c;
  return this;
}

