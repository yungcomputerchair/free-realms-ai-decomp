// addr: 0x01500f30
// name: CommandObject_RemoveAttrModFilter_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveAttrModFilter_ctor(void * this, void * env) */

void * __thiscall CommandObject_RemoveAttrModFilter_ctor(void *this,void *env)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RemoveAttrModFilter command, installs vftables, sets the command
                       name, and stores target/environment fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_RemoveAttrModFilter::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveAttrModFilter::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_RemoveAttrModFilter",0x21);
  pvVar1 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar1;
  pvVar1 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar1;
  ExceptionList = local_c;
  return this;
}

