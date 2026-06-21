// addr: 0x01490090
// name: SetEnvironmentNode_resolveTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/SetEnvironmentNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall SetEnvironmentNode_resolveTarget(int param_1,void *param_2)

{
  char cVar1;
  void **item;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int elementId_;
  int elementId__00;
  undefined4 uVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  undefined1 *puVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *name;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 local_108 [4];
  void *local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 *local_f4;
  int *local_f0;
  undefined1 local_ec [12];
  int local_e0;
  void *local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  uint local_cc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c8 [4];
  undefined4 *local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  undefined4 uStack_a8;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Resolves a SetEnvironmentNode target from direct target selectors, string
                       element ids, expression-tree matches, or highest/lowest value filters;
                       updates environment return values/current target as needed. */
  puStack_8 = &LAB_016a1fb0;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xfffffee8);
  ExceptionList = &local_c;
  puVar6 = (undefined4 *)**(int **)(param_1 + 8);
  local_f8 = param_1 + 4;
  local_104 = (void *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_4 = 0;
  local_f4 = puVar6;
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_copyFrom(local_a0,param_2,item);
  EvaluationEnvironment_setBooleanKey9(1);
  EvaluationEnvironment_tracef(param_2,"getting valid targets.",item);
  if (puVar6 == *(undefined4 **)(param_1 + 8)) {
    FUN_00d83c2d();
  }
  if (*(int *)(puVar6[4] + 4) == 2) {
    EvaluationEnvironment_tracef(param_2,"Setting target to another target.",item);
    if (puVar6 == *(undefined4 **)(param_1 + 8)) {
      FUN_00d83c2d();
    }
    iVar4 = puVar6[4];
    if ((*(int *)(iVar4 + 4) == 2) ||
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), *(int *)(iVar4 + 4) == 2)) {
      uVar9 = *(undefined4 *)(iVar4 + 8);
    }
    else {
      uVar9 = 0;
    }
    switch(uVar9) {
    case 1:
      EvaluationEnvironment_tracef(param_2,"setting target to target1",item);
      piVar7 = EvaluationEnvironment_getTargetCard(param_2);
      if (piVar7 != (int *)0x0) {
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,2);
LAB_014901d0:
        uVar9 = PlayElement_getId();
        FUN_01315d10(uVar9);
LAB_014901e6:
        EvaluationEnvironment_setReturnValue((void *)0x2f,local_ec);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_01300cd0();
      }
      break;
    case 2:
      EvaluationEnvironment_tracef(param_2,"Setting target to target2",item);
      piVar7 = EvaluationEnvironment_getTarget2Card(param_2);
      if (piVar7 != (int *)0x0) {
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,3);
        uVar9 = PlayElement_getId();
        FUN_01315d10(uVar9);
        goto LAB_014901e6;
      }
      break;
    default:
      EvaluationEnvironment_tracef(param_2,"couldn\'t figure out target.",item);
      local_4 = local_4 & 0xffffff00;
      FUN_01385460();
      local_4 = 0xffffffff;
      if (local_104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_104);
      }
      goto LAB_0149107c;
    case 0x11:
      EvaluationEnvironment_tracef(param_2,"Setting target to this",item);
      piVar7 = EvaluationEnvironment_getOriginCard(param_2);
      if (piVar7 != (int *)0x0) {
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,6);
        uVar9 = PlayElement_getId();
        FUN_01315d10(uVar9);
        goto LAB_014901e6;
      }
      break;
    case 0x30:
      EvaluationEnvironment_tracef(param_2,"Setting target to dynamiccard",item);
      piVar7 = (int *)Rules_getDynamicCardReturnCard();
      if (piVar7 != (int *)0x0) {
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,4);
        uVar9 = PlayElement_getId();
        FUN_01315d10(uVar9);
        goto LAB_014901e6;
      }
      break;
    case 0x37:
      EvaluationEnvironment_tracef(param_2,"Setting target to dynamiccard2",item);
      piVar7 = Rules_getVariable27Card(param_2);
      if (piVar7 != (int *)0x0) {
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,5);
        goto LAB_014901d0;
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_01385460();
    local_4 = 0xffffffff;
    STLVector_int_clear(local_108);
  }
  else {
    if (puVar6 == *(undefined4 **)(param_1 + 8)) {
      FUN_00d83c2d();
    }
    if (*(int *)(puVar6[4] + 4) == 3) {
      if (puVar6 == *(undefined4 **)(param_1 + 8)) {
        FUN_00d83c2d();
      }
      pcVar2 = (char *)FUN_01240e20();
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = (undefined4 *)((uint)local_c4 & 0xffffff00);
      pcVar8 = pcVar2;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_c8,pcVar2,(int)pcVar8 - (int)(pcVar2 + 1));
      local_4._0_1_ = 7;
      name = local_c8;
      pvVar3 = EvaluationEnvironment_getGame(param_2);
      iVar4 = Game_findNamedEntryValue(pvVar3,name);
      local_4._0_1_ = 1;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = (undefined4 *)((uint)local_c4 & 0xffffff00);
      if (puVar6 == *(undefined4 **)(param_1 + 8)) {
        FUN_00d83c2d();
      }
      uVar9 = FUN_01240e20(iVar4);
      EvaluationEnvironment_tracef(param_2,"getting elementID from string ID %s = %d",uVar9);
      uVar13 = 0;
      pTVar11 = &Card::RTTI_Type_Descriptor;
      pTVar10 = &PlayElement::RTTI_Type_Descriptor;
      uVar9 = 0;
      pvVar3 = EvaluationEnvironment_getGame(param_2);
      pvVar3 = find_play_element_in_maps(pvVar3,elementId_);
      piVar7 = (int *)FUN_00d8d382(pvVar3,uVar9,pTVar10,pTVar11,uVar13);
      if ((piVar7 != (int *)0x0) && (cVar1 = (**(code **)(*piVar7 + 0x1e8))(), cVar1 != '\0')) {
        uVar9 = (**(code **)(*piVar7 + 0x28))();
        EvaluationEnvironment_tracef(param_2,"got PlayerCard, setting %d on env.",uVar9);
        iVar4 = (**(code **)(*piVar7 + 0x28))();
        pvVar3 = EvaluationEnvironment_getGame(param_2);
        pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar4);
        FUN_013876d0(pvVar3);
      }
      pvVar3 = EvaluationEnvironment_getGame(param_2);
      piVar7 = find_play_element_in_maps(pvVar3,elementId__00);
