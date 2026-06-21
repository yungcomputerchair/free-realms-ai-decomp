// addr: 0x01399610
// name: FUN_01399610
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01399610(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *_Src;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_e8 [4];
  int *local_e4;
  int *local_e0;
  int local_dc;
  int *local_d8;
  int *local_d4;
  undefined4 *local_d0;
  undefined4 *local_cc;
  int local_c8;
  int *local_c4;
  undefined4 *local_bc;
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [156];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Small helper/dispatcher using calls: FUN_01385460;
                       PlayArea_findPlayerElementById; FUN_01418e20; FUN_01335180; 00d82463;
                       FUN_01393f90. No class-identifying evidence is present. */
  puStack_10 = &LAB_01684b46;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_e4 = (int *)0x0;
  local_e0 = (int *)0x0;
  local_dc = 0;
  local_c = 0;
  local_bc = (undefined4 *)param_1[0x31];
  local_d4 = param_1 + 0x30;
  local_d0 = (undefined4 *)*local_bc;
  local_d8 = param_1;
  while( true ) {
    puVar3 = local_d0;
    piVar9 = local_d4;
    piVar8 = local_d8;
    if ((local_d4 == (int *)0x0) || (local_d4 != local_d8 + 0x30)) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_bc) break;
    if (piVar9 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == (undefined4 *)piVar9[1]) {
      FUN_00d83c2d();
    }
    local_c4 = (int *)puVar3[6];
    puVar1 = puVar3 + 4;
    local_cc = puVar1;
    if (local_c4 < (int *)puVar3[5]) {
      FUN_00d83c2d();
    }
    if (puVar3 == (undefined4 *)piVar9[1]) {
      FUN_00d83c2d();
    }
    piVar8 = (int *)puVar3[5];
    if ((int *)puVar3[6] < piVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if ((puVar1 == (undefined4 *)0x0) || (puVar1 != local_cc)) {
        FUN_00d83c2d();
      }
      if (piVar8 == local_c4) break;
      if (puVar1 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if ((int *)puVar3[6] <= piVar8) {
        FUN_00d83c2d();
      }
      iVar6 = *piVar8;
      local_c8 = iVar6;
      AttributeModifier_resetState();
      piVar9 = local_e0;
      if ((local_e4 == (int *)0x0) ||
         ((uint)(local_dc - (int)local_e4 >> 2) <= (uint)((int)local_e0 - (int)local_e4 >> 2))) {
        if (local_e0 < local_e4) {
          FUN_00d83c2d();
        }
        FUN_01335180(local_b8,local_e8,piVar9,&local_c8);
      }
      else {
        *local_e0 = iVar6;
        local_e0 = local_e0 + 1;
      }
      if ((int *)puVar3[6] <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    FUN_0138cca0();
  }
  FUN_01393f90(*(undefined4 *)(piVar8[0x31] + 4));
  *(int *)(piVar8[0x31] + 4) = piVar8[0x31];
  piVar8[0x32] = 0;
  *(int *)piVar8[0x31] = piVar8[0x31];
  *(int *)(piVar8[0x31] + 8) = piVar8[0x31];
  local_d8 = local_e0;
  if (local_e0 < local_e4) {
    FUN_00d83c2d();
  }
  piVar9 = local_e4;
  if (local_e0 < local_e4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == &DAT_000000e8) {
      FUN_00d83c2d();
    }
    _Src = local_e0;
    if (piVar9 == local_d8) break;
    if (&stack0x00000000 == &DAT_000000e8) {
      FUN_00d83c2d();
    }
    if (local_e0 <= piVar9) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar9)(1);
    }
    if (local_e0 <= piVar9) {
      FUN_00d83c2d();
    }
    piVar9 = piVar9 + 1;
  }
  piVar9 = local_e4;
  if ((local_e0 < local_e4) && (FUN_00d83c2d(), piVar9 = local_e4, local_e0 < local_e4)) {
    FUN_00d83c2d();
  }
  piVar4 = local_e0;
  if (piVar9 != _Src) {
    iVar6 = (int)local_e0 - (int)_Src >> 2;
    piVar4 = piVar9 + iVar6;
    if (0 < iVar6) {
      _memmove_s(piVar9,iVar6 * 4,_Src,iVar6 * 4);
    }
  }
  local_e0 = piVar4;
  pvVar7 = *(void **)(piVar8[0x1c] + 4);
  if (*(char *)((int)pvVar7 + 0x15) == '\0') {
    FUN_004ef7fa(*(undefined4 *)((int)pvVar7 + 8));
                    /* WARNING: Subroutine does not return */
    _free(pvVar7);
  }
  *(int *)(piVar8[0x1c] + 4) = piVar8[0x1c];
  piVar8[0x1d] = 0;
  *(int *)piVar8[0x1c] = piVar8[0x1c];
  *(int *)(piVar8[0x1c] + 8) = piVar8[0x1c];
  pvVar7 = *(void **)(piVar8[0x1f] + 4);
  if (*(char *)((int)pvVar7 + 0x19) == '\0') {
    FUN_0138d8c0(*(undefined4 *)((int)pvVar7 + 8));
                    /* WARNING: Subroutine does not return */
    _free(pvVar7);
  }
  *(int *)(piVar8[0x1f] + 4) = piVar8[0x1f];
  piVar8[0x20] = 0;
  *(int *)piVar8[0x1f] = piVar8[0x1f];
  *(int *)(piVar8[0x1f] + 8) = piVar8[0x1f];
  pvVar7 = *(void **)(piVar8[0x22] + 4);
  if (*(char *)((int)pvVar7 + 0x19) == '\0') {
    FUN_0138d8c0(*(undefined4 *)((int)pvVar7 + 8));
                    /* WARNING: Subroutine does not return */
    _free(pvVar7);
  }
  *(int *)(piVar8[0x22] + 4) = piVar8[0x22];
  piVar8[0x23] = 0;
  *(int *)piVar8[0x22] = piVar8[0x22];
  *(int *)(piVar8[0x22] + 8) = piVar8[0x22];
  bVar5 = Game_getPendingFlag_131((void *)piVar8[0xc]);
  if (!bVar5) {
    EvaluationEnvironment_ctor();
    local_c._0_1_ = 1;
    pvVar7 = PlayArea_findPlayerElementById((void *)piVar8[0xc],piVar8[0x10]);
    FUN_013815b0(pvVar7);
    EvaluationEnvironment_setGame(piVar8[0xc]);
    set_play_element_id_field(auStack_b0,piVar8);
    pcVar2 = *(code **)(*piVar8 + 0x16c);
    *(undefined1 *)(piVar8 + 0x27) = 1;
    (*pcVar2)(auStack_b0);
    *(undefined1 *)(piVar8 + 0x27) = 0;
    local_c = (uint)local_c._1_3_ << 8;
    FUN_01385460();
  }
  local_c = 0xffffffff;
  if (local_e4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_e4);
  }
  ExceptionList = local_14;
  return;
}

