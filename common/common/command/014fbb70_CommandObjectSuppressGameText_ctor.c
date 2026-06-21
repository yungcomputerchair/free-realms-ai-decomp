// addr: 0x014fbb70
// name: CommandObjectSuppressGameText_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectSuppressGameText.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectSuppressGameText_ctor(void * this, void * env) */

void * __thiscall CommandObjectSuppressGameText_ctor(void *this,void *env)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObjectSuppressGameText, installs its vtable/name, resolves
                       the target Card from the evaluation environment, and initializes player/game
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3728;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_SuppressGameText::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_SuppressGameText::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_SuppressGameText",0x1e);
  uVar7 = 0;
  pTVar6 = &Card::RTTI_Type_Descriptor;
  pTVar5 = &PlayElement::RTTI_Type_Descriptor;
  uVar4 = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget(env);
  iVar3 = FUN_00d8d382(pvVar2,uVar4,pTVar5,pTVar6,uVar7,uVar1);
  if (iVar3 == 0) {
    FUN_012f5a60("target","..\\common\\common\\command\\CommandObjectSuppressGameText.cpp",0x16);
  }
  *(int *)((int)this + 0x68) = iVar3;
  pvVar2 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar2;
  pvVar2 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar2;
  ExceptionList = local_c;
  return this;
}

