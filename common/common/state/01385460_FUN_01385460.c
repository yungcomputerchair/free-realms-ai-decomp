// addr: 0x01385460
// name: FUN_01385460
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01385460(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  puStack_8 = &LAB_01682fb2;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *param_1 = EvaluationEnvironment::vftable;
  local_4 = 6;
  uVar1 = param_1[0x21];
  if (uVar1 < (uint)param_1[0x20]) {
    FUN_00d83c2d(uVar3);
  }
  uVar2 = param_1[0x20];
  if ((uint)param_1[0x21] < uVar2) {
    FUN_00d83c2d(uVar3);
  }
  FUN_01383cf0(local_14,param_1 + 0x1f,uVar2,param_1 + 0x1f,uVar1);
  local_4._0_1_ = 5;
  FUN_013845d0();
  local_4._0_1_ = 4;
  FUN_01300cd0();
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((void *)param_1[0x14] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((void *)param_1[0x10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = PersistentComponent::vftable;
  *param_1 = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

