// addr: 0x01419650
// name: AttributeModifier_evaluate
// subsystem: common/common/game
// source (binary assert): common/common/game/AttributeModifier.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AttributeModifier_evaluate(void * this, void * environment, int *
   outValue, bool * outChanged) */

bool __thiscall
AttributeModifier_evaluate(void *this,void *environment,int *outValue,bool *outChanged)

{
  char cVar1;
  void *pvVar2;
  int value_;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  uint uStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  char cStack_60;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Evaluates an attribute modifier, respecting disabled/suppressed origin cards,
                       computes static or dynamic values, updates the cached value, and reports
                       whether it changed. Returns false when inactive or suppressed. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016935e6;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff04);
  ExceptionList = &local_c;
  *outValue = 0;
  *outChanged = false;
  uVar6 = FUN_01383460(0x38);
  value_ = (int)uVar6;
  pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x30),(int)((ulonglong)uVar6 >> 0x20));
  if ((pvVar3 == (void *)0x0) || (*(char *)((int)pvVar3 + 0x44) == '\0')) {
    pvVar3 = (void *)0x0;
  }
  else {
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x38,iVar4);
  }
  if (*(char *)((int)this + 0x68) == '\0') {
    if (*(int *)((int)this + 100) != 0) {
      *(undefined4 *)((int)this + 100) = 0;
      *outChanged = true;
    }
    set_integer_value_for_key(0x38,value_);
    ExceptionList = local_c;
    return false;
  }
  if (environment == (void *)0x0) {
    *outValue = *(int *)((int)this + 100);
    set_integer_value_for_key(0x38,value_);
    ExceptionList = local_c;
    return true;
  }
  piVar5 = EvaluationEnvironment_getGame(environment);
  cVar1 = (**(code **)(*piVar5 + 0x1f8))(pvVar3);
  if (cVar1 != '\0') {
    EvaluationEnvironment_tracef(environment,"orign card is suppressed!",pvVar2);
    if (*(int *)((int)this + 100) != 0) {
      *(undefined4 *)((int)this + 100) = 0;
      *outChanged = true;
    }
    ExceptionList = local_c;
    return false;
  }
  uStack_dc = *(uint *)((int)this + 100);
  PackedId_consumeHighBitFlag_alt(&uStack_dc);
  EvaluationEnvironment_ctor();
  iStack_4 = 0;
  EvaluationEnvironment_initChildFromEnvironment(auStack_d8,environment,pvVar2);
  if (*(int *)((int)this + 0x100) != 0) {
    EvaluationEnvironment_setCustomNumber2Return(*(int *)((int)this + 0x100));
  }
  if (*(bool *)((int)this + 0x104) != false) {
    ValueData_createBool(*(bool *)((int)this + 0x104));
  }
  FUN_012fa910();
  iStack_4._0_1_ = 1;
  FUN_013010e0((int)this + 0x58);
  if (*(int *)((int)this + 0x54) == 1) {
    if (((iStack_d4 != 0) && (*(char *)(iStack_d4 + 0x22c) == '\0')) || (cStack_60 == '\0'))
    goto LAB_014198dc;
    pvVar2 = ValueData_toString(auStack_e8,auStack_28);
    iStack_4._0_1_ = 2;
    if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
      iVar4 = (int)pvVar2 + 4;
    }
    else {
      iVar4 = *(int *)((int)pvVar2 + 4);
    }
    EvaluationEnvironment_tracef(auStack_d8,"static value: %s",iVar4);
  }
  else {
    if (((*(int *)((int)this + 0x54) != 2) ||
        ((FUN_01301590(auStack_d8), iStack_d4 != 0 && (*(char *)(iStack_d4 + 0x22c) == '\0')))) ||
       (cStack_60 == '\0')) goto LAB_014198dc;
    pvVar2 = ValueData_toString(auStack_e8,auStack_44);
    iStack_4._0_1_ = 3;
    if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
      iVar4 = (int)pvVar2 + 4;
    }
    else {
      iVar4 = *(int *)((int)pvVar2 + 4);
    }
    EvaluationEnvironment_tracef(auStack_d8,"dynamic value: %s",iVar4);
  }
  iStack_4._0_1_ = 1;
  FUN_0041f1d7();
LAB_014198dc:
  if (iStack_e4 == 1) {
    *outValue = 0;
    if (*(int *)((int)this + 100) != 0) {
      *outChanged = true;
      *(int *)((int)this + 100) = *outValue;
    }
    *(undefined1 *)((int)this + 0x69) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x69) = 1;
    if (iStack_e4 != 2) {
      FUN_012f5a60("false","..\\common\\common\\game\\AttributeModifier.cpp",0xff);
      set_integer_value_for_key(0x38,value_);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_01300cd0();
      iStack_4 = 0xffffffff;
      FUN_01385460();
      ExceptionList = local_c;
      return false;
    }
    iVar4 = FUN_0123c340();
    *outValue = iVar4;
    if (iVar4 != *(int *)((int)this + 100)) {
      *outChanged = true;
      *(int *)((int)this + 100) = *outValue;
    }
  }
  set_integer_value_for_key(0x38,value_);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_01300cd0();
  iStack_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return true;
}

