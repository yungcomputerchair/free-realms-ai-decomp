// addr: 0x0150d8a0
// name: CommandObject_CancelCommand_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_CancelCommand_ctor(void * this, void * env) */

void * __thiscall CommandObject_CancelCommand_ctor(void *this,void *env)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CancelCommand command, installs vftables, sets the name,
                       initializes target/environment fields, and clears a flag byte. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_CancelCommand::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_CancelCommand::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_CancelCommand",0x1b);
  pvVar1 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar1;
  pvVar1 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar1;
  *(undefined1 *)((int)this + 0x81) = 0;
  ExceptionList = local_c;
  return this;
}

