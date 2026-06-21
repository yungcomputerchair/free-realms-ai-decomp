// addr: 0x01465430
// name: StateMachineState_deserializeActionSelection
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall StateMachineState_deserializeActionSelection(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int actionId_;
  int extraout_EDX;
  int actionId__00;
  int unaff_EBX;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int aiStack_6c [2];
  int iStack_64;
  undefined4 *local_60;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined1 auStack_54 [8];
  void *pvStack_4c;
  void *pvStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  uint uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Large deserializer for an action-selection state: reads many integer
                       fields/lists, resolves play-area elements and Card actions by id, and
                       delegates to StateMachineState_deserializeWithPlayer. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0169dc30;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  (**(code **)(*param_1 + 0x10))(param_2,&local_60,DAT_01b839d8 ^ (uint)&stack0xffffff60);
  if (extraout_AL != '\0') {
    StateMachineState_deserializeWithPlayer(param_1,param_2);
    bVar1 = Deserializer_readInteger(param_2,&iStack_8c);
    if (bVar1) {
      param_1[0x3e] = iStack_8c;
      bVar1 = Deserializer_readInteger(param_2,&iStack_88);
      if (bVar1) {
        param_1[0x3f] = iStack_88;
        bVar1 = Deserializer_readInteger(param_2,&iStack_84);
        if (bVar1) {
          param_1[0x40] = iStack_84;
          pvStack_3c = (void *)0x0;
          uStack_38 = 0;
          uStack_34 = 0;
          local_14 = (void *)0x0;
          cVar2 = Deserializer_readTripleIntList(auStack_40);
          if (cVar2 != '\0') {
            piVar4 = (int *)FUN_01303500(&iStack_64);
            iStack_5c = *piVar4;
            puStack_58 = (undefined4 *)piVar4[1];
            piVar4 = (int *)FUN_013034a0(auStack_54);
            iStack_64 = *piVar4;
            local_60 = (undefined4 *)piVar4[1];
            do {
              puVar8 = local_60;
              iVar7 = iStack_64;
              if ((iStack_64 == 0) || (iStack_64 != iStack_5c)) {
                FUN_00d83c2d();
              }
              if (puVar8 == puStack_58) {
                pvStack_2c = (void *)0x0;
                uStack_28 = 0;
                uStack_24 = 0;
                local_14 = (void *)CONCAT31(local_14._1_3_,1);
                cVar2 = Deserializer_readTripleIntList(auStack_30);
                if (cVar2 != '\0') {
                  piVar4 = (int *)FUN_01303500(auStack_54);
                  iStack_5c = *piVar4;
                  puStack_58 = (undefined4 *)piVar4[1];
                  piVar4 = (int *)FUN_013034a0(auStack_54);
                  iStack_64 = *piVar4;
                  puVar8 = (undefined4 *)piVar4[1];
                  while( true ) {
                    iVar7 = iStack_64;
                    if ((iStack_64 == 0) || (iStack_64 != iStack_5c)) {
                      FUN_00d83c2d();
                    }
                    if (puVar8 == puStack_58) break;
                    if (iVar7 == 0) {
                      FUN_00d83c2d();
                    }
                    if (*(undefined4 **)(iVar7 + 8) <= puVar8) {
                      FUN_00d83c2d();
                    }
                    uVar9 = StateMachineState_getGame
                                      (*puVar8,0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0);
                    pvVar5 = find_play_element_in_maps
                                       ((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
                    uVar9 = FUN_00d8d382(pvVar5);
                    iVar7 = (int)((ulonglong)uVar9 >> 0x20);
                    pvVar5 = (void *)uVar9;
                    if (pvVar5 == (void *)0x0) {
                      local_14 = (void *)((uint)local_14 & 0xffffff00);
                      if (pvStack_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                        _free(pvStack_2c);
                      }
                      pvStack_2c = (void *)0x0;
                      uStack_28 = 0;
                      uStack_24 = 0;
                      local_14 = (void *)0xffffffff;
                      if (pvStack_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                        _free(pvStack_3c);
                      }
                      ExceptionList = pvStack_1c;
                      return 0;
                    }
                    if (*(undefined4 **)(iStack_64 + 8) <= puVar8) {
                      FUN_00d83c2d();
                      iVar7 = extraout_EDX;
                    }
                    pvVar6 = Card_getActionByID(pvVar5,iVar7);
                    if (*(undefined4 **)(iStack_64 + 8) <= puVar8) {
                      FUN_00d83c2d();
                    }
                    uStack_44 = puVar8[2];
                    pvStack_4c = pvVar5;
                    pvStack_48 = pvVar6;
                    FUN_01336520(&pvStack_4c);
                    if (*(undefined4 **)(iStack_64 + 8) <= puVar8) {
                      FUN_00d83c2d();
                    }
                    puVar8 = puVar8 + 3;
                  }
                  bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffff68);
                  if (!bVar1) {
                    local_14 = (void *)CONCAT31(local_14._1_3_,bVar1);
                    if (pvStack_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                      _free(pvStack_2c);
                    }
                    pvStack_2c = (void *)0x0;
                    uStack_28 = 0;
                    uStack_24 = 0;
                    local_14 = (void *)0xffffffff;
                    if (pvStack_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                      _free(pvStack_3c);
                    }
                    ExceptionList = pvStack_1c;
                    return 0;
                  }
                  if (unaff_EBX == 0) {
LAB_014658a4:
                    bVar1 = Deserializer_readInteger(param_2,&iStack_90);
                    if (bVar1) {
                      if ((iStack_90 != 0) && (unaff_EBX != 0)) {
                        pvVar5 = Card_getActionByID((void *)param_1[0x49],actionId__00);
                        param_1[0x4a] = (int)pvVar5;
                        if (pvVar5 == (void *)0x0) goto LAB_0146562f;
                      }
                      bVar1 = Deserializer_readInteger(param_2,&iStack_80);
                      if (bVar1) {
                        if ((iStack_90 != 0) && (unaff_EBX != 0)) {
                          param_1[0x4b] = iStack_80;
                        }
                        bVar1 = Deserializer_readInteger(param_2,&iStack_7c);
                        if (bVar1) {
                          *(bool *)(param_1 + 0x4c) = iStack_7c != 0;
                          bVar1 = Deserializer_readInteger(param_2,&iStack_78);
                          if (bVar1) {
                            *(bool *)((int)param_1 + 0x131) = iStack_78 != 0;
                            bVar1 = Deserializer_readInteger(param_2,param_1 + 0x4d);
                            if (bVar1) {
                              bVar1 = Deserializer_readInteger(param_2,&iStack_74);
                              if (bVar1) {
                                *(bool *)(param_1 + 0x4e) = iStack_74 != 0;
                                bVar1 = Deserializer_readInteger(param_2,&iStack_70);
                                if (bVar1) {
                                  if (iStack_70 != 0) {
                                    pvVar5 = (void *)StateMachineState_getGame();
                                    pvVar5 = PlayArea_findPlayerElementById(pvVar5,iStack_70);
                                    param_1[0x4f] = (int)pvVar5;
                                    if (pvVar5 == (void *)0x0) goto LAB_0146562f;
                                  }
                                  bVar1 = Deserializer_readInteger(param_2,param_1 + 0x50);
                                  if (bVar1) {
                                    bVar1 = Deserializer_readInteger(param_2,aiStack_6c);
                                    if (bVar1) {
                                      if (aiStack_6c[0] == 0) {
LAB_01465a11:
                                        uVar3 = (**(code **)(*param_1 + 0x14))(param_2);
                                        uStack_18 = uStack_18 & 0xffffff00;
                                        FUN_01306ca0();
                                        uStack_18 = 0xffffffff;
                                        FUN_01306ca0();
                                        ExceptionList = pvStack_20;
                                        return uVar3;
                                      }
                                      pvVar5 = (void *)StateMachineState_getGame();
                                      pvVar5 = PlayArea_findPlayerElementById(pvVar5,aiStack_6c[0]);
                                      param_1[0x51] = (int)pvVar5;
                                      if (pvVar5 != (void *)0x0) goto LAB_01465a11;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar9 = StateMachineState_getGame
                                      (unaff_EBX,0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0);
                    pvVar5 = find_play_element_in_maps
                                       ((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
                    iVar7 = FUN_00d8d382(pvVar5);
                    param_1[0x49] = iVar7;
                    if (iVar7 != 0) goto LAB_014658a4;
                  }
                }
LAB_0146562f:
                local_14 = (void *)((uint)local_14 & 0xffffff00);
                FUN_01306ca0();
                break;
              }
              if (iVar7 == 0) {
                FUN_00d83c2d();
              }
              if (*(undefined4 **)(iVar7 + 8) <= puVar8) {
                FUN_00d83c2d();
              }
              uVar9 = StateMachineState_getGame
                                (*puVar8,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
              pvVar5 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
              pvVar5 = (void *)FUN_00d8d382(pvVar5);
              if (pvVar5 == (void *)0x0) break;
              FUN_013514f0();
              pvVar6 = Card_getActionByID(pvVar5,actionId_);
              iVar7 = FUN_013514f0();
              uStack_44 = *(undefined4 *)(iVar7 + 8);
              pvStack_4c = pvVar5;
              pvStack_48 = pvVar6;
              FUN_01336520(&pvStack_4c);
              FUN_01351520(auStack_54,0);
            } while( true );
          }
          local_14 = (void *)0xffffffff;
          FUN_01306ca0();
        }
      }
    }
  }
  ExceptionList = pvStack_1c;
  return 0;
}

