// addr: 0x0148a230
// name: TargetQueryNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TargetQueryNode_evaluate(void * this, void * candidateCards, void * log)
    */

bool __thiscall TargetQueryNode_evaluate(void *this,void *candidateCards,void *log)

{
  int iVar1;
  rsize_t _DstSize;
  int *piVar2;
  char cVar3;
  void **item;
  undefined4 *puVar4;
  void *pvVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined1 *puVar12;
  int *local_104;
  int *local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  int *local_f4;
  undefined1 local_f0 [4];
  int *local_ec;
  int *local_e8;
  undefined4 local_e4;
  char local_dd;
  undefined1 *local_dc;
  int *local_d8;
  undefined1 *local_d4;
  int *local_d0;
  int *local_cc;
  undefined1 local_c8 [4];
  void *local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  int *local_b4;
  undefined1 *local_b0;
  int *local_ac;
  undefined1 local_a8 [4];
  int *local_a4;
  int *local_a0;
  undefined4 local_9c;
  int *local_98 [2];
  int *local_90;
  undefined1 local_8c [4];
  int *local_88;
  int *local_84;
  undefined4 local_80;
  undefined1 local_7c [12];
  undefined1 local_70 [4];
  void *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  void *local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 *local_50;
  int local_4c;
  int *piStack_48;
  undefined1 local_40 [4];
  int *local_3c;
  int local_38 [2];
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Evaluates a TargetQueryNode by building candidate lists for
                       target1/target2/owners/dynamic cards/query iterator/active cards, applying
                       child property filters, alternate play-area hints, owner/possession
                       relationships, and NOT logic before returning a matched card list. Evidence
                       is the trace "(gvt:TargetQueryNode" and extensive target-query logs such as
                       "pile: Target 3", "matching Target1's", and "Matched:". */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016a1a72;
  local_14 = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xfffffef0);
  ExceptionList = &local_14;
  local_cc = this;
  EvaluationEnvironment_traceEnterf(log,"(gvt:TargetQueryNode",item);
  FUN_012fa910();
  local_c = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    local_100 = Mem_Alloc(0xc);
    local_c._0_1_ = 1;
    if (local_100 == (int *)0x0) {
      local_98[0] = (int *)0x0;
    }
    else {
      local_98[0] = (int *)FUN_012fa910();
    }
    local_c = (uint)local_c._1_3_ << 8;
    local_104 = (int *)0x0;
    puVar4 = IntPointerMap_getOrCreateValue((void *)((int)this + 0x10),&local_104,(int *)item);
    *puVar4 = local_98[0];
  }
  local_f4 = (int *)**(undefined4 **)((int)this + 0x14);
  local_3c = *(int **)((int)this + 0x14);
  local_f8 = (undefined1 *)((int)this + 0x10);
  local_50 = local_f8;
  if (local_f4 == local_3c) {
    FUN_00d83c2d();
  }
  if (local_f4[4] != 0) {
    if (local_f4 == *(int **)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    FUN_013010e0(local_f4[4]);
  }
  FUN_01301590(log);
  local_ec = (int *)0x0;
  local_e8 = (int *)0x0;
  local_e4 = 0;
  local_a4 = (int *)0x0;
  local_a0 = (int *)0x0;
  local_9c = 0;
  local_6c = (void *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_c._1_3_ = (uint3)((uint)local_c >> 8);
  local_88 = (int *)0x0;
  local_84 = (int *)0x0;
  local_80 = 0;
  local_c._0_1_ = 5;
  ValueDataList_assign(local_f0,candidateCards);
  ValueDataList_assign(local_a8,candidateCards);
  if ((local_cc[7] == 2) || (local_cc[7] == 0x32)) {
    pvVar5 = EvaluationEnvironment_getTarget2CardList(log);
    ValueDataList_assign(local_a8,pvVar5);
  }
  ValueDataList_assign(local_70,candidateCards);
  local_104 = *(int **)((int)candidateCards + 8);
  if (local_104 < *(int **)((int)candidateCards + 4)) {
    FUN_00d83c2d();
  }
  local_90 = *(int **)((int)candidateCards + 4);
  if (*(int **)((int)candidateCards + 8) < local_90) {
    FUN_00d83c2d();
  }
  PointerVector_eraseRangeAssignIterator
            (candidateCards,&local_b0,candidateCards,local_90,candidateCards,local_104,item);
  iVar8 = local_cc[7];
  if (iVar8 == 1) {
    cVar3 = FUN_01383ba0();
    if ((cVar3 == '\0') && (cVar3 = Rules_getBooleanKey9DefaultFalse(), cVar3 == '\0')) {
      if (local_cc[0xc] != 0x30) {
        pcVar6 = "in a target node when we don\'t need a target";
LAB_0148a4af:
        EvaluationEnvironment_tracef(log,pcVar6,item);
        puVar12 = local_f0;
LAB_0148a4bd:
        ValueDataList_assign(candidateCards,puVar12);
LAB_0148a4c4:
        pcVar6 = "Matched: ";
LAB_0148a4ca:
        EvaluationEnvironment_logCardList(log,pcVar6,candidateCards);
        goto LAB_0148a4d1;
      }
      EvaluationEnvironment_tracef(log,"matching Target2\'s.",item);
      pvVar5 = EvaluationEnvironment_resolveTarget2(log);
      if (pvVar5 == (void *)0x0) {
LAB_0148b384:
        local_98[0] = EvaluationEnvironment_getTarget2CardList(log);
        iVar8 = unknown_intVector_size(local_98[0]);
        if ((iVar8 != 0) && (iVar8 = unknown_intVector_size(local_98[0]), iVar8 == 1)) {
          pvVar5 = (void *)FUN_0139e430();
          PointerVector_pushBack(candidateCards,pvVar5,item);
          puVar4 = (undefined4 *)FUN_0139e430();
          EvaluationEnvironment_logCardMessage(log,"Only one valid target2 : ",(char *)*puVar4,item)
          ;
        }
      }
      else {
        pcVar6 = EvaluationEnvironment_getTarget2Card(log);
        EvaluationEnvironment_logCardMessage(log,"Matched Target2: ",pcVar6,item);
        local_104 = EvaluationEnvironment_getTarget2Card(log);
        PointerVector_pushBack(candidateCards,&local_104,item);
      }
      goto LAB_0148c700;
    }
    if (local_cc[8] == 0) {
      iVar8 = local_cc[0xc];
      if (iVar8 == 0x47) {
        pvVar5 = log;
        EvaluationEnvironment_tracef(log,"checking OwnerKey",item);
        EvaluationEnvironment_tracef(log,"getting cards not equal to owner.",pvVar5);
        piVar9 = EvaluationEnvironment_getOriginCard(log);
        uVar10 = (**(code **)(*piVar9 + 0x30))();
        local_90 = (int *)FUN_00d8d382(uVar10,0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0);
        if (local_90 == (int *)0x0) {
LAB_0148a9a8:
          pvVar5 = log;
          EvaluationEnvironment_tracef(log,"Failed to Match Owner",item);
          EvaluationEnvironment_traceExitf(log,") => false",pvVar5);
          local_c._0_1_ = 4;
          STLVector_int_clear(local_8c);
          local_c._0_1_ = 3;
          STLVector_int_clear(local_70);
          local_c._0_1_ = 2;
          STLVector_int_clear(local_a8);
          local_c = (uint)local_c._1_3_ << 8;
          STLVector_int_clear(local_f0);
LAB_0148a78d:
          local_c = 0xffffffff;
          FUN_01300cd0();
          ExceptionList = local_14;
          return false;
        }
        FUN_01258ec0(&local_dc);
        piVar9 = local_d8;
        while( true ) {
          local_104 = local_e8;
          if (local_e8 < local_ec) {
            FUN_00d83c2d();
          }
          if ((local_dc == (undefined1 *)0x0) || (local_dc != local_f0)) {
            FUN_00d83c2d();
          }
          if (piVar9 == local_104) break;
          if (local_dc == (undefined1 *)0x0) {
            FUN_00d83c2d();
          }
          if (*(int **)(local_dc + 8) <= piVar9) {
            FUN_00d83c2d();
          }
          EvaluationEnvironment_logCardMessage(log,"Testing: ",(char *)*piVar9,item);
          if (*(int **)(local_dc + 8) <= piVar9) {
            FUN_00d83c2d();
          }
          if ((int *)*piVar9 != local_90) {
            EvaluationEnvironment_tracef(log,"Match!",item);
            if (*(int **)(local_dc + 8) <= piVar9) {
              FUN_00d83c2d();
            }
            PointerVector_pushBack(candidateCards,piVar9,item);
          }
          if (*(int **)(local_dc + 8) <= piVar9) {
            FUN_00d83c2d();
          }
          piVar9 = piVar9 + 1;
        }
        pcVar6 = "Matched cards: ";
      }
      else {
        if (iVar8 == 0x3e) {
          pvVar5 = log;
          EvaluationEnvironment_tracef(log,"checking TargetOwnerKey",item);
          EvaluationEnvironment_tracef(log,"getting cards owned by matching cards.",pvVar5);
          puVar4 = (undefined4 *)FUN_01258ef0(local_40);
          local_d4 = (undefined1 *)*puVar4;
          local_d0 = (int *)puVar4[1];
          puVar4 = (undefined4 *)FUN_01258ec0(local_40);
          local_dc = (undefined1 *)*puVar4;
          piVar9 = (int *)puVar4[1];
          while( true ) {
            local_d8 = piVar9;
            if ((local_dc == (undefined1 *)0x0) || (local_dc != local_d4)) {
              FUN_00d83c2d();
            }
            if (piVar9 == local_d0) break;
            if (local_dc == (undefined1 *)0x0) {
              FUN_00d83c2d();
            }
            if (*(int **)(local_dc + 8) <= piVar9) {
              FUN_00d83c2d();
            }
            local_104 = (int *)*piVar9;
            uVar10 = (**(code **)(*local_104 + 0x30))
                               (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
            local_98[0] = (int *)FUN_00d8d382(uVar10);
            if (local_98[0] != (int *)0x0) {
              local_5c = (void *)0x0;
              local_58 = 0;
              local_54 = 0;
              local_c = CONCAT31(local_c._1_3_,6);
              PointerVector_pushBack(local_60,local_98,item);
              local_b4 = (int *)**(undefined4 **)(local_50 + 4);
              local_ac = *(int **)(local_50 + 4);
              local_b8 = local_50;
              while( true ) {
                puVar12 = local_b8;
                if ((local_b8 == (undefined1 *)0x0) || (local_b8 != local_50)) {
                  FUN_00d83c2d();
                }
                iVar8 = 0;
                if (local_b4 == local_ac) break;
                local_c4 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0;
                local_c._0_1_ = 7;
                if (local_5c != (void *)0x0) {
                  iVar8 = local_58 - (int)local_5c >> 2;
                }
                EvaluationEnvironment_tracef(log,"Examining %d cards.",iVar8);
                FUN_012fa910();
                local_c = CONCAT31(local_c._1_3_,8);
                if (puVar12 == (undefined1 *)0x0) {
                  FUN_00d83c2d();
                }
                if (local_b4 == *(int **)(puVar12 + 4)) {
                  FUN_00d83c2d();
                }
                FUN_013010e0(local_b4[4]);
                FUN_01301590(log);
                piVar9 = EvaluationEnvironment_getGame(log);
                if (local_b4 == *(int **)(puVar12 + 4)) {
                  FUN_00d83c2d();
                }
                (**(code **)(*piVar9 + 0x188))(local_60,local_b4[3],&local_4c,local_c8,log);
                ValueDataList_assign(local_60,local_c8);
                local_c._0_1_ = 7;
                FUN_01300cd0();
                local_c = CONCAT31(local_c._1_3_,6);
                if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  _free(local_c4);
                }
                local_c4 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0;
                RBTreeIterator_increment(&local_b8);
              }
              if ((local_5c != (void *)0x0) && (local_58 - (int)local_5c >> 2 != 0)) {
                EvaluationEnvironment_logCardMessage(log,"Matched Owner: ",(char *)local_98[0],item)
                ;
                PointerVector_pushBack(candidateCards,&local_104,item);
              }
              local_c._0_1_ = 5;
              if (local_5c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(local_5c);
              }
              local_5c = (void *)0x0;
              local_58 = 0;
              local_54 = 0;
              piVar9 = local_d8;
            }
            if (*(int **)(local_dc + 8) <= piVar9) {
              FUN_00d83c2d();
            }
            piVar9 = piVar9 + 1;
          }
          if ((*(int *)((int)candidateCards + 4) != 0) &&
             (*(int *)((int)candidateCards + 8) - *(int *)((int)candidateCards + 4) >> 2 != 0)) {
            pcVar6 = "Matched cards: ";
            goto LAB_0148a4ca;
          }
          goto LAB_0148a9a8;
        }
        if (iVar8 != 0x40) {
          if (iVar8 == 0x48) {
            (**(code **)(*local_cc + 0x50))(local_f0,candidateCards,log);
            goto LAB_0148a4c4;
          }
          if (iVar8 == 0x30) {
            EvaluationEnvironment_tracef(log,"matching Target2\'s.",item);
            pvVar5 = EvaluationEnvironment_resolveTarget2(log);
            if (pvVar5 == (void *)0x0) goto LAB_0148b384;
            pcVar6 = EvaluationEnvironment_getTarget2Card(log);
            EvaluationEnvironment_logCardMessage(log,"Matched Target2: ",pcVar6,item);
            local_100 = EvaluationEnvironment_getTarget2Card(log);
            PointerVector_pushBack(candidateCards,&local_100,item);
          }
          else {
            if (iVar8 != 0x2f) {
              EvaluationEnvironment_tracef(log,"pile: all active cards (target 1)",item);
              EvaluationEnvironment_tracefWithPrefix(log,"Looking for Value: ");
              local_100 = EvaluationEnvironment_getGame(log);
              iVar1 = *local_100;
              piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
              iVar8 = *piVar9;
              pcVar11 = *(code **)(iVar1 + 0x188);
              goto LAB_0148c6fc;
            }
            EvaluationEnvironment_tracef
                      (log,"Setting only valid target == to alread existing target1",item);
            pvVar5 = EvaluationEnvironment_resolveTarget(log);
            if (pvVar5 != (void *)0x0) {
              EvaluationEnvironment_resolveTarget(log);
              uVar10 = PlayElement_getId();
              EvaluationEnvironment_tracef(log,"target play elementID : %d",uVar10);
              pcVar6 = EvaluationEnvironment_getTargetCard(log);
              EvaluationEnvironment_logCardMessage(log,"Matched Target1: ",pcVar6,item);
              local_100 = EvaluationEnvironment_getTargetCard(log);
              PointerVector_pushBack(candidateCards,&local_100,item);
            }
          }
          goto LAB_0148c700;
        }
        pvVar5 = log;
        EvaluationEnvironment_tracef(log,"checking TargetPossessionsKey",item);
        EvaluationEnvironment_tracef(log,"getting cards who own matching cards.",pvVar5);
        puVar4 = (undefined4 *)FUN_01258ef0(local_40);
        local_b0 = (undefined1 *)*puVar4;
        local_ac = (int *)puVar4[1];
        puVar4 = (undefined4 *)FUN_01258ec0(local_38);
        local_b8 = (undefined1 *)*puVar4;
        local_b4 = (int *)puVar4[1];
        while( true ) {
          puVar12 = local_b8;
          if ((local_b8 == (undefined1 *)0x0) || (local_b8 != local_b0)) {
            FUN_00d83c2d();
          }
          if (local_b4 == local_ac) break;
          if (puVar12 == (undefined1 *)0x0) {
            FUN_00d83c2d();
          }
          if (*(int **)(puVar12 + 8) <= local_b4) {
            FUN_00d83c2d();
          }
          local_104 = (int *)*local_b4;
          piVar9 = (int *)FUN_013445f0(1);
          local_100 = (int *)piVar9[2];
          local_90 = piVar9;
          if (local_100 < (int *)piVar9[1]) {
            FUN_00d83c2d();
          }
          local_98[0] = (int *)piVar9[1];
          local_dd = '\0';
          if ((int *)piVar9[2] < local_98[0]) {
            FUN_00d83c2d();
          }
          local_d0 = local_98[0];
          while( true ) {
            if ((piVar9 == (int *)0x0) || (piVar9 != local_90)) {
              FUN_00d83c2d();
            }
            if (local_d0 == local_100) break;
            if (piVar9 == (int *)0x0) {
              FUN_00d83c2d();
            }
            if ((int *)piVar9[2] <= local_d0) {
              FUN_00d83c2d();
            }
            local_98[0] = (int *)FUN_00d8d382(*local_d0,0,&PlayElement::RTTI_Type_Descriptor,
                                              &Card::RTTI_Type_Descriptor,0);
            if (local_98[0] != (int *)0x0) {
              local_5c = (void *)0x0;
              local_58 = 0;
              local_54 = 0;
              local_c = CONCAT31(local_c._1_3_,9);
              PointerVector_pushBack(local_60,local_98,item);
              local_3c = *(int **)(local_50 + 4);
              local_d8 = (int *)*local_3c;
              local_dc = local_50;
              while( true ) {
                puVar12 = local_dc;
                if ((local_dc == (undefined1 *)0x0) || (local_dc != local_50)) {
                  FUN_00d83c2d();
                }
                if (local_d8 == local_3c) break;
                local_c4 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0;
                local_c._0_1_ = 10;
                if (local_5c == (void *)0x0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = local_58 - (int)local_5c >> 2;
                }
                EvaluationEnvironment_tracef(log,"Examining %d cards.",iVar8);
                FUN_012fa910();
                local_c = CONCAT31(local_c._1_3_,0xb);
                if (puVar12 == (undefined1 *)0x0) {
                  FUN_00d83c2d();
                }
                if (local_d8 == *(int **)(puVar12 + 4)) {
                  FUN_00d83c2d();
                }
                FUN_013010e0(local_d8[4]);
                FUN_01301590(log);
                piVar9 = EvaluationEnvironment_getGame(log);
                if (local_d8 == *(int **)(puVar12 + 4)) {
                  FUN_00d83c2d();
                }
                (**(code **)(*piVar9 + 0x188))(local_60,local_d8[3],&local_4c,local_c8,log);
                ValueDataList_assign(local_60,local_c8);
                local_c._0_1_ = 10;
                FUN_01300cd0();
                local_c = CONCAT31(local_c._1_3_,9);
                if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  _free(local_c4);
                }
                local_c4 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0;
                RBTreeIterator_increment(&local_dc);
              }
              if ((local_5c != (void *)0x0) && (local_58 - (int)local_5c >> 2 != 0)) {
                EvaluationEnvironment_logCardMessage(log,"Matched Card:",(char *)local_98[0],item);
                local_dd = '\x01';
              }
              local_c._0_1_ = 5;
              if (local_5c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(local_5c);
              }
              local_5c = (void *)0x0;
              local_58 = 0;
              local_54 = 0;
            }
            piVar9 = local_90;
            if ((int *)local_90[2] <= local_d0) {
              FUN_00d83c2d();
            }
            local_d0 = local_d0 + 1;
          }
          if (local_dd != '\0') {
            EvaluationEnvironment_logCardMessage(log,"Matching Card: ",(char *)local_104,item);
            PointerVector_pushBack(candidateCards,&local_104,item);
          }
          if (*(int **)(local_b8 + 8) <= local_b4) {
            FUN_00d83c2d();
          }
          local_b4 = local_b4 + 1;
        }
        if ((char)local_cc[0xb] != '\0') {
          EvaluationEnvironment_tracef(log,"Matching cards that are not this query.",item);
          EvaluationEnvironment_logCardList(log,"notcardlist: ",local_a8);
          EvaluationEnvironment_logCardList(log,"totalcards: ",candidateCards);
          local_c4 = (void *)0x0;
          local_c0 = 0;
          local_bc = 0;
          local_c = CONCAT31(local_c._1_3_,0xc);
          puVar4 = (undefined4 *)FUN_01258ef0(local_38);
          local_b0 = (undefined1 *)*puVar4;
          local_ac = (int *)puVar4[1];
          puVar4 = (undefined4 *)FUN_01258ec0(local_38);
          local_b8 = (undefined1 *)*puVar4;
          local_b4 = (int *)puVar4[1];
          while( true ) {
            puVar12 = local_b8;
            if ((local_b8 == (undefined1 *)0x0) || (local_b8 != local_b0)) {
              FUN_00d83c2d();
            }
            if (local_b4 == local_ac) break;
            if (puVar12 == (undefined1 *)0x0) {
              FUN_00d83c2d();
            }
            if (*(int **)(puVar12 + 8) <= local_b4) {
              FUN_00d83c2d();
            }
            local_104 = (int *)*local_b4;
            local_100 = *(int **)((int)candidateCards + 8);
            if (local_100 < *(int **)((int)candidateCards + 4)) {
              FUN_00d83c2d();
            }
            piVar9 = *(int **)((int)candidateCards + 4);
            piVar2 = piVar9;
            if (*(int **)((int)candidateCards + 8) < piVar9) {
              FUN_00d83c2d();
            }
            for (; (piVar2 != local_100 && ((int *)*piVar2 != local_104)); piVar2 = piVar2 + 1) {
            }
            local_100 = *(int **)((int)candidateCards + 8);
            local_3c = piVar9;
            if (local_100 < *(int **)((int)candidateCards + 4)) {
              FUN_00d83c2d();
            }
            if (candidateCards == (void *)0x0) {
              FUN_00d83c2d();
            }
            if (piVar2 == local_100) {
              PointerVector_pushBack(local_c8,&local_104,item);
            }
            if (*(int **)(local_b8 + 8) <= local_b4) {
              FUN_00d83c2d();
            }
            local_b4 = local_b4 + 1;
          }
          ValueDataList_assign(candidateCards,local_c8);
          local_c._0_1_ = 5;
          if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_c4);
          }
          local_c4 = (void *)0x0;
          local_c0 = 0;
          local_bc = 0;
        }
        if ((*(int *)((int)candidateCards + 4) == 0) ||
           (*(int *)((int)candidateCards + 8) - *(int *)((int)candidateCards + 4) >> 2 == 0)) {
          pvVar5 = log;
          EvaluationEnvironment_tracef(log,"Failed to Match Owner",item);
          EvaluationEnvironment_traceExitf(log,") => false",pvVar5);
          local_c = CONCAT31(local_c._1_3_,4);
          if (local_88 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_88);
          }
          local_88 = (int *)0x0;
          local_84 = (int *)0x0;
          local_80 = 0;
          local_c = CONCAT31(local_c._1_3_,3);
          if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          local_6c = (void *)0x0;
          local_68 = 0;
          local_64 = 0;
          local_c = CONCAT31(local_c._1_3_,2);
          if (local_a4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
          local_a4 = (int *)0x0;
          local_a0 = (int *)0x0;
          local_9c = 0;
          local_c = (uint)local_c._1_3_ << 8;
          STLVector_int_clear(local_f0);
          goto LAB_0148a78d;
        }
        pcVar6 = "Targets matched: ";
      }
      EvaluationEnvironment_logCardList(log,pcVar6,candidateCards);
      EvaluationEnvironment_traceExitf(log,") => true",item);
      local_c = CONCAT31(local_c._1_3_,4);
      if (local_88 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_88);
      }
      local_88 = (int *)0x0;
      local_84 = (int *)0x0;
      local_80 = 0;
      local_c = CONCAT31(local_c._1_3_,3);
      if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_6c = (void *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_c = CONCAT31(local_c._1_3_,2);
      if (local_a4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_a4);
      }
      local_a4 = (int *)0x0;
      local_a0 = (int *)0x0;
      local_9c = 0;
      local_c = (uint)local_c._1_3_ << 8;
      if (local_ec != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      local_ec = (int *)0x0;
      local_e8 = (int *)0x0;
      local_e4 = 0;
      goto LAB_0148cd1f;
    }
    EvaluationEnvironment_tracef(log,"Checking target1 alternate play area for valid targets",item);
    FUN_012fb470(local_f0,log);
    local_90 = local_84;
    if (local_84 < local_88) {
      FUN_00d83c2d();
    }
    local_104 = local_88;
    if (local_84 < local_88) {
      FUN_00d83c2d();
    }
    local_f8 = local_8c;
    local_f4 = local_104;
    while( true ) {
      if ((local_f8 == (undefined1 *)0x0) || (local_f8 != local_8c)) {
        FUN_00d83c2d();
      }
      if (local_f4 == local_90) break;
      if (local_f8 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(local_f8 + 8) <= local_f4) {
        FUN_00d83c2d();
      }
      local_104 = local_e8;
      if (local_e8 < local_ec) {
        FUN_00d83c2d();
      }
      piVar9 = local_ec;
      if (local_e8 < local_ec) {
        FUN_00d83c2d();
      }
      local_b0 = local_f0;
      local_ac = piVar9;
      if (piVar9 != local_104) {
        do {
          if (*piVar9 == *local_f4) break;
          piVar9 = piVar9 + 1;
        } while (piVar9 != local_104);
      }
      local_104 = local_e8;
      if (local_e8 < local_ec) {
        FUN_00d83c2d();
      }
      if ((local_b0 == (undefined1 *)0x0) || (local_b0 != local_f0)) {
        FUN_00d83c2d();
      }
      if (piVar9 != local_104) {
        iVar8 = (int)local_e8 - (int)(piVar9 + 1) >> 2;
        if (0 < iVar8) {
          _DstSize = iVar8 * 4;
          _memmove_s(piVar9,_DstSize,piVar9 + 1,_DstSize);
        }
        local_e8 = local_e8 + -1;
      }
      if (*(int **)(local_f8 + 8) <= local_f4) {
        FUN_00d83c2d();
      }
      local_f4 = local_f4 + 1;
    }
    ValueDataList_assign(candidateCards,local_f0);
    if ((*(int *)((int)candidateCards + 4) == 0) ||
       (*(int *)((int)candidateCards + 8) - *(int *)((int)candidateCards + 4) >> 2 == 0)) {
      pvVar5 = log;
      EvaluationEnvironment_tracef(log,"Alternate container failed to match anything.",item);
      EvaluationEnvironment_traceExitf(log,") => false",pvVar5);
      local_c = CONCAT31(local_c._1_3_,4);
      if (local_88 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_88);
      }
      local_88 = (int *)0x0;
      local_84 = (int *)0x0;
      local_80 = 0;
      local_c = CONCAT31(local_c._1_3_,3);
      if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_6c = (void *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_c = CONCAT31(local_c._1_3_,2);
      if (local_a4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_a4);
      }
      local_a4 = (int *)0x0;
      local_a0 = (int *)0x0;
      local_9c = 0;
      local_c = (uint)local_c._1_3_ << 8;
      if (local_ec != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      local_ec = (int *)0x0;
      local_e8 = (int *)0x0;
      local_e4 = 0;
      goto LAB_0148a78d;
    }
  }
  else if (iVar8 == 2) {
    cVar3 = FUN_01383bb0();
    if ((cVar3 == '\0') && (cVar3 = Rules_getBooleanKey9DefaultFalse(), cVar3 == '\0')) {
      if (local_cc[0xc] != 0x2f) {
        EvaluationEnvironment_tracef(log,"in a target2 node when we don\'t need a target2",item);
        puVar12 = local_f0;
        goto LAB_0148a4bd;
      }
      EvaluationEnvironment_tracef(log,"matching Target1\'s.",item);
      pvVar5 = EvaluationEnvironment_resolveTarget(log);
      if (pvVar5 == (void *)0x0) {
        local_98[0] = EvaluationEnvironment_getMember3c(log);
        iVar8 = unknown_intVector_size(local_98[0]);
        if (iVar8 == 0) {
          pcVar6 = "in a target2 node when we don\'t need a target2";
          goto LAB_0148a4af;
        }
        iVar8 = unknown_intVector_size(local_98[0]);
        if (iVar8 == 1) {
          pvVar5 = (void *)FUN_0139e430();
          PointerVector_pushBack(candidateCards,pvVar5,item);
          puVar4 = (undefined4 *)FUN_0139e430();
          EvaluationEnvironment_logCardMessage(log,"Only one valid target1 : ",(char *)*puVar4,item)
          ;
        }
      }
      else {
        pcVar6 = EvaluationEnvironment_getTargetCard(log);
        EvaluationEnvironment_logCardMessage(log,"Matched Target1: ",pcVar6,item);
        local_100 = EvaluationEnvironment_getTargetCard(log);
        PointerVector_pushBack(candidateCards,&local_100,item);
      }
      goto LAB_0148c700;
    }
    pvVar5 = EvaluationEnvironment_getTarget2CardList(log);
    ValueDataList_assign(local_f0,pvVar5);
    piVar9 = local_cc;
    if (local_cc[8] == 0) {
      iVar8 = local_cc[0xc];
      if (iVar8 == 0x48) {
        (**(code **)(*local_cc + 0x50))(local_f0,candidateCards,log);
        if ((piVar9[7] == 2) &&
           ((cVar3 = FUN_01383bb0(), cVar3 != '\0' ||
            (cVar3 = Rules_getBooleanKey9DefaultFalse(), cVar3 != '\0')))) {
          PointerVector_assign(log,candidateCards,item);
          EvaluationEnvironment_logCardList(log,"Target2 card list set equal to: ",candidateCards);
          cVar3 = Rules_getBooleanKey9DefaultFalse();
          if (cVar3 != '\0') {
            puVar12 = local_70;
            goto LAB_0148a4bd;
          }
        }
        goto LAB_0148a4c4;
      }
      if (iVar8 != 0x2f) {
        if (iVar8 == 0x3e) {
          pvVar5 = log;
          EvaluationEnvironment_tracef(log,"checking TargetOwnerKey",item);
          EvaluationEnvironment_tracef(log,"getting cards owned by matching cards.",pvVar5);
          puVar4 = (undefined4 *)FUN_01258ef0(local_38);
          local_b8 = (undefined1 *)*puVar4;
          local_b4 = (int *)puVar4[1];
          puVar4 = (undefined4 *)FUN_01258ec0(local_38);
          local_dc = (undefined1 *)*puVar4;
          local_d8 = (int *)puVar4[1];
          cVar3 = FUN_012586d0(&local_b8);
          while (cVar3 != '\0') {
            puVar4 = (undefined4 *)FUN_01258670();
            local_100 = (int *)*puVar4;
            uVar10 = (**(code **)(*local_100 + 0x30))
                               (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
            local_104 = (int *)FUN_00d8d382(uVar10);
            if (local_104 != (int *)0x0) {
              local_5c = (void *)0x0;
              local_58 = 0;
              local_54 = 0;
              local_c = CONCAT31(local_c._1_3_,0xd);
              PointerVector_pushBack(local_60,&local_104,item);
              local_ac = *(int **)(local_50 + 4);
              local_d0 = (int *)*local_ac;
              local_d4 = local_50;
              local_b0 = local_50;
              cVar3 = FUN_0130ff40(&local_b0);
              while (cVar3 != '\0') {
                iVar8 = 0;
                local_c4 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0;
                local_c._1_3_ = (uint3)((uint)local_c >> 8);
                local_c._0_1_ = 0xe;
                if (local_5c != (void *)0x0) {
                  iVar8 = local_58 - (int)local_5c >> 2;
                }
                EvaluationEnvironment_tracef(log,"Examining %d cards.",iVar8);
                FUN_012fa910();
                local_c._0_1_ = 0xf;
                iVar8 = RBTreeIterator_getValuePtr((int *)&local_d4);
                FUN_013010e0(*(undefined4 *)(iVar8 + 4));
                FUN_01301590(log);
                piVar9 = EvaluationEnvironment_getGame(log);
                iVar8 = *piVar9;
                puVar4 = (undefined4 *)RBTreeIterator_getValuePtr((int *)&local_d4);
                (**(code **)(iVar8 + 0x188))(local_60,*puVar4,&local_4c,local_c8,log);
                ValueDataList_assign(local_60,local_c8);
                local_c._0_1_ = 0xe;
                FUN_01300cd0();
                local_c = CONCAT31(local_c._1_3_,0xd);
                STLVector_int_clear(local_c8);
                RBTreeIterator_increment(&local_d4);
                cVar3 = FUN_0130ff40(&local_b0);
              }
              if ((local_5c != (void *)0x0) && (local_58 - (int)local_5c >> 2 != 0)) {
                EvaluationEnvironment_logCardMessage(log,"Matched Owner: ",(char *)local_104,item);
                PointerVector_pushBack(candidateCards,&local_100,item);
              }
              local_c._0_1_ = 5;
              STLVector_int_clear(local_60);
            }
            PointerVectorIterator_postIncrement(&local_dc,local_38,(int *)0x0);
            cVar3 = FUN_012586d0(&local_b8);
          }
          iVar8 = unknown_intVector_size(candidateCards);
          if (iVar8 != 0) {
            PointerVector_assign(log,candidateCards,item);
            EvaluationEnvironment_logCardList(log,"Target2 card list set equal to: ",candidateCards)
            ;
            cVar3 = Rules_getBooleanKey9DefaultFalse();
            if (cVar3 != '\0') {
              ValueDataList_assign(candidateCards,local_70);
            }
LAB_0148a4d1:
            EvaluationEnvironment_traceExitf(log,") => true",item);
            local_c._0_1_ = 4;
            STLVector_int_clear(local_8c);
            local_c._0_1_ = 3;
            STLVector_int_clear(local_70);
            local_c._0_1_ = 2;
            STLVector_int_clear(local_a8);
            local_c = (uint)local_c._1_3_ << 8;
            STLVector_int_clear(local_f0);
            goto LAB_0148cd1f;
          }
        }
        else {
          if (iVar8 != 0x40) {
            EvaluationEnvironment_tracef(log,"pile: all active cards (target 2)",item);
            EvaluationEnvironment_tracefWithPrefix(log,"Looking for Value: ");
            local_100 = EvaluationEnvironment_getGame(log);
            iVar1 = *local_100;
            piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
            iVar8 = *piVar9;
            pcVar11 = *(code **)(iVar1 + 0x188);
            goto LAB_0148c6fc;
          }
          pvVar5 = log;
          EvaluationEnvironment_tracef(log,"checking TargetPossessionsKey",item);
          EvaluationEnvironment_tracef(log,"getting cards who own matching cards.",pvVar5);
          puVar4 = (undefined4 *)FUN_01258ef0(local_38);
          local_100 = (int *)*puVar4;
          local_fc = puVar4[1];
          puVar4 = (undefined4 *)FUN_01258ec0(local_38);
          local_b8 = (undefined1 *)*puVar4;
          local_b4 = (int *)puVar4[1];
          cVar3 = FUN_012586d0(&local_100);
          while (cVar3 != '\0') {
            puVar4 = (undefined4 *)FUN_01258670();
            local_90 = (int *)*puVar4;
            pvVar5 = (void *)FUN_013445f0(1);
            piVar9 = PointerVector_makeEndIterator(pvVar5,local_38);
            local_b0 = (undefined1 *)*piVar9;
            local_ac = (int *)piVar9[1];
            local_dd = '\0';
            piVar9 = PointerVector_makeBeginIterator(pvVar5,(int *)local_98);
            local_d4 = (undefined1 *)*piVar9;
            local_d0 = (int *)piVar9[1];
            while( true ) {
              if ((local_d4 == (undefined1 *)0x0) || (local_d4 != local_b0)) {
                FUN_00d83c2d();
              }
              if (local_d0 == local_ac) break;
              puVar4 = (undefined4 *)PointerVectorIterator_getCurrent((int *)&local_d4);
              local_104 = (int *)FUN_00d8d382(*puVar4,0,&PlayElement::RTTI_Type_Descriptor,
                                              &Card::RTTI_Type_Descriptor,0);
              if (local_104 != (int *)0x0) {
                local_c4 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0;
                local_c = CONCAT31(local_c._1_3_,0x10);
                PointerVector_pushBack(local_c8,&local_104,item);
                local_d8 = (int *)**(undefined4 **)(local_50 + 4);
                local_3c = *(int **)(local_50 + 4);
                local_dc = local_50;
                while( true ) {
                  puVar12 = local_dc;
                  if ((local_dc == (undefined1 *)0x0) || (local_dc != local_50)) {
                    FUN_00d83c2d();
                  }
                  if (local_d8 == local_3c) break;
                  local_2c = 0;
                  local_28 = 0;
                  local_24 = 0;
                  local_c._0_1_ = 0x11;
                  if (local_c4 == (void *)0x0) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = local_c0 - (int)local_c4 >> 2;
                  }
                  EvaluationEnvironment_tracef(log,"Examining %d cards.",iVar8);
                  FUN_012fa910();
                  local_c = CONCAT31(local_c._1_3_,0x12);
                  if (puVar12 == (undefined1 *)0x0) {
                    FUN_00d83c2d();
                  }
                  if (local_d8 == *(int **)(puVar12 + 4)) {
                    FUN_00d83c2d();
                  }
                  FUN_013010e0(local_d8[4]);
                  FUN_01301590(log);
                  piVar9 = EvaluationEnvironment_getGame(log);
                  if (local_d8 == *(int **)(puVar12 + 4)) {
                    FUN_00d83c2d();
                  }
                  (**(code **)(*piVar9 + 0x188))(local_c8,local_d8[3],local_60,local_30,log);
                  ValueDataList_assign(local_c8,local_30);
                  local_c._0_1_ = 0x11;
                  FUN_01300cd0();
                  local_c = CONCAT31(local_c._1_3_,0x10);
                  STLVector_int_clear(local_30);
                  RBTreeIterator_increment(&local_dc);
                }
                if ((local_c4 != (void *)0x0) && (local_c0 - (int)local_c4 >> 2 != 0)) {
                  EvaluationEnvironment_logCardMessage(log,"Matched Card:",(char *)local_104,item);
                  local_dd = '\x01';
                }
                local_c._0_1_ = 5;
                STLVector_int_clear(local_c8);
              }
              PointerVectorIterator_postIncrementAlt(&local_d4,local_20,(int *)0x0);
            }
            if (local_dd != '\0') {
              EvaluationEnvironment_logCardMessage(log,"Matching Card: ",(char *)local_90,item);
              PointerVector_pushBack(candidateCards,&local_90,item);
            }
            PointerVectorIterator_postIncrement(&local_b8,&local_4c,(int *)0x0);
            cVar3 = FUN_012586d0(&local_100);
          }
          if ((char)local_cc[0xb] != '\0') {
            EvaluationEnvironment_tracef(log,"Matching cards that are not this query.",item);
            EvaluationEnvironment_logCardList(log,"notcardlist: ",local_a8);
            EvaluationEnvironment_logCardList(log,"totalcards: ",candidateCards);
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            local_c = CONCAT31(local_c._1_3_,0x13);
            puVar4 = (undefined4 *)FUN_01258ef0(&local_4c);
            local_b0 = (undefined1 *)*puVar4;
            local_ac = (int *)puVar4[1];
            puVar4 = (undefined4 *)FUN_01258ec0(&local_4c);
            local_d4 = (undefined1 *)*puVar4;
            local_d0 = (int *)puVar4[1];
            cVar3 = FUN_012586d0(&local_b0);
            while (cVar3 != '\0') {
              local_104 = (int *)FUN_01258670();
              local_104 = (int *)*local_104;
              puVar4 = (undefined4 *)FUN_01258ef0(&local_4c);
              puVar7 = (undefined4 *)FUN_01258ec0(local_20);
              puVar4 = (undefined4 *)
                       FUN_01355ae0(local_38,*puVar7,puVar7[1],*puVar4,puVar4[1],&local_104);
              local_dc = (undefined1 *)*puVar4;
              local_d8 = (int *)puVar4[1];
              uVar10 = FUN_01258ef0(local_40);
              cVar3 = FUN_01257b50(uVar10);
              if (cVar3 != '\0') {
                PointerVector_pushBack(local_30,&local_104,item);
              }
              PointerVectorIterator_postIncrement(&local_d4,(int *)&local_b8,(int *)0x0);
              cVar3 = FUN_012586d0(&local_b0);
            }
            ValueDataList_assign(candidateCards,local_30);
            local_c._0_1_ = 5;
            STLVector_int_clear(local_30);
          }
          if ((*(int *)((int)candidateCards + 4) != 0) &&
             (*(int *)((int)candidateCards + 8) - *(int *)((int)candidateCards + 4) >> 2 != 0)) {
            PointerVector_assign(log,candidateCards,item);
            EvaluationEnvironment_logCardList(log,"Target2 card list set equal to: ",candidateCards)
            ;
            cVar3 = Rules_getBooleanKey9DefaultFalse();
            if (cVar3 != '\0') {
              ValueDataList_assign(candidateCards,local_70);
            }
            goto LAB_0148a4d1;
          }
        }
        goto LAB_0148a9a8;
      }
      EvaluationEnvironment_tracef(log,"matching Target1\'s.",item);
      pvVar5 = EvaluationEnvironment_resolveTarget(log);
      if (pvVar5 == (void *)0x0) {
        local_98[0] = EvaluationEnvironment_getMember3c(log);
        iVar8 = unknown_intVector_size(local_98[0]);
        if ((iVar8 != 0) && (iVar8 = unknown_intVector_size(local_98[0]), iVar8 == 1)) {
          pvVar5 = (void *)FUN_0139e430();
          PointerVector_pushBack(candidateCards,pvVar5,item);
          puVar4 = (undefined4 *)FUN_0139e430();
          EvaluationEnvironment_logCardMessage(log,"Only one valid target1 : ",(char *)*puVar4,item)
          ;
        }
      }
      else {
        pcVar6 = EvaluationEnvironment_getTargetCard(log);
        EvaluationEnvironment_logCardMessage(log,"Matched Target1: ",pcVar6,item);
        local_100 = EvaluationEnvironment_getTargetCard(log);
        PointerVector_pushBack(candidateCards,&local_100,item);
      }
      goto LAB_0148c700;
    }
    EvaluationEnvironment_tracef(log,"Checking target2 alternate play area for valid targets",item);
    FUN_012fb470(local_f0,log);
    puVar4 = (undefined4 *)FUN_01258ef0(local_38);
    local_b0 = (undefined1 *)*puVar4;
    local_ac = (int *)puVar4[1];
    puVar4 = (undefined4 *)FUN_01258ec0(local_38);
    local_f8 = (undefined1 *)*puVar4;
    local_f4 = (int *)puVar4[1];
    while( true ) {
      if ((local_f8 == (undefined1 *)0x0) || (local_f8 != local_b0)) {
        FUN_00d83c2d();
      }
      if (local_f4 == local_ac) break;
      if (local_f8 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(local_f8 + 8) <= local_f4) {
        FUN_00d83c2d();
      }
      local_100 = local_e8;
      if (local_e8 < local_ec) {
        FUN_00d83c2d();
      }
      local_104 = local_ec;
      if (local_e8 < local_ec) {
        FUN_00d83c2d();
      }
      piVar9 = (int *)FUN_01355ae0(local_40,local_f0,local_104,local_f0,local_100,local_f4);
      puVar12 = (undefined1 *)*piVar9;
      local_d0 = (int *)piVar9[1];
      local_100 = local_e8;
      if (local_e8 < local_ec) {
        FUN_00d83c2d();
      }
      if ((puVar12 == (undefined1 *)0x0) || (puVar12 != local_f0)) {
        FUN_00d83c2d();
      }
      if (local_d0 != local_100) {
        FUN_01331300(&local_dc,puVar12,local_d0);
      }
      if (*(int **)(local_f8 + 8) <= local_f4) {
        FUN_00d83c2d();
      }
      local_f4 = local_f4 + 1;
    }
    ValueDataList_assign(candidateCards,local_f0);
    PointerVector_assign(log,candidateCards,item);
    EvaluationEnvironment_logCardList(log,"Target2 card list set equal to: ",candidateCards);
    cVar3 = Rules_getBooleanKey9DefaultFalse();
    if (cVar3 == '\0') goto LAB_0148cc58;
LAB_0148cc51:
    ValueDataList_assign(candidateCards,local_70);
  }
  else {
    if ((iVar8 == 0x2f) || (iVar8 == 0x19)) {
      pvVar5 = log;
      EvaluationEnvironment_tracef(log,"pile: owner",item);
      EvaluationEnvironment_tracef(log,"adding all cards that are borne by valid targets",pvVar5);
      puVar4 = (undefined4 *)FUN_01258ef0(&local_4c);
      local_b0 = (undefined1 *)*puVar4;
      local_ac = (int *)puVar4[1];
      puVar4 = (undefined4 *)FUN_01258ec0(local_20);
      local_d4 = (undefined1 *)*puVar4;
      piVar9 = (int *)puVar4[1];
      while( true ) {
        if ((local_d4 == (undefined1 *)0x0) || (local_d4 != local_b0)) {
          FUN_00d83c2d();
        }
        if (piVar9 == local_ac) break;
        if (local_d4 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)(local_d4 + 8) <= piVar9) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)*piVar9 + 0x34))(candidateCards);
        if (*(int **)(local_d4 + 8) <= piVar9) {
          FUN_00d83c2d();
        }
        piVar9 = piVar9 + 1;
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      piVar9 = local_f4;
      if (local_f4 == *(int **)(local_50 + 4)) {
        FUN_00d83c2d();
      }
      pcVar11 = *(code **)(*local_100 + 0x188);
      iVar8 = piVar9[3];
    }
    else if (iVar8 == 0x32) {
      cVar3 = FUN_01383bb0();
      if ((cVar3 == '\0') && (cVar3 = Rules_getBooleanKey9DefaultFalse(), cVar3 == '\0')) {
        pcVar6 = "in a target2owner node when we don\'t need a target2";
        goto LAB_0148a4af;
      }
      pvVar5 = EvaluationEnvironment_getTarget2CardList(log);
      ValueDataList_assign(local_f0,pvVar5);
      pvVar5 = log;
      EvaluationEnvironment_tracef(log,"pile: target2owner",item);
      EvaluationEnvironment_tracef(log,"adding all cards that are borne by valid targets",pvVar5);
      puVar4 = (undefined4 *)FUN_01258ef0(&local_4c);
      local_b0 = (undefined1 *)*puVar4;
      local_ac = (int *)puVar4[1];
      puVar4 = (undefined4 *)FUN_01258ec0(local_20);
      local_d4 = (undefined1 *)*puVar4;
      local_d0 = (int *)puVar4[1];
      cVar3 = FUN_012586d0(&local_b0);
      while (cVar3 != '\0') {
        puVar4 = (undefined4 *)FUN_01258670();
        (**(code **)(*(int *)*puVar4 + 0x34))(candidateCards);
        PointerVectorIterator_postIncrement(&local_d4,&local_4c,(int *)0x0);
        cVar3 = FUN_012586d0(&local_b0);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x424) {
      pvVar5 = log;
      EvaluationEnvironment_tracef(log,"pile: QueryIterator",item);
      EvaluationEnvironment_tracef(log,"adding QueryIterator",pvVar5);
      piVar9 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
      if (piVar9 == (int *)0x0) {
        EvaluationEnvironment_tracef(log,"Couldn\'t get Query Iter!",item);
      }
      else {
        (**(code **)(*piVar9 + 0x34))(candidateCards);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x41f) {
      EvaluationEnvironment_tracef(log,"pile: Origin Object",item);
      local_100 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
      if (local_100 != (int *)0x0) {
        PointerVector_pushBack(candidateCards,&local_100,item);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x422) {
      EvaluationEnvironment_tracef(log,"pile: Target 3",item);
      local_100 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
      if (local_100 != (int *)0x0) {
        PointerVector_pushBack(candidateCards,&local_100,item);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x423) {
      EvaluationEnvironment_tracef(log,"pile: Target 4",item);
      local_100 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
      if (local_100 != (int *)0x0) {
        PointerVector_pushBack(candidateCards,&local_100,item);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x426) {
      EvaluationEnvironment_tracef(log,"pile: ActivePlayer",item);
      pvVar5 = EvaluationEnvironment_getMember14(log);
      if (pvVar5 != (void *)0x0) {
        piVar9 = EvaluationEnvironment_getGame(log);
        uVar10 = (**(code **)(*piVar9 + 0x204))
                           (local_cc[7],log,0,&PlayElement::RTTI_Type_Descriptor,
                            &Card::RTTI_Type_Descriptor,0);
        local_100 = (int *)FUN_00d8d382(uVar10);
        PointerVector_pushBack(candidateCards,&local_100,item);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x30) {
      pvVar5 = log;
      EvaluationEnvironment_tracef(log,"pile: Dynamic Card",item);
      EvaluationEnvironment_tracef(log,"adding Dynamic Card",pvVar5);
      iVar8 = Rules_getDynamicCardReturnCard();
      if (iVar8 == 0) {
        EvaluationEnvironment_tracef(log,"Couldn\'t get Dynamic CArd!",item);
      }
      else {
        piVar9 = (int *)Rules_getDynamicCardReturnCard();
        (**(code **)(*piVar9 + 0x34))(candidateCards);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else if (iVar8 == 0x37) {
      pvVar5 = log;
      EvaluationEnvironment_tracef(log,"pile: Dynamic Card2",item);
      EvaluationEnvironment_tracef(log,"adding Dynamic Card2",pvVar5);
      pvVar5 = Rules_getVariable27Card(log);
      if (pvVar5 == (void *)0x0) {
        EvaluationEnvironment_tracef(log,"Couldn\'t get Dynamic Card2!",item);
      }
      else {
        piVar9 = Rules_getVariable27Card(log);
        (**(code **)(*piVar9 + 0x34))(candidateCards);
      }
      ValueDataList_assign(local_f0,candidateCards);
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
    else {
      EvaluationEnvironment_tracef(log,"pile: all active cards",item);
      EvaluationEnvironment_tracefWithPrefix(log,"Looking for Value: ");
      local_100 = EvaluationEnvironment_getGame(log);
      iVar1 = *local_100;
      piVar9 = (int *)RBTreeIterator_getValuePtr((int *)&local_f8);
      iVar8 = *piVar9;
      pcVar11 = *(code **)(iVar1 + 0x188);
    }
LAB_0148c6fc:
    (*pcVar11)(local_f0,iVar8,local_7c,candidateCards,log);
LAB_0148c700:
    EvaluationEnvironment_tracef
              (log,"Going to examine %d properties, starting with %d cards.",local_cc[6] + -1);
    if (local_cc[0xc] == 0) {
      RBTreeIterator_increment(&local_f8);
    }
    while( true ) {
      if ((local_f8 == (undefined1 *)0x0) || (local_f8 != local_50)) {
        FUN_00d83c2d();
      }
      if (local_f4 == local_3c) break;
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_c._0_1_ = 0x14;
      iVar8 = unknown_intVector_size(candidateCards);
      EvaluationEnvironment_tracef(log,"Examining %d cards.",iVar8);
      FUN_012fa910();
      local_c = CONCAT31(local_c._1_3_,0x15);
      if (local_f8 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (local_f4 == *(int **)(local_f8 + 4)) {
        FUN_00d83c2d();
      }
      FUN_013010e0(local_f4[4]);
      FUN_01301590(log);
      piVar9 = EvaluationEnvironment_getGame(log);
      if (local_f4 == *(int **)(local_f8 + 4)) {
        FUN_00d83c2d();
      }
      (**(code **)(*piVar9 + 0x188))(candidateCards,local_f4[3],local_60,local_c8,log);
      ValueDataList_assign(candidateCards,local_c8);
      local_c._0_1_ = 0x14;
      FUN_01300cd0();
      local_c._0_1_ = 5;
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      RBTreeIterator_increment(&local_f8);
    }
    if (local_cc[7] == 0x19) {
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_c = CONCAT31(local_c._1_3_,0x16);
      local_100 = *(int **)((int)candidateCards + 8);
      if (local_100 < *(int **)((int)candidateCards + 4)) {
        FUN_00d83c2d();
      }
      piVar9 = *(int **)((int)candidateCards + 4);
      if (*(int **)((int)candidateCards + 8) < piVar9) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (candidateCards == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (piVar9 == local_100) break;
        if (candidateCards == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)candidateCards + 8) <= piVar9) {
          FUN_00d83c2d();
        }
        uVar10 = (**(code **)(*(int *)*piVar9 + 0x30))();
        local_104 = (int *)FUN_00d8d382(uVar10,0,&PlayElement::RTTI_Type_Descriptor,
                                        &Card::RTTI_Type_Descriptor,0);
        if (local_104 != (int *)0x0) {
          PointerVector_pushBack(local_c8,&local_104,item);
        }
        if (*(int **)((int)candidateCards + 8) <= piVar9) {
          FUN_00d83c2d();
        }
        piVar9 = piVar9 + 1;
      }
      ValueDataList_assign(candidateCards,local_c8);
      EvaluationEnvironment_logCardList(log,"Matched Owners: ",candidateCards);
      local_c._0_1_ = 5;
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
    }
    if (local_cc[7] == 0x32) {
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_c = CONCAT31(local_c._1_3_,0x17);
      local_100 = *(int **)((int)candidateCards + 8);
      if (local_100 < *(int **)((int)candidateCards + 4)) {
        FUN_00d83c2d();
      }
      piVar9 = *(int **)((int)candidateCards + 4);
      if (*(int **)((int)candidateCards + 8) < piVar9) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (candidateCards == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (piVar9 == local_100) break;
        if (candidateCards == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)candidateCards + 8) <= piVar9) {
          FUN_00d83c2d();
        }
        uVar10 = (**(code **)(*(int *)*piVar9 + 0x30))();
        local_104 = (int *)FUN_00d8d382(uVar10,0,&PlayElement::RTTI_Type_Descriptor,
                                        &Card::RTTI_Type_Descriptor,0);
        if (local_104 != (int *)0x0) {
          PointerVector_pushBack(local_c8,&local_104,item);
        }
        if (*(int **)((int)candidateCards + 8) <= piVar9) {
          FUN_00d83c2d();
        }
        piVar9 = piVar9 + 1;
      }
      ValueDataList_assign(candidateCards,local_c8);
      EvaluationEnvironment_logCardList(log,"Matched Owners: ",candidateCards);
      local_c._0_1_ = 5;
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
    }
    if ((char)local_cc[0xb] != '\0') {
      EvaluationEnvironment_tracef(log,"Matching cards that are not this query.",item);
      EvaluationEnvironment_logCardList(log,"notcardlist: ",local_a8);
      EvaluationEnvironment_logCardList(log,"totalcards: ",candidateCards);
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_c = CONCAT31(local_c._1_3_,0x18);
      local_90 = local_a0;
      if (local_a0 < local_a4) {
        FUN_00d83c2d();
      }
      local_100 = local_a4;
      if (local_a0 < local_a4) {
        FUN_00d83c2d();
      }
      local_f8 = local_a8;
      local_f4 = local_100;
      while( true ) {
        if ((local_f8 == (undefined1 *)0x0) || (local_f8 != local_a8)) {
          FUN_00d83c2d();
        }
        if (local_f4 == local_90) break;
        if (local_f8 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)(local_f8 + 8) <= local_f4) {
          FUN_00d83c2d();
        }
        local_104 = (int *)*local_f4;
        local_100 = *(int **)((int)candidateCards + 8);
        if (local_100 < *(int **)((int)candidateCards + 4)) {
          FUN_00d83c2d();
        }
        piVar9 = *(int **)((int)candidateCards + 4);
        if (*(int **)((int)candidateCards + 8) < piVar9) {
          FUN_00d83c2d();
        }
        piStack_48 = piVar9;
        for (; (piVar9 != local_100 && ((int *)*piVar9 != local_104)); piVar9 = piVar9 + 1) {
        }
        local_100 = *(int **)((int)candidateCards + 8);
        if (local_100 < *(int **)((int)candidateCards + 4)) {
          FUN_00d83c2d();
        }
        if (candidateCards == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (piVar9 == local_100) {
          PointerVector_pushBack(local_c8,&local_104,item);
        }
        if (*(int **)(local_f8 + 8) <= local_f4) {
          FUN_00d83c2d();
        }
        local_f4 = local_f4 + 1;
      }
      ValueDataList_assign(candidateCards,local_c8);
      local_c._0_1_ = 5;
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
    }
    if (((local_cc[7] == 2) || (local_cc[7] == 0x32)) &&
       ((cVar3 = FUN_01383bb0(), cVar3 != '\0' ||
        (cVar3 = Rules_getBooleanKey9DefaultFalse(), cVar3 != '\0')))) {
      PointerVector_assign(log,candidateCards,item);
      EvaluationEnvironment_logCardList(log,"Target2 card list set equal to: ",candidateCards);
      cVar3 = Rules_getBooleanKey9DefaultFalse();
      if (cVar3 != '\0') goto LAB_0148cc51;
    }
  }
LAB_0148cc58:
  EvaluationEnvironment_logCardList(log,"Matched: ",candidateCards);
  EvaluationEnvironment_traceExitf(log,") => true",item);
  local_c = CONCAT31(local_c._1_3_,4);
  if (local_88 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_88);
  }
  local_88 = (int *)0x0;
  local_84 = (int *)0x0;
  local_80 = 0;
  local_c = CONCAT31(local_c._1_3_,3);
  if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = (void *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  if (local_a4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  local_a4 = (int *)0x0;
  local_a0 = (int *)0x0;
  local_9c = 0;
  local_c = (uint)local_c._1_3_ << 8;
  if (local_ec != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  local_ec = (int *)0x0;
  local_e8 = (int *)0x0;
  local_e4 = 0;
LAB_0148cd1f:
  local_c = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_14;
  return true;
}

