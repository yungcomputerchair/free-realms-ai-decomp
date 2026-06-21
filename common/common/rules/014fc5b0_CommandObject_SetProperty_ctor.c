// addr: 0x014fc5b0
// name: CommandObject_SetProperty_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_SetProperty_ctor(void * this, int propertyKey_, void *
   valueArg, void * environment) */

void * __thiscall
CommandObject_SetProperty_ctor(void *this,int propertyKey_,void *valueArg,void *environment)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_SetProperty, resolving target/source objects,
                       storing the property key, optionally copying a value, and logging
                       target/origin/key details. Leaves a flag byte cleared until a value is
                       provided. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b38d6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_SetProperty::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_SetProperty::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_SetProperty",0x19);
  pvVar2 = EvaluationEnvironment_resolveTarget(environment);
  *(void **)((int)this + 0x68) = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar2;
  *(int *)((int)this + 0x124) = propertyKey_;
  *(undefined1 *)((int)this + 0x134) = 0;
  EvaluationEnvironment_tracef
            (environment,"CommandObjectSetProperty %p %p (%d)",*(undefined4 *)((int)this + 0x68));
  if ((*(int *)((int)this + 0x68) != 0) && (*(int *)((int)this + 100) != 0)) {
    uVar3 = PlayElement_getId(*(undefined4 *)((int)this + 0x124));
    uVar3 = PlayElement_getId(uVar3);
    EvaluationEnvironment_tracef
              (environment,"CommandObjectSetProperty target: %d origincard: %d key: %d",uVar3);
  }
  if (valueArg != (void *)0x0) {
    FUN_013010e0(valueArg);
    FUN_01301590((void *)((int)this + 0x84));
    EvaluationEnvironment_tracefWithPrefix
              ((void *)((int)this + 0x84),"CommandObjectSetProperty value: ");
  }
  ExceptionList = local_c;
  return this;
}

