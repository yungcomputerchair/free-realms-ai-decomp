// addr: 0x01489ff0
// name: TargetQueryNode_findValidPlayerCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TargetQueryNode_findValidPlayerCards(void * query, void * outCards, void
   * trace) */

bool TargetQueryNode_findValidPlayerCards(void *query,void *outCards,void *trace)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_2c;
  int *local_28;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects valid player-card objects, logs each matched player id, and appends
                       matched cards to the output vector. Trace strings are 'Finding valid
                       playercards.' and 'Matched player %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef
            (trace,"Finding valid playercards.",DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  pvVar4 = EvaluationEnvironment_getGame(trace);
  pvVar4 = Game_getZoneCollection(pvVar4);
  piVar7 = *(int **)((int)pvVar4 + 8);
  local_28 = piVar7;
  if (piVar7 < *(undefined4 **)((int)pvVar4 + 4)) {
    FUN_00d83c2d();
  }
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  puVar6 = *(undefined4 **)((int)pvVar4 + 4);
  if (*(undefined4 **)((int)pvVar4 + 8) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar6 == piVar7) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)pvVar4 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    local_2c = unknown_getField30((void *)*puVar6);
    piVar7 = local_14;
    if ((local_18 == (int *)0x0) ||
       ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)local_14 - (int)local_18 >> 2))) {
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      FUN_012619f0(local_24,local_1c,piVar7,&local_2c);
    }
    else {
      *local_14 = local_2c;
      local_14 = local_14 + 1;
    }
    if (*(undefined4 **)((int)pvVar4 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
    piVar7 = local_28;
  }
  local_28 = local_14;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  piVar7 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piVar7 == local_28) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= piVar7) {
      FUN_00d83c2d();
    }
    uVar5 = (**(code **)(*(int *)*piVar7 + 0x28))();
    EvaluationEnvironment_tracef(trace,"Matched player %d",uVar5);
    if (local_14 <= piVar7) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)outCards + 4);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)outCards + 0xc) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)outCards + 8) - uVar1) >> 2))) {
      uVar3 = *(uint *)((int)outCards + 8);
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      FUN_012619f0(local_24,outCards,uVar3,piVar7);
    }
    else {
      piVar2 = *(int **)((int)outCards + 8);
      *piVar2 = *piVar7;
      *(int **)((int)outCards + 8) = piVar2 + 1;
    }
    if (local_14 <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  }
  local_4 = 0xffffffff;
  if (local_18 == (int *)0x0) {
    ExceptionList = local_c;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

