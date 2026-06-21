// addr: 0x013f5c50
// name: StateMachine_init
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall StateMachine_init(undefined4 *param_1)

{
  rsize_t rVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *local_18 [2];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor/initializer for StateMachine; sets StateMachine vftable and
                       initializes transition/state collections. */
  puStack_8 = &LAB_0168f5d4;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  *param_1 = StateMachine::vftable;
  local_4 = 0x11;
  local_10 = param_1;
  FUN_013f3910(uVar4);
  param_1[1] = 0;
  local_18[0] = (int *)param_1[4];
  if (local_18[0] < (int *)param_1[3]) {
    FUN_00d83c2d();
  }
  piVar6 = (int *)param_1[3];
  if ((int *)param_1[4] < piVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (undefined4 *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (piVar6 == local_18[0]) break;
    if (param_1 == (undefined4 *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if ((int *)param_1[4] <= piVar6) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar6)(1);
    }
    if ((int *)param_1[4] <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  pvVar2 = (void *)param_1[4];
  if (pvVar2 < (void *)param_1[3]) {
    FUN_00d83c2d();
  }
  pvVar3 = (void *)param_1[3];
  if ((void *)param_1[4] < pvVar3) {
    FUN_00d83c2d();
  }
  if (pvVar3 != pvVar2) {
    iVar5 = param_1[4] - (int)pvVar2 >> 2;
    rVar1 = iVar5 * 4;
    local_18[0] = (int *)((int)pvVar3 + rVar1);
    if (0 < iVar5) {
      _memmove_s(pvVar3,rVar1,pvVar2,rVar1);
    }
    param_1[4] = local_18[0];
  }
  param_1[6] = 0;
  piVar6 = (int *)param_1[0xe];
  if (piVar6 < (int *)param_1[0xd]) {
    FUN_00d83c2d();
  }
  local_18[0] = (int *)param_1[0xd];
  piVar7 = local_18[0];
  if ((int *)param_1[0xe] < local_18[0]) {
    FUN_00d83c2d();
    piVar7 = local_18[0];
  }
  while( true ) {
    if (param_1 == (undefined4 *)0xffffffd0) {
      FUN_00d83c2d();
    }
    if (piVar7 == piVar6) break;
    if (param_1 == (undefined4 *)0xffffffd0) {
      FUN_00d83c2d();
    }
    if ((int *)param_1[0xe] <= piVar7) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    if ((int *)param_1[0xe] <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  }
  pvVar2 = (void *)param_1[0xe];
  if (pvVar2 < (void *)param_1[0xd]) {
    FUN_00d83c2d();
  }
  pvVar3 = (void *)param_1[0xd];
  if ((void *)param_1[0xe] < pvVar3) {
    FUN_00d83c2d();
  }
  if (pvVar3 != pvVar2) {
    iVar5 = param_1[0xe] - (int)pvVar2 >> 2;
    rVar1 = iVar5 * 4;
    local_18[0] = (int *)((int)pvVar3 + rVar1);
    if (0 < iVar5) {
      _memmove_s(pvVar3,rVar1,pvVar2,rVar1);
    }
    param_1[0xe] = local_18[0];
  }
  param_1[7] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  if (0xf < (uint)param_1[0x6e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x69]);
  }
  param_1[0x6e] = 0xf;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xf);
  if (0xf < (uint)param_1[0x67]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x62]);
  }
  param_1[0x67] = 0xf;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  local_4._0_1_ = 0xe;
  MessageText_dtor();
  local_4._0_1_ = 0xd;
  MessageText_dtor();
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (0xf < (uint)param_1[0x52]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4d]);
  }
  param_1[0x52] = 0xf;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (0xf < (uint)param_1[0x4b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x46]);
  }
  param_1[0x4b] = 0xf;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  local_18[0] = param_1 + 0x42;
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_013f5330(local_18,local_18[0],*(undefined4 *)param_1[0x43],local_18[0],
               (undefined4 *)param_1[0x43]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x43]);
}

