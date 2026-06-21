// addr: 0x01261dc0
// name: FUN_01261dc0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01262143) */
/* WARNING: Removing unreachable block (ram,0x01262158) */
/* WARNING: Removing unreachable block (ram,0x012621f7) */

void FUN_01261dc0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puStack_68;
  undefined1 auStack_5c [4];
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  void *pvStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined1 local_3c [4];
  void *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  void *pvStack_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puStack_8 = &LAB_0165cf48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_38 = (void *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_4 = (int *)0x2;
  (**(code **)(*param_2 + 0xd0))(local_2c,local_3c,param_3,DAT_01b839d8 ^ (uint)&stack0xffffff88);
  puVar5 = local_34;
  if (local_30 < local_34) {
    FUN_00d83c2d();
  }
  do {
    puVar7 = local_30;
    if (local_30 < local_34) {
      FUN_00d83c2d();
    }
    puVar6 = puStack_44;
    if (puVar5 == puVar7) {
      if (puStack_40 < puStack_44) {
        FUN_00d83c2d();
      }
      do {
        puVar5 = puStack_40;
        if (puStack_40 < puStack_44) {
          FUN_00d83c2d();
        }
        if (puVar6 == puVar5) {
          (**(code **)(*local_4 + 0x34))(&local_28);
          puVar5 = local_28;
          if (local_24 < local_28) {
            FUN_00d83c2d();
          }
          do {
            puVar7 = local_24;
            if (local_24 < local_28) {
              FUN_00d83c2d();
            }
            if (puVar5 == puVar7) {
              set_play_element_id_field(local_4,puStack_8);
              local_14 = CONCAT31(local_14._1_3_,1);
              if (pvStack_48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_48);
              }
              pvStack_48 = (void *)0x0;
              puStack_44 = (undefined4 *)0x0;
              puStack_40 = (undefined4 *)0x0;
              local_14 = (uint)local_14._1_3_ << 8;
              if (local_38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(local_38);
              }
              local_38 = (void *)0x0;
              local_34 = (undefined4 *)0x0;
              local_30 = (undefined4 *)0x0;
              local_14 = 0xffffffff;
              if (local_28 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(local_28);
              }
              ExceptionList = pvStack_1c;
              return;
            }
            if (local_24 <= puVar5) {
              FUN_00d83c2d();
            }
            piVar8 = (int *)*puVar5;
            if (((piVar8 != (int *)0x0) && (cVar2 = (**(code **)(*piVar8 + 0x48))(), cVar2 != '\0'))
               && ((cVar2 = (**(code **)(*piVar8 + 0x124))(0x1ae10), cVar2 != '\0' ||
                   (cVar2 = (**(code **)(*piVar8 + 0x124))(0x1ae0f), cVar2 != '\0')))) {
              piVar1 = local_4;
              puStack_58 = (undefined4 *)0x0;
              puStack_54 = (undefined4 *)0x0;
              uStack_50 = 0;
              puStack_68 = (undefined4 *)0x0;
              local_14 = CONCAT31((int3)((uint)local_14 >> 8),6);
              set_play_element_id_field(local_4,piVar8);
              (**(code **)(*piVar8 + 0xd0))(auStack_5c,&stack0xffffff94,piVar1);
              puVar7 = puStack_58;
              if (puStack_54 < puStack_58) {
                FUN_00d83c2d();
              }
              while( true ) {
                puVar6 = puStack_54;
                if (puStack_54 < puStack_58) {
                  FUN_00d83c2d();
                }
                if (puVar7 == puVar6) break;
                if (puStack_54 <= puVar7) {
                  FUN_00d83c2d();
                }
                uVar3 = FUN_01321f20();
                iVar9 = 0;
                piVar8 = &DAT_018cbab0;
                do {
                  iVar4 = PackedActionId_getHighBits(uVar3);
                  if (iVar4 == *piVar8) goto LAB_0126211c;
                  iVar9 = iVar9 + 1;
                  piVar8 = &DAT_018cbab0 + iVar9;
                } while ((&DAT_018cbab0)[iVar9] != 0);
                if (puStack_54 <= puVar7) {
                  FUN_00d83c2d();
                }
                uVar3 = PlayElement_getId(*puVar7,1);
                FUN_0125a4e0(local_c,uVar3);
LAB_0126211c:
                if (puStack_54 <= puVar7) {
                  FUN_00d83c2d();
                }
                puVar7 = puVar7 + 1;
              }
              for (; puStack_68 != (undefined4 *)0x0; puStack_68 = puStack_68 + 1) {
                FUN_00d83c2d();
                uVar3 = FUN_01321f20();
                iVar9 = 0;
                piVar8 = &DAT_018cbab0;
                do {
                  iVar4 = PackedActionId_getHighBits(uVar3);
                  if (iVar4 == *piVar8) goto LAB_012621cf;
                  iVar9 = iVar9 + 1;
                  piVar8 = &DAT_018cbab0 + iVar9;
                } while ((&DAT_018cbab0)[iVar9] != 0);
                FUN_00d83c2d();
                uVar3 = PlayElement_getId(*puStack_68,0);
                FUN_0125a4e0(local_c,uVar3);
LAB_012621cf:
                FUN_00d83c2d();
              }
              local_14 = CONCAT31(local_14._1_3_,2);
              if (puStack_58 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(puStack_58);
              }
              puStack_58 = (undefined4 *)0x0;
              puStack_54 = (undefined4 *)0x0;
              uStack_50 = 0;
            }
            if (local_24 <= puVar5) {
              FUN_00d83c2d();
            }
            puVar5 = puVar5 + 1;
          } while( true );
        }
        if (puStack_40 <= puVar6) {
          FUN_00d83c2d();
        }
        uVar3 = FUN_01321f20();
        iVar9 = 0;
        piVar8 = &DAT_018cbab0;
        do {
          iVar4 = PackedActionId_getHighBits(uVar3);
          if (iVar4 == *piVar8) goto LAB_01261f87;
          iVar9 = iVar9 + 1;
          piVar8 = &DAT_018cbab0 + iVar9;
        } while ((&DAT_018cbab0)[iVar9] != 0);
        if (puStack_40 <= puVar6) {
          FUN_00d83c2d();
        }
        uVar3 = PlayElement_getId(*puVar6,0);
        FUN_0125a4e0(puStack_8,uVar3);
LAB_01261f87:
        if (puStack_40 <= puVar6) {
          FUN_00d83c2d();
        }
        puVar6 = puVar6 + 1;
      } while( true );
    }
    if (local_30 <= puVar5) {
      FUN_00d83c2d();
    }
    uVar3 = FUN_01321f20();
    iVar9 = 0;
    piVar8 = &DAT_018cbab0;
    do {
      iVar4 = PackedActionId_getHighBits(uVar3);
      if (iVar4 == *piVar8) goto LAB_01261ed5;
      iVar9 = iVar9 + 1;
      piVar8 = &DAT_018cbab0 + iVar9;
    } while ((&DAT_018cbab0)[iVar9] != 0);
    if (local_30 <= puVar5) {
      FUN_00d83c2d();
    }
    uVar3 = PlayElement_getId(*puVar5,1);
    FUN_0125a4e0(puStack_8,uVar3);
LAB_01261ed5:
    if (local_30 <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

