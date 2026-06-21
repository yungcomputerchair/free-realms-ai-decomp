// addr: 0x01362e20
// name: FUN_01362e20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 __thiscall FUN_01362e20(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_2c [4];
  int *piStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167f330;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x3c))(DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  uVar6 = FUN_013f7eb0();
  piStack_18 = (int *)0x0;
  piStack_14 = (int *)0x0;
  uStack_10 = 0;
  uStack_4 = 0;
  cVar3 = FUN_01411880(param_2,uVar5,uVar6,auStack_1c,param_1);
  uVar9 = 0;
  if (cVar3 != '\0') {
    piStack_28 = (int *)0x0;
    piStack_24 = (int *)0x0;
    uStack_20 = 0;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    (**(code **)(*param_1 + 0x144))(auStack_2c);
    piVar10 = piStack_18;
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar1 = piStack_14;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piVar10 == piVar1) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piStack_14 <= piVar10) {
        FUN_00d83c2d();
      }
      bVar4 = Card_containsAttributeId(param_1,*piVar10);
      if (bVar4) {
        if ((char)param_1[0x8b] != '\0') {
          if (piStack_14 <= piVar10) {
            FUN_00d83c2d();
          }
          iVar7 = Card_getPropertyMap();
          if (*(uint *)(iVar7 + 0x18) < 0x10) {
            iVar7 = iVar7 + 4;
          }
          else {
            iVar7 = *(int *)(iVar7 + 4);
          }
          Game_logGeneral(param_1,"Card %s has action is in ingore active status list.",iVar7);
        }
        if (piStack_14 <= piVar10) {
          FUN_00d83c2d();
        }
        FUN_01336520(piVar10);
      }
      else {
        if (piStack_14 <= piVar10) {
          FUN_00d83c2d();
        }
        piVar1 = piStack_24;
        if (piStack_24 < piStack_28) {
          FUN_00d83c2d();
        }
        piVar11 = piStack_28;
        if (piStack_24 < piStack_28) {
          FUN_00d83c2d();
        }
        piVar2 = piStack_24;
        if (piVar11 != piVar1) {
          do {
            if (*piVar11 == *piVar10) break;
            piVar11 = piVar11 + 1;
          } while (piVar11 != piVar1);
        }
        if (piStack_24 < piStack_28) {
          FUN_00d83c2d();
        }
        if (&stack0x00000000 == &DAT_0000002c) {
          FUN_00d83c2d();
        }
        if (piVar11 != piVar2) {
          if ((char)param_1[0x8b] != '\0') {
            if (&stack0x00000000 == &DAT_0000002c) {
              FUN_00d83c2d();
            }
            if (piStack_24 <= piVar11) {
              FUN_00d83c2d();
            }
            iVar7 = Card_getPropertyMap();
            if (*(uint *)(iVar7 + 0x18) < 0x10) {
              iVar7 = iVar7 + 4;
            }
            else {
              iVar7 = *(int *)(iVar7 + 4);
            }
            Game_logGeneral(param_1,"Card %s has action and is active",iVar7);
          }
          if (piStack_14 <= piVar10) {
            FUN_00d83c2d();
          }
          FUN_01336520(piVar10);
        }
      }
      if (piStack_14 <= piVar10) {
        FUN_00d83c2d();
      }
      piVar10 = piVar10 + 3;
    }
    if ((*(int *)(param_3 + 4) == 0) ||
       (iVar8 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4), iVar7 = iVar8 >> 0x1f,
       iVar8 / 0xc + iVar7 == iVar7)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    uStack_4 = uStack_4 & 0xffffff00;
    if (piStack_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_28);
    }
    piStack_28 = (int *)0x0;
    piStack_24 = (int *)0x0;
    uStack_20 = 0;
  }
  uStack_4 = 0xffffffff;
  if (piStack_18 == (int *)0x0) {
    ExceptionList = local_c;
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_18);
}

