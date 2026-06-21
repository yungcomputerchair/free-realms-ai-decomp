// addr: 0x01505320
// name: CommandObjectModifyProperty_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectModifyProperty.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectModifyProperty_ctor(void * this, bool useTargetFromEnv,
   void * property, void * valueData, void * optionalValue, void * environment) */

void * __thiscall
CommandObjectModifyProperty_ctor
          (void *this,bool useTargetFromEnv,void *property,void *valueData,void *optionalValue,
          void *environment)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int *this_00;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [128];
  void *pvStack_20;
  undefined1 uStack_18;
  undefined3 uStack_17;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_ModifyProperty: selects the target, stores
                       property/value data, creates the SG attribute modifier, and logs setup
                       completion. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4d66;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff48);
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_ModifyProperty::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_ModifyProperty::vftable;
  FUN_012fa910();
  local_4._0_1_ = 1;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_ModifyProperty",0x1c);
  if (useTargetFromEnv) {
    pvVar3 = EvaluationEnvironment_resolveTarget(environment);
  }
  else {
    pvVar3 = EvaluationEnvironment_getOriginCard(environment);
  }
  *(void **)((int)this + 0x68) = pvVar3;
  *(void **)((int)this + 0x124) = property;
  if (valueData == (void *)0x0) {
    FUN_012f5a60("valueData","..\\common\\common\\command\\CommandObjectModifyProperty.cpp",0x6d);
  }
  pvVar3 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar3;
  FUN_013010e0(valueData);
  if (optionalValue != (void *)0x0) {
    FUN_013010e0(optionalValue);
    FUN_01301590(environment);
  }
  pvVar3 = Mem_Alloc(0x108);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)AttributeModifier_ctor();
  }
  local_4._0_1_ = 2;
  PlayElement_setField30(this_00,*(int *)((int)this + 0x30));
  pvVar3 = CommandObject_getActionFromEnvironment(environment);
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,4);
  EvaluationEnvironment_copyFrom(auStack_a0,environment,pvVar2);
  pvVar2 = (void *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                                &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (pvVar2 != (void *)0x0) {
    set_play_element_id_field(auStack_a0,pvVar2);
  }
  uVar4 = *(undefined4 *)((int)this + 0x124);
  iVar1 = *this_00;
  puVar6 = auStack_a0;
  iVar5 = (int)this + 0x128;
  pvVar2 = EvaluationEnvironment_getOriginCard(environment);
  (**(code **)(iVar1 + 0x40))(pvVar2,pvVar3,uVar4,iVar5,puVar6);
  uVar4 = PlayElement_getId();
  *(undefined4 *)((int)this + 0x134) = uVar4;
  Game_logGeneral(*(void **)((int)this + 0x30),"finished setting up SGattributemodifier.",pvVar2);
  _uStack_18 = CONCAT31(uStack_17,2);
  FUN_01385460();
  ExceptionList = pvStack_20;
  return this;
}

