// addr: 0x01339080
// name: CWGame_getActiveCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall CWGame_getActiveCards(void *param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  void **item;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piStack_138;
  undefined1 auStack_134 [144];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Collects active/accepted cards for the current event, checking active player
                       and card-in-hand state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167b8d6;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xfffffeb0);
  ExceptionList = &local_c;
  iVar4 = (**(code **)(**(int **)((int)param_1 + 0x68) + 0x3c))();
  FUN_013f7eb0();
  Game_logGeneral(param_1,"getActiveCards Current Event: %d, %d, %d",param_2);
  EvaluationEnvironment_ctor();
  uStack_4 = 0;
  piVar5 = PlayArea_findPlayerElementById(param_1,param_2);
  if (piVar5 == (int *)0x0) {
    Game_logGeneral(param_1,"couldn\'t get player %d",param_2);
    uStack_4 = 0xffffffff;
    FUN_01385460();
    uVar3 = 0;
  }
  else {
    piVar6 = (int *)get_field_8(*(void **)((int)param_1 + 0x68));
    if (piVar5 == piVar6) {
      (**(code **)(*piVar5 + 0x84))(auStack_134);
      EvaluationEnvironment_setBooleanKey9(1);
      EvaluationEnvironment_setBooleanKey4(0);
      EvaluationEnvironment_setCurrentTargetFromElement(auStack_134,(void *)0x0,item);
      EvaluationEnvironment_setPlayElementId(0);
      if (iVar4 != 0x29) {
        PlayElement_getGame();
        FUN_0139d7c0();
        iVar4 = FUN_013445f0(3);
        puVar1 = *(undefined4 **)(iVar4 + 8);
        if (puVar1 < *(undefined4 **)(iVar4 + 4)) {
          FUN_00d83c2d();
        }
        puVar8 = *(undefined4 **)(iVar4 + 4);
        if (*(undefined4 **)(iVar4 + 8) < puVar8) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (iVar4 == 0) {
            FUN_00d83c2d();
          }
          if (puVar8 == puVar1) break;
          if (iVar4 == 0) {
            FUN_00d83c2d();
          }
          if (*(undefined4 **)(iVar4 + 8) <= puVar8) {
            FUN_00d83c2d();
          }
          piVar5 = (int *)FUN_00d8d382(*puVar8,0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0);
          piStack_138 = piVar5;
          EvaluationEnvironment_ctor();
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          EvaluationEnvironment_copyFrom(auStack_a0,auStack_134,item);
          set_play_element_id_field(auStack_a0,piVar5);
          EvaluationEnvironment_setBooleanKey13(0);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setBooleanKey4(0);
          uVar7 = PlayElement_getId();
          Game_logGeneral(param_1,"Checking card %d in hand",uVar7);
          (**(code **)(*piVar5 + 0x154))(0);
          cVar2 = (**(code **)(*piVar5 + 0xc0))(auStack_a4);
          if (cVar2 != '\0') {
            Game_logGeneral(param_1,"Pushing, accepted.",item);
            PointerVector_pushBack(param_3,&piStack_138,item);
          }
          Game_logGeneral(param_1,"Done",item);
          uStack_4 = uStack_4 & 0xffffff00;
          FUN_01385460();
          if (*(undefined4 **)(iVar4 + 8) <= puVar8) {
            FUN_00d83c2d();
          }
          puVar8 = puVar8 + 1;
        }
      }
      uVar3 = CWGame_getActiveActionsForCard(param_2,param_3);
      uStack_4 = 0xffffffff;
      FUN_01385460();
    }
    else {
      Game_logGeneral(param_1,"not active player %d",param_2);
      uStack_4 = 0xffffffff;
      FUN_01385460();
      uVar3 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

