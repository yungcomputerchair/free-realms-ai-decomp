// addr: 0x014193a0
// name: AttributeModifier_setup
// subsystem: common/common/game
// source (binary assert): common/common/game/AttributeModifier.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AttributeModifier_setup(void * this, void * card, void * action, int
   propertyKey_, void * calculatorValue, void * environment) */

bool __thiscall
AttributeModifier_setup
          (void *this,void *card,void *action,int propertyKey_,void *calculatorValue,
          void *environment)

{
  bool bVar1;
  undefined1 uVar2;
  uint ownerOrParent_;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an AttributeModifier from card/action/property/value context,
                       stores origin ids and calculator state, determines static vs dynamic type,
                       and logs setup details. It asserts non-null card and calculatorValue. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016935a0;
  local_c = ExceptionList;
  ownerOrParent_ = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  bVar1 = Game_shouldLogAttributeModifierDebug(*(void **)((int)this + 0x30));
  if ((bVar1) && (action != (void *)0x0)) {
    if (card != (void *)0x0) {
      pvVar3 = ValueData_toString(calculatorValue,local_28);
      local_4 = 0;
      if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
        iVar5 = (int)pvVar3 + 4;
      }
      else {
        iVar5 = *(int *)((int)pvVar3 + 4);
      }
      uVar4 = FUN_01321f20(propertyKey_,iVar5);
      uVar4 = PackedActionId_getLow12Bits(uVar4);
      uVar4 = FUN_01321f20(uVar4);
      uVar4 = PackedActionId_getHighBits(uVar4);
      uVar4 = PlayElement_getId(uVar4);
      Game_logGeneral(*(void **)((int)this + 0x30),
                      "AttributeModifier::setup from card: %d, action: %d (%d), propertykey: %d, value: %s"
                      ,uVar4);
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      goto LAB_0141948a;
    }
  }
  else {
LAB_0141948a:
    if (card != (void *)0x0) goto LAB_014194a2;
  }
  FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\AttributeModifier.cpp",0x50);
LAB_014194a2:
  if (calculatorValue == (void *)0x0) {
    FUN_012f5a60("calculatorValue","..\\common\\common\\game\\AttributeModifier.cpp",0x51);
  }
  pvVar3 = EvaluationEnvironment_getGame(environment);
  if (pvVar3 != (void *)0x0) {
    pvVar3 = EvaluationEnvironment_getGame(environment);
    FUN_01340230(this,pvVar3,ownerOrParent_);
  }
  iVar5 = FUN_01383460(0x38);
  if (card != (void *)0x0) {
    iVar6 = PlayElement_getId();
    set_integer_value_for_key(0x38,iVar6);
  }
  uVar4 = PlayElement_getId();
  *(undefined4 *)((int)this + 0x48) = uVar4;
  if (action != (void *)0x0) {
    uVar4 = FUN_01321f20();
    *(undefined4 *)((int)this + 0x4c) = uVar4;
  }
  *(int *)((int)this + 0x50) = propertyKey_;
  uVar2 = FUN_013836b0();
  *(undefined1 *)((int)this + 0x104) = uVar2;
  uVar4 = Rules_getIntegerKey1B();
  *(undefined4 *)((int)this + 0x100) = uVar4;
  FUN_013010e0(calculatorValue);
  if (action != (void *)0x0) {
    iVar6 = PropertyValue_getSelector4(action);
    *(int *)((int)this + 0x54) = iVar6;
  }
  if ((*(int *)((int)this + 0x54) == 0) &&
     (*(undefined4 *)((int)this + 0x54) = 1, *(int *)((int)this + 0x54) == 0)) {
    FUN_012f5a60("mAttributeModifierType != kInvalidAttributeModifierType",
                 "..\\common\\common\\game\\AttributeModifier.cpp",0x6f);
  }
  if (*(int *)((int)this + 0x54) == 1) {
    FUN_01301590(environment);
    if (((*(int *)((int)environment + 4) == 0) ||
        (*(char *)(*(int *)((int)environment + 4) + 0x22c) != '\0')) &&
       (*(char *)((int)environment + 0x78) != '\0')) {
      pvVar3 = ValueData_toString((void *)((int)this + 0x58),local_28);
      local_4 = 1;
      if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
        iVar6 = (int)pvVar3 + 4;
      }
      else {
        iVar6 = *(int *)((int)pvVar3 + 4);
      }
      EvaluationEnvironment_tracef(environment,"static modifier: %s",iVar6);
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
    }
  }
  else if (*(int *)((int)this + 0x54) == 2) {
    EvaluationEnvironment_tracef(environment,"dynamic modifier",ownerOrParent_);
  }
  set_integer_value_for_key(0x38,iVar5);
  ExceptionList = local_c;
  return true;
}

