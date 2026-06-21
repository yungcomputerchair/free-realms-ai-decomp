// addr: 0x015055e0
// name: CommandObject_ModifyProperty_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_ModifyProperty_ctor(void * this, bool useTargetCard_, int
   propertyId_, void * modifierValue, void * log, bool createAttributeModifier_) */

void * __thiscall
CommandObject_ModifyProperty_ctor
          (void *this,bool useTargetCard_,int propertyId_,void *modifierValue,void *log,
          bool createAttributeModifier_)

{
  int iVar1;
  void *sourceEnv;
  void *pvVar2;
  int extraout_EAX;
  undefined4 extraout_EAX_00;
  int *piVar3;
  int iVar4;
  int extraout_EAX_01;
  int extraout_EAX_02;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *local_e8;
  int local_e4;
  undefined1 uStack_dd;
  undefined1 local_dc [4];
  void *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int iStack_cc;
  undefined4 *puStack_c8;
  int aiStack_c4 [2];
  int aiStack_bc [2];
  int local_b4;
  int local_b0;
  void *local_ac;
  undefined1 auStack_a8 [8];
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObject_ModifyProperty, chooses the affected card from
                       origin/target environment state, stores the property and modifier value, and
                       optionally creates an attribute modifier with effect-limit clamping. Evidence
                       is the vftable/name string "CommandObject_ModifyProperty" and logs "Effect
                       Limit Found" and "finished setting up attributemodifier.". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4e1c;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff04);
  ExceptionList = &local_c;
  local_ac = this;
  CommandObject_ctor(this,log);
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
  if (useTargetCard_) {
    pvVar2 = EvaluationEnvironment_resolveTarget(log);
  }
  else {
    pvVar2 = EvaluationEnvironment_getOriginCard(log);
  }
  *(void **)((int)this + 0x68) = pvVar2;
  *(int *)((int)this + 0x124) = propertyId_;
  pvVar2 = EvaluationEnvironment_getOriginCard(log);
  *(void **)((int)this + 100) = pvVar2;
  FUN_013010e0(modifierValue);
  if (createAttributeModifier_) {
    pvVar2 = Mem_Alloc(0x108);
    local_4._0_1_ = 3;
    if (pvVar2 == (void *)0x0) {
      local_e8 = (int *)0x0;
    }
    else {
      local_e8 = (int *)AttributeModifier_ctor();
    }
    local_4._0_1_ = 2;
    PlayElement_setField30(local_e8,*(int *)((int)this + 0x30));
    pvVar2 = CommandObject_getActionFromEnvironment(log);
    if ((pvVar2 != (void *)0x0) && (unknown_commandObject_setOpcode13(pvVar2), extraout_EAX != 0)) {
      unknown_commandObject_setOpcode13(pvVar2);
      EvaluationEnvironment_tracef(log,"Effect Limit Found: %d",extraout_EAX_00);
      FUN_012fa910();
      local_4._0_1_ = 4;
      FUN_013010e0(modifierValue);
      FUN_01301590(log);
      local_e4 = 0;
      local_d8 = (void *)0x0;
      local_d4 = 0;
      local_d0 = 0;
      local_4 = CONCAT31(local_4._1_3_,5);
      piVar3 = (int *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                                   &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
      ;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 400))(*(undefined4 *)((int)this + 100),local_dc);
        piVar3 = (int *)FUN_013305c0(aiStack_c4);
        iStack_cc = *piVar3;
        puStack_c8 = (undefined4 *)piVar3[1];
        piVar3 = (int *)FUN_01330590(auStack_a8);
        aiStack_c4[0] = *piVar3;
        puVar7 = (undefined4 *)piVar3[1];
        while( true ) {
          iVar4 = aiStack_c4[0];
          if ((aiStack_c4[0] == 0) || (aiStack_c4[0] != iStack_cc)) {
            FUN_00d83c2d();
          }
          if (puVar7 == puStack_c8) break;
          if (iVar4 == 0) {
            FUN_00d83c2d();
          }
          if (*(undefined4 **)(iVar4 + 8) <= puVar7) {
            FUN_00d83c2d();
          }
          piVar3 = (int *)*puVar7;
          iVar4 = AttributeModifier_getAttributeId(piVar3);
          if (iVar4 == propertyId_) {
            (**(code **)(*piVar3 + 0x44))(0,aiStack_bc,&uStack_dd);
            local_e4 = local_e4 + aiStack_bc[0];
          }
          if (*(undefined4 **)(aiStack_c4[0] + 8) <= puVar7) {
            FUN_00d83c2d();
          }
          puVar7 = puVar7 + 1;
        }
      }
      if ((local_b4 == 2) &&
         (unknown_commandObject_setOpcode13(pvVar2), extraout_EAX_01 < local_b0 + local_e4)) {
        unknown_commandObject_setOpcode13(pvVar2);
        FUN_01300680(2);
        *(int *)((int)this + 0x130) = extraout_EAX_02 - local_e4;
      }
      local_4 = CONCAT31(local_4._1_3_,4);
      if (local_d8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8);
      }
      local_d8 = (void *)0x0;
      local_d4 = 0;
      local_d0 = 0;
      local_4._0_1_ = 2;
      FUN_01300cd0();
    }
    EvaluationEnvironment_ctor();
    local_4 = CONCAT31(local_4._1_3_,6);
    EvaluationEnvironment_copyFrom(local_a0,log,sourceEnv);
    pvVar5 = (void *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                                  &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    if (pvVar5 != (void *)0x0) {
      set_play_element_id_field(local_a0,pvVar5);
    }
    iVar1 = *local_e8;
    puVar8 = local_a0;
    iVar4 = (int)this + 0x128;
    uVar6 = *(undefined4 *)((int)this + 0x124);
    pvVar5 = EvaluationEnvironment_getOriginCard(log);
    (**(code **)(iVar1 + 0x40))(pvVar5,pvVar2,uVar6,iVar4,puVar8);
    uVar6 = PlayElement_getId();
    *(undefined4 *)((int)this + 0x134) = uVar6;
    Game_logGeneral(*(void **)((int)this + 0x30),"finished setting up attributemodifier.",sourceEnv)
    ;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_01385460();
  }
  ExceptionList = local_c;
  return this;
}

