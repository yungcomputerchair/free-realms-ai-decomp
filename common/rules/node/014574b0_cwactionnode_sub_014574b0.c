// addr: 0x014574b0
// name: cwactionnode_sub_014574b0
// subsystem: common/rules/node
// source (binary assert): common/rules/node/cwactionnode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x01457fef) */
/* WARNING: Removing unreachable block (ram,0x01457ffd) */
/* WARNING: Removing unreachable block (ram,0x01457fe1) */
/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: undefined4 cwactionnode_sub_014574b0(int param_1_, int param_2_, undefined4 *
   param_3) */

undefined4 __thiscall
cwactionnode_sub_014574b0(void *this,int param_1_,int param_2_,undefined4 *param_3)

{
  char *pcVar1;
  rsize_t _DstSize;
  uint3 uVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  undefined4 extraout_EAX;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  void *pvVar10;
  int iVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  char *pcVar17;
  int *piVar18;
  undefined4 uVar19;
  void *this_00;
  undefined4 *puVar20;
  void *this_01;
  undefined3 extraout_var;
  int elementId_;
  undefined4 *******pppppppuVar21;
  undefined4 unaff_EBX;
  int *piVar22;
  undefined4 *puVar23;
  uint uVar24;
  void *in_stack_00000010;
  undefined1 *puVar25;
  undefined1 *puVar26;
  char *******pppppppcVar27;
  char *******pppppppcVar28;
  char **item;
  int *piStack_12d0;
  undefined4 local_12cc;
  undefined4 *local_12c8;
  char *pcStack_12c4;
  int iStack_12c0;
  int *piStack_12bc;
  undefined4 local_12b8;
  undefined4 *puStack_12b4;
  undefined4 *local_12b0;
  undefined4 *local_12ac;
  undefined4 *puStack_12a8;
  undefined4 uStack_12a4;
  undefined4 uStack_12a0;
  void *local_129c;
  char *pcStack_1298;
  undefined4 *******pppppppuStack_1294;
  undefined4 uStack_1290;
  char *local_128c;
  char *local_1288;
  undefined4 *******local_1284;
  undefined4 local_1280;
  char *local_127c;
  char *local_1278;
  undefined4 *******local_1274;
  undefined4 uStack_1270;
  undefined4 uStack_126c;
  char *pcStack_1268;
  undefined4 *******pppppppuStack_1264;
  undefined4 uStack_1260;
  undefined4 uStack_125c;
  undefined4 ******appppppuStack_1254 [15];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_1218 [12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_120c [28];
  undefined1 auStack_11f0 [96];
  undefined1 local_1190 [80];
  undefined1 auStack_1140 [4];
  char *******apppppppcStack_113c [4];
  int iStack_112c;
  uint uStack_1128;
  undefined1 auStack_1124 [4];
  undefined1 uStack_1120;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  void *local_10f8;
  undefined4 *******local_10e8;
  uint local_10e4;
  undefined1 local_10e0 [4];
  void *local_10dc;
  uint uStack_10d4;
  undefined4 *******local_10cc;
  uint local_10c8;
  void *local_10c0;
  uint uStack_10b8;
  undefined4 *******local_10b0;
  uint local_10ac;
  void *local_10a4;
  uint uStack_109c;
  undefined1 auStack_1098 [4];
  undefined4 *******local_1094;
  uint local_1090;
  void *local_1088;
  undefined4 uStack_1084;
  uint uStack_1080;
  undefined4 local_1078;
  uint local_1074;
  void *local_106c;
  char acStack_1060 [4];
  undefined4 local_105c;
  uint local_1058;
  undefined1 auStack_1054 [4];
  char acStack_1050 [16];
  undefined1 auStack_1040 [4088];
  undefined1 uStack_48;
  undefined1 uStack_2c;
  undefined1 uStack_24;
  undefined1 uStack_1c;
  undefined1 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  undefined4 local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path ..\\common\\rules\\node\\cwactionnode.cpp; strings false,
                       title, mTypeID == kIntValueMapTypeID, Tcg_title_%d, Tcg_title_%d. */
  local_4 = 0xffffffff;
  uStack_8 = 0xe4;
  uStack_7 = 0x169c4;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&piStack_12d0;
  pvVar5 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffed20);
  ExceptionList = &local_c;
  local_12c8 = param_3;
  ValueData_toString((void *)param_2_,local_10e0);
  local_4 = 0;
  EvaluationEnvironment_tracef(param_3,"CWActionNode::buildCommandObject %d, %s",param_1_);
  puVar15 = local_12c8;
  local_4 = 0xffffffff;
  if (0xf < local_10c8) {
                    /* WARNING: Subroutine does not return */
    _free(local_10dc);
  }
  local_10c8 = 0xf;
  local_10cc = (undefined4 *******)0x0;
  local_10dc = (void *)((uint)local_10dc & 0xffffff00);
  if (param_1_ < 0x222e2) {
    if (param_1_ != 0x222e1) {
      switch(param_1_) {
      case 0x1adb1:
        EvaluationEnvironment_tracef(local_12c8,"destroy target",pvVar5);
        local_12cc = Mem_Alloc(0x124);
        local_4 = 1;
        if (local_12cc == (void *)0x0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = CWCommandObject_Destroy_ctor(local_12cc,puVar15);
        }
        local_4 = 0xffffffff;
        EvaluationEnvironment_addCommandObject(puVar15,pvVar10,pvVar5);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      default:
        goto switchD_014575ae_caseD_1adb2;
      case 0x1adb7:
        piVar18 = EvaluationEnvironment_getGame(local_12c8);
        uVar19 = (**(code **)(*piVar18 + 0x160))();
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar19 >> 8),1);
      case 0x1add9:
        goto switchD_014575ae_caseD_1add9;
      case 0x1adda:
        uVar19 = 0;
        piVar18 = EvaluationEnvironment_resolveTarget(local_12c8);
        piVar6 = EvaluationEnvironment_resolveTarget2(puVar15);
        FUN_012fa9f0();
        local_4 = 6;
        FUN_012fa9f0();
        local_4._0_1_ = 7;
        cVar3 = (**(code **)(*piVar6 + 0x1c0))();
        if (cVar3 != '\0') {
          uVar19 = 0x22645;
        }
        pvVar5 = (void *)0x22646;
        cVar3 = (**(code **)(*piVar6 + 0x1c0))();
        if (cVar3 != '\0') {
          uVar19 = 0x22646;
        }
        cVar3 = (**(code **)(*piVar6 + 0x1c0))();
        if (cVar3 != '\0') {
          uVar19 = 0x22647;
        }
        cVar3 = (**(code **)(*piVar6 + 0x1c0))();
        if (cVar3 != '\0') {
          uVar19 = 0x22648;
        }
        (**(code **)(*piVar6 + 0x1b4))();
        (**(code **)(*piVar6 + 0x10))();
        iVar16 = *piVar6;
        FUN_013402b0();
        PlayElement_getGame();
        FUN_0139d7c0();
        (**(code **)(iVar16 + 0x128))();
        (**(code **)(*piVar18 + 0x198))();
        iVar16 = *piVar18;
        EvaluationEnvironment_getGame(pvVar5);
        uVar7 = FUN_0132e1d0();
        (**(code **)(iVar16 + 0x128))(uVar7);
        (**(code **)(*piVar18 + 0x10))(0x22971,&stack0xffffed2c);
        (**(code **)(*piVar18 + 0x1ac))(uVar19);
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_01300cd0();
        local_4 = 0xffffffff;
        uVar19 = FUN_01300cd0();
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar19 >> 8),1);
      }
    }
    local_1274 = (undefined4 *******)0x0;
    local_12b0 = (undefined4 *)0x0;
    local_127c = (char *)0x0;
    local_1278 = (char *)0x0;
    EvaluationEnvironment_resolveTarget(local_12c8);
    local_12b8 = (void *)PlayElement_getId();
    if ((*(int *)(param_2_ + 4) == 0xe) || (FUN_012f5a60(), *(int *)(param_2_ + 4) == 0xe)) {
      pcVar17 = *(char **)(param_2_ + 8);
    }
    else {
      pcVar17 = (char *)0x0;
    }
    local_12cc = (void *)0x0;
    puVar15 = (undefined4 *)FUN_013144f0();
    pcVar1 = (char *)*puVar15;
    iVar16 = puVar15[1];
    iVar11 = *(int *)(pcVar17 + 4);
    pcStack_12c4 = pcVar1;
    iStack_12c0 = iVar16;
    if ((pcVar1 == (char *)0x0) || (pcVar1 != pcVar17)) {
      FUN_00d83c2d();
    }
    if (iVar16 != iVar11) {
      if (pcVar1 == (char *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar16 == *(int *)(pcVar1 + 4)) {
        FUN_00d83c2d();
      }
      if ((*(int *)(iVar16 + 0x10) != 0) &&
         (iVar16 = FUN_012b1980(), *(int *)(*(int *)(iVar16 + 4) + 4) == 2)) {
        FUN_012b1980();
        local_1274 = (undefined4 *******)FUN_0123c340();
      }
    }
    local_12cc = (void *)0x1;
    puVar15 = (undefined4 *)FUN_013144f0();
    pcVar1 = (char *)*puVar15;
    iVar16 = puVar15[1];
    iVar11 = *(int *)(pcVar17 + 4);
    pcStack_12c4 = pcVar1;
    iStack_12c0 = iVar16;
    if ((pcVar1 == (char *)0x0) || (pcVar1 != pcVar17)) {
      FUN_00d83c2d();
    }
    if (iVar16 != iVar11) {
      if (pcVar1 == (char *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar16 == *(int *)(pcVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (*(int *)(iVar16 + 0x10) != 0) {
        FUN_012b1980();
        FUN_01301590();
        FUN_012b1980();
        local_12b0 = (undefined4 *)FUN_0123c340();
      }
    }
    local_12cc = (void *)0x2;
    puVar15 = (undefined4 *)FUN_013144f0();
    pcVar1 = (char *)*puVar15;
    iVar16 = puVar15[1];
    iVar11 = *(int *)(pcVar17 + 4);
    pcStack_12c4 = pcVar1;
    iStack_12c0 = iVar16;
    if ((pcVar1 == (char *)0x0) || (pcVar1 != pcVar17)) {
      FUN_00d83c2d();
    }
    if (iVar16 != iVar11) {
      if (pcVar1 == (char *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar16 == *(int *)(pcVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (*(int *)(iVar16 + 0x10) != 0) {
        FUN_012b1980();
        FUN_01301590();
        FUN_012b1980();
        local_127c = (char *)FUN_0123c340();
      }
    }
    local_12cc = (void *)0x3;
    puVar15 = (undefined4 *)FUN_013144f0();
    pcVar1 = (char *)*puVar15;
    iVar16 = puVar15[1];
    iVar11 = *(int *)(pcVar17 + 4);
    pcStack_12c4 = pcVar1;
    iStack_12c0 = iVar16;
    if ((pcVar1 == (char *)0x0) || (pcVar1 != pcVar17)) {
      FUN_00d83c2d();
    }
    pcVar17 = local_1278;
    puVar15 = local_12c8;
    if (iVar16 != iVar11) {
      if (pcVar1 == (char *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar16 == *(int *)(pcVar1 + 4)) {
        FUN_00d83c2d();
      }
      puVar15 = local_12c8;
      pcVar17 = local_1278;
      if (*(int *)(iVar16 + 0x10) != 0) {
        FUN_012b1980();
        FUN_01301590();
        FUN_012b1980();
        pcVar17 = (char *)FUN_0123c340();
      }
    }
    local_12cc = Mem_Alloc(0x14);
    local_4 = 0x1e;
    if (local_12cc == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70();
    EvaluationEnvironment_getGame(puVar15);
    iVar16 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar5,iVar16);
    DisplayActionBuilder_addIntArg(pvVar5,(int)local_1274);
    DisplayActionBuilder_addIntArg(pvVar5,0);
    DisplayActionBuilder_addIntArg(pvVar5,(int)local_12b8);
    DisplayActionBuilder_addIntArg(pvVar5,(int)local_12b0);
    DisplayActionBuilder_addIntArg(pvVar5,(int)local_127c);
    goto LAB_014589f9;
  }
  switch(param_1_) {
  case 0x222e2:
    local_12cc = (void *)0x1a;
    piVar18 = IntPointerMap_getOrInsertValueSlot((void *)((int)this + 4),&local_12cc);
    puVar15 = local_12c8;
    iVar16 = *(int *)(*piVar18 + 4);
    if (iVar16 != 2) goto LAB_0145927d;
    pvVar10 = EvaluationEnvironment_getTargetCard(local_12c8);
    iVar16 = 0;
    if (pvVar10 == (void *)0x0) goto LAB_0145927d;
    piVar18 = EvaluationEnvironment_getTargetCard(puVar15);
    iVar16 = (**(code **)(*piVar18 + 0x1e8))();
    if ((char)iVar16 == '\0') goto LAB_0145927d;
    EvaluationEnvironment_ctor();
    local_4 = 2;
    EvaluationEnvironment_tracefWithPrefix(puVar15,"DrawSpecificPlayerToPile: ");
    EvaluationEnvironment_copyFrom(local_1190,puVar15,pvVar5);
    piVar18 = EvaluationEnvironment_getTargetCard(puVar15);
    iVar16 = (**(code **)(*piVar18 + 0x28))();
    pvVar10 = EvaluationEnvironment_getGame(puVar15);
    PlayArea_findPlayerElementById(pvVar10,iVar16);
    FUN_013815b0();
    FUN_012fa910();
    local_4._0_1_ = 3;
    FUN_013010e0();
    FUN_01301590();
    FUN_01300d70();
    local_12cc = (void *)0x1a;
    IntPointerMap_getOrInsertValueSlot((void *)((int)this + 4),&local_12cc);
    FUN_0123c340();
    local_12cc = Mem_Alloc(0x13c);
    local_4._0_1_ = 4;
    if (local_12cc == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      FUN_0123c340();
      pvVar10 = (void *)CommandObject_DrawCard_ctor();
    }
    local_4._0_1_ = 3;
    EvaluationEnvironment_addCommandObject(puVar15,pvVar10,pvVar5);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_01300cd0();
    break;
  case 0x222e3:
    EvaluationEnvironment_tracefWithPrefix(local_12c8,"GenerateMana: ");
    pvVar10 = EvaluationEnvironment_getOriginCard(puVar15);
    local_12b8 = (void *)0x0;
    EvaluationEnvironment_ctor();
    local_4 = 0x1f;
    EvaluationEnvironment_copyFrom(local_1190,puVar15,pvVar5);
    set_play_element_id_field(local_1190,pvVar10);
    iVar16 = FUN_0123c340();
    if (iVar16 == 1) {
      pvVar10 = EvaluationEnvironment_getTargetCard(puVar15);
LAB_01458cdd:
      local_12b8 = pvVar10;
      PlayElement_getId();
      FUN_01251720();
    }
    else {
      if (iVar16 == 2) {
        pvVar10 = EvaluationEnvironment_getTarget2Card(puVar15);
        goto LAB_01458cdd;
      }
      if (iVar16 == 0x11) goto LAB_01458cdd;
      FUN_012f5a60();
    }
    local_12b0 = (undefined4 *)0x0;
    FUN_013402b0();
    local_1288 = (char *)0x0;
    local_1284 = (undefined4 *******)0x0;
    local_1280 = 0;
    puStack_12a8 = (undefined4 *)0x0;
    uStack_12a4 = 0;
    uStack_12a0 = 0;
    local_4 = CONCAT31((int3)((uint)local_4 >> 8),0x21);
    piVar18 = EvaluationEnvironment_getGame(puVar15);
    item = &local_128c;
    (**(code **)(*piVar18 + 0x144))();
    FUN_01258ec0();
    puVar15 = local_12c8;
    piVar18 = piStack_12bc;
    while( true ) {
      pcVar1 = local_1288;
      pcVar17 = pcStack_12c4;
      if (local_1288 < local_128c) {
        FUN_00d83c2d();
      }
      if ((puVar15 == (undefined4 *)0x0) || (puVar15 != &uStack_1290)) {
        FUN_00d83c2d();
      }
      puVar20 = local_12ac;
      if (pcVar17 == pcVar1) break;
      if (puVar15 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if ((char *)puVar15[2] <= pcVar17) {
        FUN_00d83c2d();
      }
      piVar6 = *(int **)pcVar17;
      piStack_12d0 = (int *)(**(code **)(*piVar18 + 0x28))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0x28))();
      if (piVar6 == piStack_12d0) {
        if ((char *)puVar15[2] <= pcVar17) {
          FUN_00d83c2d();
        }
        iVar16 = (**(code **)(**(int **)pcVar17 + 0x15c))();
        if (iVar16 == 0x222e3) {
          FUN_01258670();
          FUN_01258670();
          iVar16 = PlayElement_getId();
          iVar11 = FUN_0138a380();
          puStack_12b4 = (undefined4 *)((int)puStack_12b4 + iVar16 + iVar11);
          pvVar5 = (void *)FUN_01258670();
          PointerVector_pushBack(&local_12b0,pvVar5,item);
          piVar18 = piStack_12bc;
        }
      }
      if ((char *)puVar15[2] <= pcVar17) {
        FUN_00d83c2d();
      }
      pcStack_12c4 = pcVar17 + 4;
    }
    if ((local_12ac != (undefined4 *)0x0) && (1 < (uint)((int)puStack_12a8 - (int)local_12ac >> 2)))
    {
      local_129c = (void *)0x0;
      pcStack_1298 = (void *)0x0;
      pppppppuStack_1294 = (undefined4 *******)0x0;
      _uStack_8 = CONCAT31(uStack_7,0x22);
      if (puStack_12a8 < local_12ac) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar15 = puStack_12a8;
        if (puStack_12a8 < local_12ac) {
          FUN_00d83c2d();
        }
        puVar23 = local_12ac;
        if (puVar20 == puVar15) break;
        if (puStack_12a8 <= puVar20) {
          FUN_00d83c2d();
        }
        cVar3 = (**(code **)(*(int *)*puVar20 + 0x1c0))();
        if (cVar3 != '\0') {
          FUN_0042c155();
        }
        if (local_12ac <= puVar20) {
          FUN_00d83c2d();
        }
        cVar3 = (**(code **)(*(int *)*puVar20 + 0x1c0))();
        if (cVar3 != '\0') {
          FUN_0042c155();
        }
        if (local_12b0 <= puVar20) {
          FUN_00d83c2d();
        }
        cVar3 = (**(code **)(*(int *)*puVar20 + 0x1c0))();
        if (cVar3 != '\0') {
          FUN_0042c155();
        }
        if (puStack_12b4 <= puVar20) {
          FUN_00d83c2d();
        }
        cVar3 = (**(code **)(*(int *)*puVar20 + 0x1c0))();
        if (cVar3 != '\0') {
          piStack_12d0 = (int *)0x22648;
          FUN_0042c155();
        }
        if (puStack_12a8 <= puVar20) {
          FUN_00d83c2d();
        }
        puVar20 = puVar20 + 1;
      }
      if (puStack_12a8 < local_12ac) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar15 = puStack_12a8;
        if (puStack_12a8 < local_12ac) {
          FUN_00d83c2d();
        }
        if (puVar23 == puVar15) break;
        if (puStack_12a8 <= puVar23) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)*puVar23 + 0x1b4))();
        if (local_12ac <= puVar23) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)*puVar23 + 0x1b4))();
        if (local_12b0 <= puVar23) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)*puVar23 + 0x1b4))();
        if (puStack_12b4 <= puVar23) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)*puVar23 + 0x1b4))();
        if ((local_129c != (void *)0x0) && ((int)pcStack_1298 - (int)local_129c >> 2 != 0)) {
          if (puStack_12a8 <= puVar23) {
            FUN_00d83c2d();
          }
          piVar18 = (int *)*puVar23;
          if (local_129c == (void *)0x0) {
            uVar24 = 0;
          }
          else {
            uVar24 = (int)pcStack_1298 - (int)local_129c >> 2;
          }
          if ((local_129c == (void *)0x0) ||
             ((uint)((int)pcStack_1298 - (int)local_129c >> 2) <= (uint)puStack_12b4 % uVar24)) {
            FUN_00d83c2d();
          }
          (**(code **)(*piVar18 + 0x1ac))();
          pvVar5 = local_129c;
          if (pcStack_1298 < local_129c) {
            FUN_00d83c2d();
          }
          while( true ) {
            pcVar17 = pcStack_1298;
            if (pcStack_1298 < local_129c) {
              FUN_00d83c2d();
            }
            if (&stack0x00000000 == (undefined1 *)0x12a0) {
              FUN_00d83c2d();
            }
            if (pvVar5 == pcVar17) break;
            if (puStack_12a8 <= puVar23) {
              FUN_00d83c2d();
            }
            piVar18 = (int *)*puVar23;
            if (&stack0x00000000 == (undefined1 *)0x12a0) {
              FUN_00d83c2d();
            }
            if (pcStack_1298 <= pvVar5) {
              FUN_00d83c2d();
            }
            cVar3 = (**(code **)(*piVar18 + 0x1c0))();
            if (cVar3 == '\0') {
              if (pcStack_1298 <= pvVar5) {
                FUN_00d83c2d();
              }
              pvVar5 = (void *)((int)pvVar5 + 4);
            }
            else {
              iVar16 = (int)pcStack_1298 - ((int)pvVar5 + 4) >> 2;
              if (0 < iVar16) {
                _DstSize = iVar16 * 4;
                _memmove_s(pvVar5,_DstSize,(void *)((int)pvVar5 + 4),_DstSize);
              }
              pcStack_1298 = (char *)((int)pcStack_1298 + -4);
            }
          }
        }
        if (puStack_12a8 <= puVar23) {
          FUN_00d83c2d();
        }
        puVar23 = puVar23 + 1;
        piVar18 = piStack_12bc;
      }
      uStack_8 = 0x21;
      if (local_129c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_129c);
      }
      local_129c = (void *)0x0;
      pcStack_1298 = (char *)0x0;
      pppppppuStack_1294 = (undefined4 *******)0x0;
    }
    piStack_12d0 = Mem_Alloc(0x14);
    uStack_8 = 0x23;
    if (piStack_12d0 == (int *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    uStack_8 = 0x21;
    FUN_012f8c70();
    pvVar10 = local_12cc;
    EvaluationEnvironment_getGame(local_12cc);
    iVar16 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar5,iVar16);
    this_01 = EvaluationEnvironment_getGame(pvVar10);
    piStack_12d0 = (int *)Game_getMyPlayerID(this_01);
    piVar18 = (int *)(**(code **)(*piVar18 + 0x28))();
    DisplayActionBuilder_addBoolArg(pvVar5,piVar18 == piStack_12d0);
    piVar18 = EvaluationEnvironment_getGame(pvVar10);
    (**(code **)(*piVar18 + 0x154))();
    local_4 = CONCAT31(local_4._1_3_,0x20);
    if (puStack_12a8 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_12a8);
    }
    puStack_12a8 = (undefined4 *)0x0;
    uStack_12a4 = 0;
    uStack_12a0 = 0;
    local_4 = CONCAT31(local_4._1_3_,0x1f);
    if (local_1288 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1288);
    }
    local_1288 = (char *)0x0;
    local_1284 = (undefined4 *******)0x0;
    local_1280 = 0;
    break;
  case 0x222e4:
    local_1288 = (char *)0x0;
    local_1284 = (undefined4 *******)0x0;
    local_1280 = 0;
    local_4 = 0x1a;
    piVar18 = EvaluationEnvironment_getGame(local_12c8);
    (**(code **)(*piVar18 + 0x144))();
    FUN_01258ec0();
    puVar15 = local_12c8;
    while( true ) {
      pcVar1 = local_1288;
      pcVar17 = pcStack_12c4;
      if (local_1288 < local_128c) {
        FUN_00d83c2d();
      }
      if ((puVar15 == (undefined4 *)0x0) || (puVar15 != &uStack_1290)) {
        FUN_00d83c2d();
      }
      if (pcVar17 == pcVar1) break;
      if (puVar15 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if ((char *)puVar15[2] <= pcVar17) {
        FUN_00d83c2d();
      }
      ArchetypeDB_getInstance();
      Archetype_getField3c(this_00);
      FUN_0138a380();
      ArchetypeDB_getInstance();
      iVar16 = ArchetypeDB_getArchetype();
      if (iVar16 != 0) {
        FUN_012fa910();
        uStack_8 = 0x1b;
        FUN_012fa910();
        _uStack_8 = CONCAT31(uStack_7,0x1c);
        (**(code **)(*(int *)(iVar16 + 4) + 4))();
        if ((char *)puVar15[2] <= pcVar17) {
          FUN_00d83c2d();
        }
        (**(code **)(**(int **)pcVar17 + 4))();
        if ((local_129c == (void *)0x2) && (local_12ac == (undefined4 *)0x2)) {
          iVar16 = FUN_0123c340();
          iVar11 = FUN_0123c340();
          if (iVar16 != iVar11) {
            puVar20 = (undefined4 *)FUN_01258670();
            (**(code **)(*(int *)*puVar20 + 0x10))();
          }
        }
        uStack_8 = 0x1b;
        FUN_01300cd0();
        uStack_8 = 0x1a;
        FUN_01300cd0();
      }
      if ((char *)puVar15[2] <= pcVar17) {
        FUN_00d83c2d();
      }
      pcStack_12c4 = pcVar17 + 4;
    }
    piStack_12d0 = Mem_Alloc(0x14);
    uStack_8 = 0x1d;
    if (piStack_12d0 == (int *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    _uStack_8 = CONCAT31(uStack_7,0x1a);
    FUN_012f8c70();
    EvaluationEnvironment_getGame(local_12cc);
    iVar16 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar5,iVar16);
    piVar18 = EvaluationEnvironment_getGame(local_12cc);
    (**(code **)(*piVar18 + 0x154))();
    local_4 = 0xffffffff;
    if (local_1288 == (char *)0x0) {
      ExceptionList = local_c;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_1288);
  case 0x222e5:
    local_12cc = Mem_Alloc(0x14);
    local_4 = 5;
    if (local_12cc == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70();
    puVar15 = local_12c8;
    EvaluationEnvironment_getGame(local_12c8);
    pcVar17 = (char *)StateMachine_getCurrentState();
LAB_014589f9:
    DisplayActionBuilder_addIntArg(pvVar5,(int)pcVar17);
    piVar18 = EvaluationEnvironment_getGame(puVar15);
    uVar19 = (**(code **)(*piVar18 + 0x154))();
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar19 >> 8),1);
  default:
switchD_014575ae_caseD_1adb2:
    bVar4 = ActionNode_addCommandForProperty
                      (this,param_1_,(void *)param_2_,local_12c8,in_stack_00000010);
    ExceptionList = local_c;
    return CONCAT31(extraout_var,bVar4);
  }
  local_4 = 0xffffffff;
  iVar16 = FUN_01385460();
