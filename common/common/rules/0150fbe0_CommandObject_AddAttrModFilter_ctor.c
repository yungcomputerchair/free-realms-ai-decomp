// addr: 0x0150fbe0
// name: CommandObject_AddAttrModFilter_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_AddAttrModFilter_ctor(void * this, int filterId_, void *
   filterSpec, void * env) */

void * __thiscall
CommandObject_AddAttrModFilter_ctor(void *this,int filterId_,void *filterSpec,void *env)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AddAttrModFilter command, installs vftables, copies filter
                       data, stores the filter id, and initializes context fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b66f6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_AddAttrModFilter::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AddAttrModFilter::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_AddAttrModFilter",0x1e);
  FUN_013010e0(filterSpec);
  pvVar2 = EvaluationEnvironment_getGame(env);
  *(int *)((int)this + 0x130) = filterId_;
  *(void **)((int)this + 0x30) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  ExceptionList = local_c;
  return this;
}

