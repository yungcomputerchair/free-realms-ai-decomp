// addr: 0x014ffc00
// name: CommandObject_RemoveProperty_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_RemoveProperty_ctor(void * this, bool useCurrentTarget_,
   void * propertySpec, void * env) */

void * __thiscall
CommandObject_RemoveProperty_ctor(void *this,bool useCurrentTarget_,void *propertySpec,void *env)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RemoveProperty command, selecting target source, copying
                       optional property data, and initializing command fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b40b4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_RemoveProperty::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_RemoveProperty::vftable;
  FUN_012fa910(uVar1);
  local_4._0_1_ = 1;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_RemoveProperty",0x1c);
  if (useCurrentTarget_) {
    pvVar2 = EvaluationEnvironment_resolveTarget(env);
  }
  else {
    pvVar2 = EvaluationEnvironment_getOriginCard(env);
  }
  *(void **)((int)this + 0x68) = pvVar2;
  pvVar2 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  if (propertySpec != (void *)0x0) {
    FUN_013010e0(propertySpec);
    FUN_01301590((int)this + 0x84);
  }
  *(undefined1 *)((int)this + 0x130) = 0;
  ExceptionList = local_c;
  return this;
}