LAB_014904db:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01385460();
      local_4 = 0xffffffff;
      if (local_104 == (void *)0x0) {
        ExceptionList = local_c;
        return piVar7;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    if (puVar6 == *(undefined4 **)(param_1 + 8)) {
      FUN_00d83c2d();
    }
    if (*(int *)(puVar6[4] + 4) == 5) {
      if (puVar6 == *(undefined4 **)(param_1 + 8)) {
        FUN_00d83c2d();
      }
      FUN_012fb470(local_108,local_a0);
      if (local_104 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = local_100 - (int)local_104 >> 2;
      }
      if ((uVar5 <= *(uint *)(param_1 + 0x30)) && (*(uint *)(param_1 + 0x30) != 0)) {
        if (local_104 == (void *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_100 - (int)local_104 >> 2;
        }
        *(int *)(param_1 + 0x30) = iVar4 + -1;
      }
      EvaluationEnvironment_tracef(param_2,"targetChoice: %d",*(undefined4 *)(param_1 + 0x30));
      if (local_104 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = local_100 - (int)local_104 >> 2;
      }
      if (*(uint *)(param_1 + 0x30) < uVar5) {
        piVar7 = (int *)FUN_01258ef0(&local_ac);
        local_d0 = *piVar7;
        local_cc = piVar7[1];
        local_c4 = (void *)0x0;
        local_c0 = 0;
        local_bc = 0;
        local_4 = CONCAT31(local_4._1_3_,8);
        piVar7 = (int *)FUN_01258ec0(&local_ac);
        iVar4 = *piVar7;
        uVar5 = piVar7[1];
        while( true ) {
          if ((iVar4 == 0) || (iVar4 != local_d0)) {
            FUN_00d83c2d();
          }
          if (uVar5 == local_cc) break;
          if (iVar4 == 0) {
            FUN_00d83c2d();
          }
          if (*(uint *)(iVar4 + 8) <= uVar5) {
            FUN_00d83c2d();
          }
          local_f0 = (int *)PlayElement_getId();
          FUN_0042c155(&local_f0);
          if (*(uint *)(iVar4 + 8) <= uVar5) {
            FUN_00d83c2d();
          }
          uVar5 = uVar5 + 4;
        }
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_01300680(6);
        FUN_005f1e5c(local_c8);
        EvaluationEnvironment_setReturnValue((void *)0x2f,local_ec);
        uVar5 = *(uint *)(param_1 + 0x30);
        if ((local_104 == (void *)0x0) || ((uint)(local_100 - (int)local_104 >> 2) <= uVar5)) {
          FUN_00d83c2d();
        }
        EvaluationEnvironment_logCardMessage
                  (param_2,"setting target to card: ",*(char **)((int)local_104 + uVar5 * 4),item);
        uVar5 = *(uint *)(param_1 + 0x30);
        if ((local_104 == (void *)0x0) || ((uint)(local_100 - (int)local_104 >> 2) <= uVar5)) {
          FUN_00d83c2d();
        }
        if (*(int *)((int)local_104 + uVar5 * 4) != 0) {
          uVar5 = *(uint *)(param_1 + 0x30);
          if ((local_104 == (void *)0x0) || ((uint)(local_100 - (int)local_104 >> 2) <= uVar5)) {
            FUN_00d83c2d();
          }
          cVar1 = (**(code **)(**(int **)((int)local_104 + uVar5 * 4) + 0x1e8))();
          if (cVar1 == '\0') {
            FUN_01387300(1);
          }
          else {
            EvaluationEnvironment_tracef(param_2,"setting player on environment too!",item);
            puVar6 = PointerVector_at(local_108,*(void **)(param_1 + 0x30),(int)item);
            iVar4 = (**(code **)(*(int *)*puVar6 + 0x28))();
            pvVar3 = EvaluationEnvironment_getGame(param_2);
            pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar4);
            if (pvVar3 == (void *)0x0) {
              EvaluationEnvironment_tracef(param_2,"Couldn\'t get player for player card?!?",item);
            }
            else {
              FUN_013876d0(pvVar3);
            }
          }
          uVar5 = *(uint *)(param_1 + 0x30);
          if ((local_104 == (void *)0x0) || ((uint)(local_100 - (int)local_104 >> 2) <= uVar5)) {
            FUN_00d83c2d();
          }
          piVar7 = *(int **)((int)local_104 + uVar5 * 4);
          local_4._0_1_ = 8;
          FUN_01300cd0();
          local_4._0_1_ = 1;
          if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_c4);
          }
          local_c4 = (undefined4 *)0x0;
          local_c0 = 0;
          local_bc = 0;
          goto LAB_014904db;
        }
        EvaluationEnvironment_tracef(param_2,"ARGH! card is null!!",item);
        local_4._0_1_ = 8;
        FUN_01300cd0();
        local_4 = CONCAT31(local_4._1_3_,1);
        if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_c4);
        }
        local_c4 = (undefined4 *)0x0;
        local_c0 = 0;
        local_bc = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_01385460();
        local_4 = 0xffffffff;
        if (local_104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_104);
        }
        goto LAB_0149107c;
      }
      EvaluationEnvironment_tracef(param_2,"no cards matched!",item);
    }
    else {
      if (puVar6 == *(undefined4 **)(param_1 + 8)) {
        FUN_00d83c2d();
      }
      if (*(int *)(puVar6[4] + 4) == 0xe) {
        MacroNodeMapIterator_getValuePtr(&local_f8);
        iVar4 = FUN_012fa780();
        local_f0 = (int *)0x0;
        piVar7 = (int *)FUN_013144f0(&local_ac,&local_f0);
        local_e0 = *piVar7;
        local_dc = (void *)piVar7[1];
        local_f4 = *(undefined4 **)(iVar4 + 4);
        local_f8 = iVar4;
        cVar1 = FUN_012b0680(&local_f8);
        if (cVar1 == '\0') {
          FUN_012f5a60("finder != intValueMap->end()",
                       "..\\common\\common\\node\\SetEnvironmentNode.cpp",0xdc);
        }
        puVar14 = local_a0;
        puVar12 = local_108;
        FUN_012b1980(puVar12,puVar14);
        FUN_012fb470(puVar12,puVar14);
        EvaluationEnvironment_logCardList(param_2,"initial matches: ",local_108);
        local_f0 = (int *)0x1;
        piVar7 = (int *)FUN_013144f0(&local_ac,&local_f0);
        local_e0 = *piVar7;
        local_dc = (void *)piVar7[1];
        local_f4 = *(undefined4 **)(iVar4 + 4);
        local_f8 = iVar4;
        cVar1 = FUN_012b0680(&local_f8);
        if (cVar1 == '\0') {
          local_d0 = 2;
          piVar7 = (int *)FUN_013144f0(local_ec,&local_d0);
          local_e0 = *piVar7;
          local_dc = (void *)piVar7[1];
          uStack_a8 = *(undefined4 *)(iVar4 + 4);
          local_ac = iVar4;
          cVar1 = FUN_012b0680(&local_ac);
          if (cVar1 == '\0') {
            FUN_012f5a60("finder != intValueMap->end()",
                         "..\\common\\common\\node\\SetEnvironmentNode.cpp",0x115);
          }
          FUN_012b1980();
          EvaluationEnvironment_tracefWithPrefix(param_2,"looking for lowest ");
          iVar4 = FUN_012b1980();
          if (*(int *)(*(int *)(iVar4 + 4) + 4) != 2) {
            FUN_012f5a60("finder->second->isIntegerValue()",
                         "..\\common\\common\\node\\SetEnvironmentNode.cpp",0x117);
          }
          FUN_012b1980();
          local_d0 = FUN_0123c340();
          piVar7 = (int *)FUN_01258ef0(local_ec);
          local_f8 = *piVar7;
          local_f4 = (undefined4 *)piVar7[1];
          local_e0 = 0x7fffffff;
          local_c4 = (undefined4 *)0x0;
          local_c0 = 0;
          local_bc = 0;
          local_4 = CONCAT31(local_4._1_3_,0xd);
          piVar7 = (int *)FUN_01258ec0(local_ec);
          local_ac = *piVar7;
          puVar6 = (undefined4 *)piVar7[1];
          while( true ) {
            iVar4 = local_ac;
            if ((local_ac == 0) || (local_ac != local_f8)) {
              FUN_00d83c2d();
            }
            if (puVar6 == local_f4) break;
            if (iVar4 == 0) {
              FUN_00d83c2d();
            }
            if (*(undefined4 **)(iVar4 + 8) <= puVar6) {
              FUN_00d83c2d();
            }
            local_f0 = (int *)*puVar6;
            iVar4 = (**(code **)(*local_f0 + 0x15c))(local_d0,param_2);
            uVar9 = PlayElement_getId(iVar4);
            EvaluationEnvironment_tracef(param_2,"Card %d has value: %d",uVar9);
            if (iVar4 < local_e0) {
              local_e0 = iVar4;
              PointerVector_clear(local_c8);
LAB_01490e70:
              PointerVector_pushBack(local_c8,&local_f0,item);
            }
            else if (iVar4 == local_e0) goto LAB_01490e70;
            if (*(undefined4 **)(local_ac + 8) <= puVar6) {
              FUN_00d83c2d();
            }
            puVar6 = puVar6 + 1;
          }
          EvaluationEnvironment_tracef(param_2,"lowest value: %d",local_e0);
          EvaluationEnvironment_logCardList(param_2,"lowest value Cards: ",local_c8);
          if ((local_c4 != (undefined4 *)0x0) && (local_c0 - (int)local_c4 >> 2 != 0)) {
            piVar7 = (int *)FUN_01258ef0(local_ec);
            local_f8 = *piVar7;
            local_f4 = (undefined4 *)piVar7[1];
            local_dc = (void *)0x0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            local_4 = CONCAT31(local_4._1_3_,0xe);
            piVar7 = (int *)FUN_01258ec0(local_ec);
            iVar4 = *piVar7;
            uVar5 = piVar7[1];
            while( true ) {
              if ((iVar4 == 0) || (iVar4 != local_f8)) {
                FUN_00d83c2d();
              }
              if ((undefined4 *)uVar5 == local_f4) break;
              if (iVar4 == 0) {
                FUN_00d83c2d();
              }
              if (*(uint *)(iVar4 + 8) <= uVar5) {
                FUN_00d83c2d();
              }
              local_d0 = PlayElement_getId();
              FUN_0042c155(&local_d0);
              if (*(uint *)(iVar4 + 8) <= uVar5) {
                FUN_00d83c2d();
              }
              uVar5 = uVar5 + 4;
            }
            FUN_012fa910();
            local_4 = CONCAT31(local_4._1_3_,0xf);
            FUN_01300680(6);
            FUN_005f1e5c(&local_e0);
            EvaluationEnvironment_setReturnValue((void *)0x2f,&local_ac);
            if ((local_c4 == (undefined4 *)0x0) || (local_c0 - (int)local_c4 >> 2 == 0)) {
              FUN_00d83c2d();
            }
            piVar7 = (int *)*local_c4;
            EvaluationEnvironment_logCardMessage
                      (param_2,"setting target to card: ",(char *)piVar7,item);
            cVar1 = (**(code **)(*piVar7 + 0x1e8))();
            if (cVar1 != '\0') {
              EvaluationEnvironment_tracef(param_2,"setting player on environment too!",item);
              iVar4 = (**(code **)(*piVar7 + 0x28))();
              pvVar3 = EvaluationEnvironment_getGame(param_2);
              pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar4);
              if (pvVar3 == (void *)0x0) {
                EvaluationEnvironment_tracef(param_2,"Couldn\'t get player for player card?!?",item)
                ;
              }
              else {
                FUN_013876d0(pvVar3);
              }
            }
            FUN_01387300(1);
            local_4._0_1_ = 0xe;
            FUN_01300cd0();
            local_4._0_1_ = 0xd;
            goto LAB_01490c4b;
          }
        }
        else {
          FUN_012b1980();
          EvaluationEnvironment_tracefWithPrefix(param_2,"looking for highest ");
          iVar4 = FUN_012b1980();
          if (*(int *)(*(int *)(iVar4 + 4) + 4) != 2) {
            FUN_012f5a60("finder->second->isIntegerValue()",
                         "..\\common\\common\\node\\SetEnvironmentNode.cpp",0xe3);
          }
          FUN_012b1980();
          local_d0 = FUN_0123c340();
          piVar7 = (int *)FUN_01258ef0(&local_ac);
          local_f8 = *piVar7;
          local_f4 = (undefined4 *)piVar7[1];
          local_e0 = -0x80000000;
          local_c4 = (undefined4 *)0x0;
          local_c0 = 0;
          local_bc = 0;
          local_4 = CONCAT31(local_4._1_3_,10);
          piVar7 = (int *)FUN_01258ec0(local_ec);
          local_ac = *piVar7;
          puVar6 = (undefined4 *)piVar7[1];
          while( true ) {
            iVar4 = local_ac;
            if ((local_ac == 0) || (local_ac != local_f8)) {
              FUN_00d83c2d();
            }
            if (puVar6 == local_f4) break;
            if (iVar4 == 0) {
              FUN_00d83c2d();
            }
            if (*(undefined4 **)(iVar4 + 8) <= puVar6) {
              FUN_00d83c2d();
            }
            local_f0 = (int *)*puVar6;
            iVar4 = (**(code **)(*local_f0 + 0x15c))(local_d0,param_2);
            uVar9 = PlayElement_getId(iVar4);
            EvaluationEnvironment_tracef(param_2,"Card %d has value: %d",uVar9);
            if (local_e0 < iVar4) {
              local_e0 = iVar4;
              PointerVector_clear(local_c8);
LAB_01490a7e:
              PointerVector_pushBack(local_c8,&local_f0,item);
            }
            else if (iVar4 == local_e0) goto LAB_01490a7e;
            if (*(undefined4 **)(local_ac + 8) <= puVar6) {
              FUN_00d83c2d();
            }
            puVar6 = puVar6 + 1;
          }
          EvaluationEnvironment_tracef(param_2,"Highest value: %d",local_e0);
          EvaluationEnvironment_logCardList(param_2,"Highest value Cards: ",local_c8);
          if ((local_c4 != (undefined4 *)0x0) && (local_c0 - (int)local_c4 >> 2 != 0)) {
            piVar7 = (int *)FUN_01258ef0(local_ec);
            local_f8 = *piVar7;
            local_f4 = (undefined4 *)piVar7[1];
            local_dc = (void *)0x0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            local_4 = CONCAT31(local_4._1_3_,0xb);
            piVar7 = (int *)FUN_01258ec0(local_ec);
            iVar4 = *piVar7;
            uVar5 = piVar7[1];
            while( true ) {
              if ((iVar4 == 0) || (iVar4 != local_f8)) {
                FUN_00d83c2d();
              }
              if ((undefined4 *)uVar5 == local_f4) break;
              if (iVar4 == 0) {
                FUN_00d83c2d();
              }
              if (*(uint *)(iVar4 + 8) <= uVar5) {
                FUN_00d83c2d();
              }
              local_d0 = PlayElement_getId();
              FUN_0042c155(&local_d0);
              if (*(uint *)(iVar4 + 8) <= uVar5) {
                FUN_00d83c2d();
              }
              uVar5 = uVar5 + 4;
            }
            FUN_012fa910();
            local_4 = CONCAT31(local_4._1_3_,0xc);
            FUN_01300680(6);
            FUN_005f1e5c(&local_e0);
            EvaluationEnvironment_setReturnValue((void *)0x2f,&local_ac);
            if ((local_c4 == (undefined4 *)0x0) || (local_c0 - (int)local_c4 >> 2 == 0)) {
              FUN_00d83c2d();
            }
            piVar7 = (int *)*local_c4;
            EvaluationEnvironment_logCardMessage
                      (param_2,"setting target to card: ",(char *)piVar7,item);
            cVar1 = (**(code **)(*piVar7 + 0x1e8))();
            if (cVar1 != '\0') {
              EvaluationEnvironment_tracef(param_2,"setting player on environment too!",item);
              iVar4 = (**(code **)(*piVar7 + 0x28))();
              pvVar3 = EvaluationEnvironment_getGame(param_2);
              pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar4);
              if (pvVar3 == (void *)0x0) {
                EvaluationEnvironment_tracef(param_2,"Couldn\'t get player for player card?!?",item)
                ;
              }
              else {
                FUN_013876d0(pvVar3);
              }
            }
            FUN_01387300(1);
            local_4._0_1_ = 0xb;
            FUN_01300cd0();
            local_4._0_1_ = 10;
LAB_01490c4b:
            if (local_dc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(local_dc);
            }
            local_dc = (void *)0x0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            local_4 = CONCAT31(local_4._1_3_,1);
            if (local_c4 == (undefined4 *)0x0) {
              local_c4 = (undefined4 *)0x0;
              local_c0 = 0;
              local_bc = 0;
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_01385460();
              local_4 = 0xffffffff;
              if (local_104 == (void *)0x0) {
                ExceptionList = local_c;
                return piVar7;
              }
                    /* WARNING: Subroutine does not return */
              _free(local_104);
            }
                    /* WARNING: Subroutine does not return */
            _free(local_c4);
          }
        }
        EvaluationEnvironment_tracef(param_2,"no cards Matched!",item);
        local_4 = CONCAT31(local_4._1_3_,1);
        STLVector_int_clear(local_c8);
      }
      else {
        MacroNodeMapIterator_getValuePtr(&local_f8);
        EvaluationEnvironment_tracefWithPrefix(param_2,"Couldn\'t get value type ");
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_01385460();
    local_4 = 0xffffffff;
    STLVector_int_clear(local_108);
LAB_0149107c:
    piVar7 = (int *)0x0;
  }
  ExceptionList = local_c;
  return piVar7;
}

