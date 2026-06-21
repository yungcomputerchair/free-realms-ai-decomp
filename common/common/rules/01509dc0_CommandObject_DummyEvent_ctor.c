// addr: 0x01509dc0
// name: CommandObject_DummyEvent_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_DummyEvent_ctor(void * this, void * environment) */

void * __thiscall CommandObject_DummyEvent_ctor(void *this,void *environment)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_DummyEvent, initializes the base CommandObject,
                       resolves a default Card target, and records source/origin pointers. The class
                       name is directly assigned into the CommandObject name field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5898;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_DummyEvent::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DummyEvent::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_DummyEvent",0x18);
  uVar6 = 0;
  pTVar5 = &Card::RTTI_Type_Descriptor;
  pTVar4 = &PlayElement::RTTI_Type_Descriptor;
  uVar3 = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget(environment);
  uVar3 = FUN_00d8d382(pvVar2,uVar3,pTVar4,pTVar5,uVar6,uVar1);
  *(undefined4 *)((int)this + 0x68) = uVar3;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar2;
  ExceptionList = local_c;
  return this;
}