LAB_0145927d:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar16 >> 8),1);
switchD_014575ae_caseD_1add9:
  piVar6 = (int *)0x0;
  local_127c = (char *)0x0;
  local_12b0 = (undefined4 *)0x0;
  local_12b8 = (void *)0x0;
  local_1274 = (undefined4 *******)0x0;
  local_12cc = (void *)0x0;
  piVar18 = (int *)0x0;
  local_10e4 = 0xf;
  local_10e8 = (undefined4 *******)0x0;
  local_10f8 = (void *)((uint)local_10f8 & 0xffffff00);
  local_1058 = 0xf;
  local_105c = 0;
  local_106c = (void *)((uint)local_106c & 0xffffff00);
  local_10ac = 0xf;
  local_10b0 = (undefined4 *******)0x0;
  local_10c0 = (void *)((uint)local_10c0 & 0xffffff00);
  local_1074 = 0xf;
  local_1078 = 0;
  local_1088 = (void *)((uint)local_1088 & 0xffffff00);
  local_1090 = 0xf;
  local_1094 = (undefined4 *******)0x0;
  local_10a4 = (void *)((uint)local_10a4 & 0xffffff00);
  uVar2 = (uint3)puStack_12b4;
  puStack_12b4 = (undefined4 *)(uint)(uVar2 & 0xffff);
  local_1288 = (char *)0x0;
  local_1284 = (undefined4 *******)0x0;
  local_1280 = 0;
  local_4 = 0xd;
  piVar8 = EvaluationEnvironment_getGame(local_12c8);
  (**(code **)(*piVar8 + 0x144))();
  FUN_01258ec0();
  piVar8 = (int *)0x0;
  while( true ) {
    pcVar17 = pcStack_12c4;
    local_127c = local_1288;
    if (local_1288 < local_128c) {
      FUN_00d83c2d();
    }
    if ((local_12c8 == (undefined4 *)0x0) || (local_12c8 != &uStack_1290)) {
      FUN_00d83c2d();
    }
    pvVar5 = local_12cc;
    if (pcVar17 == local_127c) break;
    while( true ) {
      if (local_12c8 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if ((char *)local_12c8[2] <= pcVar17) {
        FUN_00d83c2d();
      }
      cVar3 = (**(code **)(**(int **)pcVar17 + 0x1c0))();
      if (cVar3 == '\0') break;
      if (*(char **)((int)local_12cc + 8) <= pcVar17) {
        FUN_00d83c2d();
      }
      (**(code **)(**(int **)pcVar17 + 0x1b4))();
    }
    if (*(char **)((int)local_12cc + 8) <= pcVar17) {
      FUN_00d83c2d();
    }
    cVar3 = (**(code **)(**(int **)pcVar17 + 0x14))();
    piVar9 = piVar8;
    if (cVar3 != '\0') {
      puVar15 = (undefined4 *)FUN_01258670();
      (**(code **)(*(int *)*puVar15 + 0x15c))();
      pvVar5 = EvaluationEnvironment_getGame(local_12cc);
      find_play_element_in_maps(pvVar5,elementId_);
      piVar9 = (int *)FUN_00d8d382();
      if (piVar8 != (int *)0x0) {
        piVar18 = piVar9;
        piVar9 = piVar8;
      }
    }
    if ((char *)local_12c8[2] <= pcVar17) {
      FUN_00d83c2d();
    }
    pcStack_12c4 = pcVar17 + 4;
    piVar8 = piVar9;
  }
  piVar9 = piStack_12d0;
  if ((piVar8 != (int *)0x0) && (piVar18 != (int *)0x0)) {
    pcStack_12c4 = (char *)(**(code **)(*piVar8 + 0x15c))();
    pcVar17 = (char *)(**(code **)(*piVar18 + 0x15c))();
    local_1288 = pcVar17;
    uStack_1290 = FUN_0140c8d0();
    pcStack_12c4 = (char *)FUN_0140c8d0();
    pcVar17 = pcVar17 + -(int)local_12cc;
    local_128c = pcVar17;
    pvVar10 = (void *)FUN_013402b0();
    piVar6 = (int *)unknown_getField30(pvVar10);
    cVar3 = (**(code **)(*piVar6 + 0x1c0))();
    if (cVar3 == '\0') {
      pvVar10 = (void *)FUN_013402b0();
      piVar6 = (int *)unknown_getField30(pvVar10);
      (**(code **)(*piVar6 + 0x1c0))();
    }
    piVar22 = piVar8;
    piVar6 = piVar18;
    if (pcVar17 == (char *)0x0) {
      if ((int)local_12c8 < (int)pppppppuStack_1294) {
LAB_01457a52:
        piVar22 = piVar18;
        piVar6 = piVar8;
      }
      else if ((((int)local_12c8 <= (int)pppppppuStack_1294) &&
               (iVar16 = (**(code **)(*piVar8 + 0x15c))(), piVar22 = piVar18, piVar6 = piVar8,
               iVar16 != 0x222e3)) &&
              (iVar16 = (**(code **)(*piVar18 + 0x15c))(), piVar22 = piVar8, piVar6 = piVar18,
              iVar16 != 0x222e3)) {
        local_12cc = (void *)CONCAT13(1,(undefined3)local_12cc);
        piVar22 = piVar18;
        piVar6 = piVar8;
      }
    }
    else if ((pcVar17 == (char *)0x1) || (pcVar17 == (char *)0xfffffffe)) goto LAB_01457a52;
    (**(code **)(*piVar22 + 0x1c0))();
    cVar3 = (**(code **)(*piVar22 + 0x1c0))();
    if ((cVar3 != '\0') ||
       ((piVar9 = piVar22, (char)((uint)unaff_EBX >> 0x18) != '\0' && (local_127c == (char *)0x0))))
    {
      local_12b8._0_3_ = CONCAT12(1,(undefined2)local_12b8);
      piVar9 = piVar6;
      piVar6 = piVar22;
    }
    if (local_12b8._3_1_ != '\0') {
      iVar16 = 1;
      pvVar10 = EvaluationEnvironment_getGame(pvVar5);
      pvVar10 = PlayArea_findPlayerElementById(pvVar10,iVar16);
      piVar18 = (int *)unknown_getField30(pvVar10);
      (**(code **)(*piVar18 + 0x1ac))();
      pvVar10 = Mem_Alloc(0x14);
      local_c._0_1_ = 0x19;
      if (pvVar10 == (void *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)FUN_012f9eb0();
      }
      local_c = (void *)CONCAT31(local_c._1_3_,0xd);
      FUN_012f8c70();
      EvaluationEnvironment_getGame(pvVar5);
      iVar16 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar10,iVar16);
      piVar18 = EvaluationEnvironment_getGame(pvVar5);
      (**(code **)(*piVar18 + 0x154))();
      goto LAB_014583ca;
    }
  }
  pvVar5 = (void *)FUN_013402b0();
  piVar18 = (int *)unknown_getField30(pvVar5);
  (**(code **)(*piVar18 + 0x1ac))();
  iVar16 = (**(code **)(*piVar6 + 0x15c))();
  FUN_012fa910();
  uStack_14 = 0xe;
  cVar3 = (char)((uint)&stack0xffffed2c >> 0x10);
  (**(code **)(*piVar6 + 4))();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1218,"");
  uStack_1c = 0xf;
  FUN_01300ff0();
  uStack_1c = 0xe;
  FUN_0041f1d7();
  if (((iVar16 == 0x222e6) || (iVar16 == 0x222e7)) || (iVar16 == 0x222e8)) {
    FUN_01241fc0();
  }
  iVar11 = FUN_0138a380();
  iVar16 = (iVar11 % 100000000) / 100000;
  if ((100000000 < iVar11) && (0 < iVar16)) {
    iVar11 = iVar11 + iVar16 * -100000;
  }
  _sprintf(acStack_1050,"Tcg_title_%d",iVar11);
  FUN_01241fc0();
  uStack_1c = 0xd;
  FUN_01300cd0();
  pppppppcVar27 = (char *******)0x22974;
  iVar16 = (**(code **)(*piVar9 + 0x15c))();
  FUN_012fa910();
  uStack_24 = 0x10;
  puVar26 = &stack0xffffed1c;
  pvVar5 = (void *)0x1;
  (**(code **)(*piVar9 + 4))();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_120c,"");
  uStack_2c = 0x11;
  FUN_01300ff0(abStack_120c);
  uStack_2c = 0x10;
  FUN_0041f1d7();
  if (iVar16 == 0x222e6) {
    pcVar17 = "Tcg_Game.ColorRed";
LAB_01457d57:
    FUN_01241fc0(pcVar17);
  }
  else {
    if (iVar16 == 0x222e7) {
      pcVar17 = "Tcg_Game.ColorGreen";
      goto LAB_01457d57;
    }
    if (iVar16 == 0x222e8) {
      pcVar17 = "Tcg_Game.ColorBlue";
      goto LAB_01457d57;
    }
  }
  iVar11 = FUN_0138a380();
  iVar16 = (iVar11 % 100000000) / 100000;
  if ((100000000 < iVar11) && (0 < iVar16)) {
    iVar11 = iVar11 + iVar16 * -100000;
  }
  _sprintf(acStack_1060,"Tcg_title_%d",iVar11);
  FUN_01241fc0(acStack_1060);
  uStack_2c = 0xd;
  FUN_01300cd0();
  iVar16 = FUN_012e1e30();
  piVar18 = *(int **)(iVar16 + 0x28);
  pppppppuStack_1294 = local_10e8;
  if (uStack_10d4 < 0x10) {
    pppppppuStack_1294 = &local_10e8;
  }
  pcStack_1298 = "title_color";
  uStack_1290 = 6;
  local_128c = (char *)0xffffffff;
  local_1284 = local_1094;
  if (uStack_1080 < 0x10) {
    local_1284 = &local_1094;
  }
  local_1288 = "title";
  local_1280 = 6;
  local_127c = (char *)0xffffffff;
  local_1274 = local_10cc;
  if (uStack_10b8 < 0x10) {
    local_1274 = &local_10cc;
  }
  local_1278 = "target1_color";
  uStack_1270 = 6;
  uStack_126c = 0xffffffff;
  pppppppuStack_1264 = local_10b0;
  if (uStack_109c < 0x10) {
    pppppppuStack_1264 = &local_10b0;
  }
  uStack_1260 = 6;
  pcStack_1268 = "target1";
  uStack_125c = 0xffffffff;
  pcVar17 = "Tcg_game.tauntMyCardWon";
  iVar16 = (**(code **)(*piVar6 + 0x15c))(0x22971,0);
  if (iVar16 == 0x222e3) {
    pcVar17 = "Tcg_game.tauntMyBaseWon";
  }
  else {
    iVar16 = (**(code **)(*piVar9 + 0x15c))(0x22971,0);
    if (iVar16 == 0x222e3) {
      pcVar17 = "Tcg_game.tauntYourBaseLost";
    }
  }
  (**(code **)(*piVar18 + 0x40))(pcVar17,auStack_1040,0x1000,&uStack_12a0,4);
  FUN_00f972e0(auStack_1054);
  pvVar10 = EvaluationEnvironment_getGame(pvVar5);
  iVar16 = Game_getMyPlayerID(pvVar10);
  iVar11 = (**(code **)(*piVar6 + 0x28))();
  uVar24 = (uint)(iVar11 == iVar16);
  FUN_012fa910();
  uStack_48 = 0x12;
  FUN_012fa910();
  uStack_110c = 0xf;
  uStack_1110 = 0;
  uStack_1120 = 0;
  uStack_1080 = 0xf;
  uStack_1084 = 0;
  local_1094 = (undefined4 *******)((uint)local_1094 & 0xffffff00);
  uStack_48 = 0x15;
  FUN_00f972e0(&DAT_0176cf38);
  if (local_12b8 == (void *)0x222e6) {
    puVar25 = &DAT_0176cf28;
  }
  else if (local_12b8 == (void *)0x222e7) {
    puVar25 = &DAT_0176cf54;
  }
  else if (local_12b8 == (void *)0x222e8) {
    puVar25 = &DAT_0176cf68;
  }
  else {
    puVar25 = &DAT_0176cf38;
  }
  FUN_00f972e0(puVar25);
  FUN_01300680(2);
  FUN_01300680(2);
  FUN_012417e0(&DAT_018edf48);
  StdString_appendSubstring(auStack_1124,0,0xffffffff);
  pvVar10 = ValueData_toString(&stack0xffffed10,auStack_11f0);
  uStack_48 = 0x16;
  StdString_appendSubstring(pvVar10,0,0xffffffff);
  uStack_48 = 0x15;
  FUN_0041f1d7();
  FUN_012417e0(&DAT_017a0758);
  StdString_appendSubstring(auStack_1098,0,0xffffffff);
  pvVar10 = ValueData_toString(&stack0xffffed20,abStack_120c);
  uStack_48 = 0x17;
  StdString_appendSubstring(pvVar10,0,0xffffffff);
  uStack_48 = 0x15;
  FUN_0041f1d7();
  FUN_012417e0(&DAT_017a0760);
  if (cVar3 != '\0') {
    FUN_012417e0("[GAMETEXT]");
  }
  uVar19 = 0;
  FUN_012a22e0(&stack0xffffecf8);
