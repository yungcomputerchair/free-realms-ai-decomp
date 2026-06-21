// addr: 0x01510920
// name: CommandObject_ProcessEventEmissionState_nextState
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_ProcessEventEmissionState_nextState(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_44 [4];
  void *pvStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  void *pvStack_1c;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Advances a ProcessEventEmissionState variant, auto-playing actions or pushing
                       manual responses. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b6940;
  local_c = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_c;
  if ((char)param_1[0x4c] == '\0') {
    iVar13 = param_1[0x3f];
    pcVar14 = "ProcessEventEmissionState::nextState (init) Event: %d";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar14,iVar13);
    piVar6 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar6 + 0x170))(param_1[0x3f]);
    (**(code **)(*param_1 + 300))();
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  if (param_1[0x4f] != 0) {
    piVar6 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar6 + 0x48))(param_1[0x4f]);
  }
  pvVar5 = (void *)StateMachineState_getCurrentTurn();
  uVar7 = get_field_8(pvVar5);
  param_1[0x4f] = uVar7;
  param_1[0x50] = 0;
  EvaluationEnvironment_setReturnKey8Integer(param_1[0x3f]);
  cVar3 = (char)param_1[0x4e];
  while (cVar3 != '\0') {
    if ((param_1[0x42] == 0) ||
       (iVar12 = param_1[0x43] - param_1[0x42], iVar13 = iVar12 >> 0x1f,
       iVar12 / 0xc + iVar13 == iVar13)) {
      *(undefined1 *)(param_1 + 0x4e) = 0;
    }
    else {
      piVar1 = (int *)param_1[0x42];
      piVar6 = (int *)param_1[0x43];
      if (piVar6 < piVar1) {
        FUN_00d83c2d();
        piVar6 = (int *)param_1[0x43];
      }
      if (piVar6 <= piVar1) {
        FUN_00d83c2d();
      }
      param_1[0x49] = *piVar1;
      param_1[0x4a] = piVar1[1];
      param_1[0x4b] = piVar1[2];
      uVar7 = param_1[0x42];
      if ((uint)param_1[0x43] < uVar7) {
        FUN_00d83c2d();
      }
      puVar2 = (undefined4 *)param_1[0x43];
      puVar8 = (undefined4 *)(uVar7 + 0xc);
      if (puVar8 != puVar2) {
        iVar13 = uVar7 - (int)puVar8;
        do {
          *(undefined4 *)(iVar13 + (int)puVar8) = *puVar8;
          *(undefined4 *)(iVar13 + 4 + (int)puVar8) = puVar8[1];
          *(undefined4 *)(iVar13 + 8 + (int)puVar8) = puVar8[2];
          puVar8 = puVar8 + 3;
        } while (puVar8 != puVar2);
      }
      param_1[0x43] = param_1[0x43] + -0xc;
      piVar6 = (int *)param_1[0x49];
      iVar13 = param_1[0x4a];
      iVar12 = param_1[0x4b];
      set_play_element_id_field((void *)param_1[0x3a],piVar6);
      EvaluationEnvironment_setActionReturn(iVar13);
      set_integer_value_for_key(0x38,iVar12);
      cVar3 = CommandObject_ProcessEventEmissionState_testActionPreconditions(piVar6,iVar13);
      if (cVar3 == '\x01') {
        cVar3 = CommandObject_setActionReturnKey5();
        if (cVar3 != '\0') {
          uVar10 = FUN_01321f20();
          uVar10 = PackedActionId_getLow12Bits(uVar10);
          uVar10 = FUN_01321f20(uVar10);
          uVar10 = PackedActionId_getHighBits(uVar10);
          uVar10 = PlayElement_getId(uVar10);
          pcVar14 = "AUTOMATIC PLAYING OF CARD %d, ACTION %d (%d)";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar14,uVar10);
          (**(code **)(*piVar6 + 0x154))(0);
          uVar10 = (**(code **)(*param_1 + 0x128))(piVar6,iVar13,iVar12);
          ExceptionList = pvStack_1c;
          return uVar10;
        }
        pcVar14 = "pushing back manual response";
        pvVar5 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar5,pcVar14,pvVar4);
        FUN_01336520(param_1 + 0x49);
      }
    }
    cVar3 = (char)param_1[0x4e];
  }
  if (*(char *)((int)param_1 + 0x131) != '\0') {
    ExceptionList = local_c;
    return 1;
  }
  *(undefined1 *)((int)param_1 + 0x131) = 1;
  param_1[0x3e] = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xe),
             "Response",8);
  uStack_2c = 0xf;
  uStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_44,"pass",4);
  iStack_4 = 0;
  pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(abStack_28,abStack_44);
  iStack_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x23),
             pbVar9,0,0xffffffff);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  uStack_10 = 0xf;
  uStack_14 = 0;
  uVar7 = (uint)pvStack_24 >> 8;
  pvStack_24 = (void *)(uVar7 << 8);
  iStack_4 = 0xffffffff;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  uStack_10 = 0xf;
  uStack_14 = 0;
  pvStack_24 = (void *)(uVar7 << 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_28,"0",1);
  iStack_4 = 2;
  pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(abStack_44,abStack_28);
  iStack_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2a),
             pbVar9,0,0xffffffff);
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  iStack_4 = 0xffffffff;
  if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  uStack_10 = 0xf;
  uStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  (**(code **)(*param_1 + 0x134))();
  pcVar14 = "mManualReponse double pass state";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar14,pvVar4);
  uVar10 = (**(code **)(*(int *)param_1[2] + 0x50))();
  StateMachineState_getCurrentTurn();
  uVar11 = FUN_013f7eb0();
  EvaluationEnvironment_setReturnKey8Integer(uVar11);
  EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],(void *)0x0,pvVar4);
  EvaluationEnvironment_setPlayElementId(0);
  set_integer_value_for_key(0x38,0);
  uVar10 = StateMachine_setCurrentState(uVar10);
  ExceptionList = local_c;
  return uVar10;
}

