// addr: 0x0150f6b0
// name: CommandObject_AddGameText_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_AddGameText_ctor(void * this, void * env) */

void * __thiscall CommandObject_AddGameText_ctor(void *this,void *env)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AddGameText command, installs vftables, sets the command name,
                       and stores an environment-derived field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b65d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_AddGameText::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AddGameText::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_AddGameText",0x19);
  pvVar1 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar1;
  ExceptionList = local_c;
  return this;
}