LAB_01458190:
  pppppppcVar12 = apppppppcStack_113c[0];
  if (uStack_1128 < 0x10) {
    pppppppcVar12 = (char *******)apppppppcStack_113c;
  }
  pppppppcVar12 = (char *******)((int)pppppppcVar12 + iStack_112c);
  puVar25 = puVar26;
  pppppppcVar28 = pppppppcVar27;
  if (pppppppcVar12 == (char *******)0x0) {
LAB_014581e0:
    FUN_00d83c2d();
  }
  else {
    pppppppcVar13 = apppppppcStack_113c[0];
    if (uStack_1128 < 0x10) {
      pppppppcVar13 = (char *******)apppppppcStack_113c;
    }
    if (pppppppcVar12 < pppppppcVar13) goto LAB_014581e0;
    pppppppcVar13 = apppppppcStack_113c[0];
    if (uStack_1128 < 0x10) {
      pppppppcVar13 = (char *******)apppppppcStack_113c;
    }
    if ((char *******)((int)pppppppcVar13 + iStack_112c) < pppppppcVar12) goto LAB_014581e0;
  }
  if ((puVar26 != (undefined1 *)0xfffffffe) &&
     ((puVar26 == (undefined1 *)0x0 || (puVar26 != auStack_1140)))) {
    FUN_00d83c2d();
  }
  if (pppppppcVar27 != pppppppcVar12) {
    if ((char)((uint)uVar19 >> 0x18) == '\0') {
      if (puVar26 != (undefined1 *)0xfffffffe) {
        if (puVar26 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(uint *)(puVar26 + 0x18) < 0x10) {
          puVar14 = puVar26 + 4;
        }
        else {
          puVar14 = *(undefined1 **)(puVar26 + 4);
        }
        if (puVar14 + *(int *)(puVar26 + 0x14) <= pppppppcVar27) {
          FUN_00d83c2d();
        }
      }
      if (*(char *)pppppppcVar27 == '<') {
        uVar19 = 0x1000000;
        pppppppuVar21 = appppppuStack_1254;
        goto LAB_01458287;
      }
      FUN_0140d410();
      puVar26 = puVar25;
      pppppppcVar27 = pppppppcVar28;
    }
    else {
      if (puVar26 != (undefined1 *)0xfffffffe) {
        if (puVar26 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(uint *)(puVar26 + 0x18) < 0x10) {
          puVar25 = puVar26 + 4;
        }
        else {
          puVar25 = *(undefined1 **)(puVar26 + 4);
        }
        if (puVar25 + *(int *)(puVar26 + 0x14) <= pppppppcVar27) {
          FUN_00d83c2d();
        }
      }
      if (*(char *)pppppppcVar27 == '>') {
        uVar19 = 0;
      }
      pppppppuVar21 = &local_1274;
LAB_01458287:
      puVar15 = (undefined4 *)FUN_0138f9d0(pppppppuVar21,puVar26,pppppppcVar27);
      puVar26 = (undefined1 *)*puVar15;
      pppppppcVar27 = (char *******)puVar15[1];
    }
    goto LAB_01458190;
  }
  piStack_12bc = Mem_Alloc(0x14);
  uStack_48 = 0x18;
  if (piStack_12bc == (int *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = (void *)FUN_012f9eb0();
  }
  uStack_48 = 0x15;
  FUN_012f8c70(0xfc);
  EvaluationEnvironment_getGame(pvVar5);
  iVar16 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar10,iVar16);
  DisplayActionBuilder_addIntArg(pvVar10,uVar24);
  DisplayActionBuilder_addStringArg(pvVar10,auStack_1140);
  piVar18 = EvaluationEnvironment_getGame(pvVar5);
  (**(code **)(*piVar18 + 0x154))(pvVar10);
  local_4._0_1_ = 0x14;
  FUN_0041f1d7();
  local_4._0_1_ = 0x13;
  FUN_0041f1d7();
  local_4._0_1_ = 0x12;
  FUN_01300cd0();
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_01300cd0();
LAB_014583ca:
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (local_1288 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1288);
  }
  local_1288 = (char *)0x0;
  local_1284 = (undefined4 *******)0x0;
  local_1280 = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (0xf < local_1090) {
                    /* WARNING: Subroutine does not return */
    _free(local_10a4);
  }
  local_1090 = 0xf;
  local_1094 = (undefined4 *******)0x0;
  local_10a4 = (void *)((uint)local_10a4 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,10);
  if (0xf < local_1074) {
                    /* WARNING: Subroutine does not return */
    _free(local_1088);
  }
  local_1074 = 0xf;
  local_1078 = 0;
  local_1088 = (void *)((uint)local_1088 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (local_10ac < 0x10) {
    local_10ac = 0xf;
    local_10b0 = (undefined4 *******)0x0;
    local_10c0 = (void *)((uint)local_10c0 & 0xffffff00);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (0xf < local_1058) {
                    /* WARNING: Subroutine does not return */
      _free(local_106c);
    }
    local_1058 = 0xf;
    local_105c = 0;
    local_106c = (void *)((uint)local_106c & 0xffffff00);
    local_4 = 0xffffffff;
    if (local_10e4 < 0x10) {
      ExceptionList = local_c;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_10f8);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_10c0);
}

