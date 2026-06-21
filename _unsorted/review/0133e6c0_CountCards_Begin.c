// addr: 0x0133e6c0
// name: CountCards_Begin
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0133e752) */
/* WARNING: Removing unreachable block (ram,0x0133e7dd) */

bool __thiscall
CountCards_Begin(int *param_1,int param_2,int param_3,void *param_4,void *param_5,void *param_6)

{
  bool bVar1;
  char cVar2;
  void **item;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined1 auStack_d4 [3];
  char cStack_d1;
  void *local_d0;
  void *local_cc;
  undefined1 auStack_c8 [4];
  void *pvStack_c4;
  void *pvStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int *piStack_b4;
  int *local_b0;
  void *local_ac;
  int iStack_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_70 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_54 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_38 [4];
  void *pvStack_34;
  int iStack_24;
  uint uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
                    /* Evaluates CountCards over card/play-area elements and traces
                       matches/failures. Evidence is the explicit trace strings "CountCards::Begin
                       Property", "MATCH/FAIL", and card instance warning, plus calls through
                       Card/CWCard, PlayArea, GamePlayer, and EvaluationEnvironment. */
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_0167c1de;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)auStack_d4;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff20);
  ExceptionList = &local_14;
  local_b8 = param_2;
  local_cc = param_4;
  local_ac = param_5;
  local_d0 = param_6;
  local_b0 = param_1;
  if ((((param_3 == 0x29f) || (param_3 == 0x2a3)) || (param_3 == 0x2a2)) &&
     (*(int *)((int)param_4 + 4) == 2)) {
    uVar4 = *(undefined4 *)((int)param_4 + 8);
    iVar5 = param_1[8];
    FUN_012a0710(uVar4,iVar5);
    piVar3 = (int *)RuleSetDB_getRuleSet(uVar4,iVar5);
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x50))();
      iVar5 = FUN_00d8d382(uVar4,0,&ExpressionTreeNode::RTTI_Type_Descriptor,
                           &MacroNode::RTTI_Type_Descriptor,0);
      if (((iVar5 != 0) && (iVar5 = FUN_01423530(), iVar5 == 5)) &&
         (iVar5 = FUN_013837c0(), iVar5 != 0)) {
        local_cc = (void *)FUN_013837c0();
        PointerVector_pushBack(local_ac,&local_cc,item);
        ExceptionList = local_14;
        return true;
      }
    }
  }
  if (*(int *)((int)param_4 + 4) == 2) {
    EvaluationEnvironment_tracef(local_d0,"CountCards::Begin  Property: %d  Value: %d",param_3);
  }
  else {
    EvaluationEnvironment_tracef(local_d0,"CountCards::Begin  Property: %d",param_3);
  }
  iVar5 = local_b8;
  if ((param_3 == 0x146) || (param_3 == 0x147)) {
    param_3 = 2;
  }
  else if ((param_3 == 0x2a3) || (param_3 == 0x2a2)) {
    param_3 = 0x29f;
  }
  puStack_9c = *(undefined4 **)(local_b8 + 4);
  if (*(undefined4 **)(local_b8 + 8) < puStack_9c) {
    FUN_00d83c2d();
  }
  do {
    puVar10 = *(undefined4 **)(iVar5 + 8);
    if (puVar10 < *(undefined4 **)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    if (puStack_9c == puVar10) {
      if (*(int *)((int)local_ac + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)local_ac + 8) - *(int *)((int)local_ac + 4) >> 2;
      }
      ExceptionList = local_14;
      return iVar5 != 0;
    }
    cStack_d1 = '\0';
    if (*(undefined4 **)(iVar5 + 8) <= puStack_9c) {
      FUN_00d83c2d();
    }
    piVar3 = (int *)FUN_00d8d382(*puStack_9c,0,&Card::RTTI_Type_Descriptor,
                                 &CWCard::RTTI_Type_Descriptor,0);
    if (piVar3 != (int *)0x0) {
      if ((param_3 == 0x1c) && (bVar1 = ValueData_containsInt(param_4,0x19), bVar1)) {
LAB_0133f02b:
        piStack_b4 = piVar3;
        PointerVector_pushBack(local_ac,&piStack_b4,item);
        iVar5 = Card_getPropertyMap();
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          iVar5 = iVar5 + 4;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
        }
        uVar4 = PlayElement_getId(iVar5);
        pcVar13 = "   MATCH: (%d) %s";
      }
      else {
        if ((piVar3[0x19] == 0) &&
           (pvVar6 = EvaluationEnvironment_getMember14(local_d0), pvVar8 = local_d0,
           pvVar6 != (void *)0x0)) {
          EvaluationEnvironment_getMember14(local_d0);
          piStack_b4 = (int *)GamePlayer_getPlayerId();
          pvVar6 = EvaluationEnvironment_getGame(pvVar8);
          piVar7 = (int *)Game_getMyPlayerID(pvVar6);
          if (piStack_b4 == piVar7) goto LAB_0133e930;
          EvaluationEnvironment_tracef(pvVar8,"   ###WARNING: Next card lacks instance data.",item);
          cVar2 = FUN_01381360();
joined_r0x0133eb6d:
          if (cVar2 == '\0') goto LAB_0133f02b;
        }
        else {
LAB_0133e930:
          if (piVar3[0x19] == 0) {
            EvaluationEnvironment_tracef
                      (local_d0,"   ###WARNING: Next card lacks instance data.",item);
          }
          else if (param_3 < 0x271) {
            if (param_3 == 0x270) {
              if ((*(int *)((int)param_4 + 4) == 2) &&
                 (iVar5 = (**(code **)(*piVar3 + 0x30))(), iVar5 != 0)) {
                (**(code **)(*piVar3 + 0x30))();
                iVar5 = PlayElement_getId();
                iVar9 = FUN_0123c340();
                if (iVar5 == iVar9) goto LAB_0133f02b;
              }
            }
            else {
              if (param_3 < 0xa3) {
                if (param_3 == 0xa2) {
                  cVar2 = FUN_01341070(param_4);
                  bVar1 = cVar2 == '\0';
                }
                else if (param_3 == 2) {
                  if (*(int *)((int)param_4 + 4) == 2) {
                    iVar5 = FUN_0123c340();
                    if (iVar5 == 0x22557) {
                      cVar2 = (**(code **)(*piVar3 + 0x124))(0x1ae10);
                      if ((cVar2 == '\0') &&
                         (cVar2 = (**(code **)(*piVar3 + 0x124))(0x1ae0f), cVar2 == '\0')) {
                        cVar2 = (**(code **)(*piVar3 + 0x1c0))(0x22557);
                        bVar1 = cVar2 == '\0';
                      }
                      else {
                        uVar4 = (**(code **)(*piVar3 + 0x30))
                                          (0,&PlayElement::RTTI_Type_Descriptor,
                                           &Card::RTTI_Type_Descriptor,0);
                        piVar7 = (int *)FUN_00d8d382(uVar4);
                        if (piVar7 == (int *)0x0) goto LAB_0133e914;
                        cVar2 = (**(code **)(*piVar7 + 0x1c0))(0x22557);
                        bVar1 = cVar2 == '\0';
                      }
                    }
                    else {
                      if (*(int *)((int)param_4 + 4) != 2) goto LAB_0133eacc;
                      iVar5 = *piVar3;
                      pvVar8 = EvaluationEnvironment_getMember14(local_d0);
                      uVar4 = FUN_0123c340(pvVar8);
                      cVar2 = (**(code **)(iVar5 + 0x70))(uVar4);
                      bVar1 = cVar2 == '\0';
                    }
                  }
                  else {
LAB_0133eacc:
                    cVar2 = (**(code **)(*piVar3 + 0x1c4))(param_4);
                    bVar1 = cVar2 == '\0';
                  }
                }
                else if (param_3 == 0x1c) {
                  iVar5 = FUN_0140d0e0();
                  bVar1 = ValueData_containsInt(param_4,iVar5);
                  bVar1 = !bVar1;
                }
                else {
                  if (param_3 != 0x9e) goto LAB_0133ed71;
                  iVar5 = (**(code **)(*piVar3 + 0x28))();
                  bVar1 = ValueData_containsInt(param_4,iVar5);
                  if (bVar1) goto LAB_0133f02b;
                  iVar5 = (**(code **)(*piVar3 + 0x28))();
                  pvVar8 = PlayArea_findPlayerElementById(local_b0,iVar5);
                  if ((pvVar8 == (void *)0x0) || (iVar5 = unknown_getField30(pvVar8), iVar5 == 0))
                  goto LAB_0133e914;
                  unknown_getField30(pvVar8);
                  iVar5 = PlayElement_getId();
                  bVar1 = ValueData_containsInt(param_4,iVar5);
                  bVar1 = !bVar1;
                }
              }
              else if (param_3 == 0x199) {
                if ((*(int *)((int)param_4 + 4) == 2) && (iVar5 = FUN_0123c340(), iVar5 == 0)) {
                  cVar2 = (**(code **)(*piVar3 + 0x14))(0x199);
                  goto joined_r0x0133eb6d;
                }
                cVar2 = (**(code **)(*piVar3 + 0x14))(0x199);
                bVar1 = cVar2 == '\0';
              }
              else if (param_3 == 0x23e) {
                if ((*(int *)((int)param_4 + 4) != 2) && (*(int *)((int)param_4 + 4) != 6))
                goto LAB_0133e914;
                iVar5 = PlayElement_getId();
                bVar1 = ValueData_containsInt(param_4,iVar5);
                bVar1 = !bVar1;
              }
              else {
                if (param_3 != 0x244) goto LAB_0133ed71;
                Game_getCurrentTurn(local_b0);
                iVar5 = FUN_013f7eb0();
                bVar1 = ValueData_containsInt(param_4,iVar5);
                bVar1 = !bVar1;
              }
LAB_0133f025:
              if (!bVar1) goto LAB_0133f02b;
            }
          }
          else {
            if (param_3 < 0x22972) {
              if (param_3 == 0x22971) {
                if (((*(int *)((int)param_4 + 4) == 2) && (iVar5 = FUN_0123c340(), iVar5 == 0x222e3)
                    ) && (cVar2 = FUN_0140d220(), cVar2 != '\0')) {
                  cStack_d1 = '\x01';
                }
                FUN_012fa910();
                iStack_c = 3;
                (**(code **)(*piVar3 + 4))(0x22971,auStack_7c);
                bVar1 = ValueData_equivalentTo(param_4,auStack_7c);
                if (bVar1) {
                  cStack_d1 = '\x01';
                }
                iStack_c = 0xffffffff;
                FUN_01300cd0();
              }
              else {
                if (param_3 != 0x276) {
                  if (param_3 == 0x29f) {
                    cVar2 = (**(code **)(*local_b0 + 0x4c))(param_4,piVar3,local_d0);
                    bVar1 = cVar2 == '\0';
                  }
                  else {
                    if (param_3 != 0x2fa) goto LAB_0133ed71;
                    iVar5 = FUN_0138a380();
                    bVar1 = ValueData_containsInt(param_4,iVar5);
                    bVar1 = !bVar1;
                  }
                  goto LAB_0133f025;
                }
                FUN_012fa910();
                iStack_c = 0;
                (**(code **)(*piVar3 + 4))(0x276,auStack_94);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_54,"");
                iStack_c._0_1_ = 1;
                FUN_01300ff0(abStack_54);
                iStack_c._0_1_ = 0;
                FUN_0041f1d7();
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_70,"");
                iStack_c._0_1_ = 2;
                FUN_01300ff0(abStack_70);
                iStack_c = (uint)iStack_c._1_3_ << 8;
                FUN_0041f1d7();
                bVar1 = ValueData_equivalentTo(param_4,auStack_94);
                if (bVar1) {
                  cStack_d1 = '\x01';
                }
                iStack_c = 0xffffffff;
                FUN_01300cd0();
              }
LAB_0133f020:
              bVar1 = cStack_d1 == '\0';
              goto LAB_0133f025;
            }
            if (param_3 == 0x22aa4) {
              if (*(int *)((int)param_4 + 4) == 3) {
                uStack_20 = 0xf;
                iStack_24 = 0;
                pvStack_34 = (void *)((uint)pvStack_34 & 0xffffff00);
                pvStack_c4 = (void *)0x0;
                pvStack_c0 = (void *)0x0;
                uStack_bc = 0;
                iStack_c = 5;
                iVar5 = FUN_0123c310();
                FUN_01330240(&iStack_a8);
LAB_0133ee40:
                puVar10 = (undefined4 *)(iVar5 + 4);
                puVar11 = puVar10;
                if (0xf < *(uint *)(iVar5 + 0x18)) {
                  puVar11 = (undefined4 *)*puVar10;
                }
                puVar11 = (undefined4 *)((int)puVar11 + *(int *)(iVar5 + 0x14));
                if (puVar11 == (undefined4 *)0x0) {
LAB_0133ee77:
                  FUN_00d83c2d();
                }
                else {
                  puVar12 = puVar10;
                  if (0xf < *(uint *)(iVar5 + 0x18)) {
                    puVar12 = (undefined4 *)*puVar10;
                  }
                  if (puVar11 < puVar12) goto LAB_0133ee77;
                  if (0xf < *(uint *)(iVar5 + 0x18)) {
                    puVar10 = (undefined4 *)*puVar10;
                  }
                  if ((undefined4 *)((int)puVar10 + *(int *)(iVar5 + 0x14)) < puVar11)
                  goto LAB_0133ee77;
                }
                if ((iStack_a8 != -2) && ((iStack_a8 == 0 || (iStack_a8 != iVar5)))) {
                  FUN_00d83c2d();
                }
                if (puStack_a4 != puVar11) {
                  pcVar13 = std::
                            _String_const_iterator<char,std::char_traits<char>,std::allocator<char>_>
                            ::operator*((_String_const_iterator<char,std::char_traits<char>,std::allocator<char>_>
                                         *)&iStack_a8);
                  if (*pcVar13 == ',') {
                    StdVector28_pushBack(auStack_c8,abStack_38,item);
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                              (abStack_38,"",0);
                    FUN_0132e780();
                  }
                  else {
                    pcVar13 = std::
                              _String_const_iterator<char,std::char_traits<char>,std::allocator<char>_>
                              ::operator*((_String_const_iterator<char,std::char_traits<char>,std::allocator<char>_>
                                           *)&iStack_a8);
                    if (*pcVar13 != ' ') {
                      pcVar13 = std::
                                _String_const_iterator<char,std::char_traits<char>,std::allocator<char>_>
                                ::operator*((_String_const_iterator<char,std::char_traits<char>,std::allocator<char>_>
                                             *)&iStack_a8);
                      uStack_98 = CONCAT31(uStack_98._1_3_,*pcVar13);
                      FUN_01270140(1,uStack_98);
                    }
                    FUN_0132e780();
                  }
                  goto LAB_0133ee40;
                }
                if (iStack_24 != 0) {
                  StdVector28_pushBack(auStack_c8,abStack_38,item);
                }
                pvVar8 = pvStack_c4;
                if (pvStack_c0 < pvStack_c4) {
                  FUN_00d83c2d();
                }
                while( true ) {
                  pvVar6 = pvStack_c0;
                  if (pvStack_c0 < pvStack_c4) {
                    FUN_00d83c2d();
                  }
                  if (pvVar8 == pvVar6) break;
                  if (pvStack_c0 <= pvVar8) {
                    FUN_00d83c2d();
                  }
                  if (*(uint *)((int)pvVar8 + 0x18) < 0x10) {
                    iVar5 = (int)pvVar8 + 4;
                  }
                  else {
                    iVar5 = *(int *)((int)pvVar8 + 4);
                  }
                  cVar2 = FUN_0140e0b0(iVar5);
                  if (cVar2 != '\0') {
                    cStack_d1 = '\x01';
                  }
                  if (pvStack_c0 <= pvVar8) {
                    FUN_00d83c2d();
                  }
                  pvVar8 = (void *)((int)pvVar8 + 0x1c);
                }
                iStack_c = CONCAT31(iStack_c._1_3_,4);
                if (pvStack_c4 != (void *)0x0) {
                  StdStringRange_destroy(pvStack_c4,pvStack_c0);
                    /* WARNING: Subroutine does not return */
                  _free(pvStack_c4);
                }
                pvStack_c4 = (void *)0x0;
                pvStack_c0 = (void *)0x0;
                uStack_bc = 0;
                iStack_c = 0xffffffff;
                if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
                  _free(pvStack_34);
                }
                uStack_20 = 0xf;
                iStack_24 = 0;
                pvStack_34 = (void *)((uint)pvStack_34 & 0xffffff00);
                param_4 = local_cc;
                goto LAB_0133f020;
              }
            }
            else {
              if (param_3 != 0x22aa5) {
LAB_0133ed71:
                FUN_012fa910();
                iStack_c = 6;
                (**(code **)(*piVar3 + 4))(param_3,auStack_88);
                bVar1 = ValueData_equivalentTo(param_4,auStack_88);
                if (bVar1) {
                  cStack_d1 = '\x01';
                }
                iStack_c = 0xffffffff;
                FUN_01300cd0();
                goto LAB_0133f020;
              }
              if ((*(int *)((int)param_4 + 4) == 2) && (iVar5 = FUN_0123c340(), iVar5 == 1))
              goto LAB_0133f02b;
            }
          }
        }
LAB_0133e914:
        iVar5 = Card_getPropertyMap();
        if (*(uint *)(iVar5 + 0x18) < 0x10) {
          iVar5 = iVar5 + 4;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
        }
        uVar4 = PlayElement_getId(iVar5);
        pcVar13 = "   FAIL:  (%d) %s";
      }
      EvaluationEnvironment_tracef(local_d0,pcVar13,uVar4);
    }
    if (*(undefined4 **)(local_b8 + 8) <= puStack_9c) {
      FUN_00d83c2d();
    }
    iVar5 = local_b8;
    puStack_9c = puStack_9c + 1;
  } while( true );
}

