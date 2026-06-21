// addr: 0x01435dd0
// name: FUN_01435dd0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01435dd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  void **ppvStack_50;
  void *pvStack_4c;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Coordinates two virtual calls around temporary vectors and clears/deletes
                       collected pointer elements; likely a dispatcher/update helper but exact class
                       is unclear. */
  puStack_8 = &LAB_016970a8;
  local_c = ExceptionList;
  pvStack_4c = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0;
  ppvStack_50 = &local_3c;
  FUN_01435b80(param_3);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  ppvStack_50 = (void **)&local_1c;
  (**(code **)(param_1[1] + 4))(&local_3c);
  local_30 = 0;
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  FUN_013c1bd0(&uStack_24,&local_34);
  (**(code **)(*param_1 + 8))(local_4,param_3,&local_34);
  FUN_01435980(&ppvStack_50);
  local_18 = CONCAT31(local_18._1_3_,1);
  if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_18 = (uint)local_18._1_3_ << 8;
  if (pvStack_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_18 = 0xffffffff;
  if (pvStack_4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c);
  }
  ExceptionList = pvStack_20;
  return;
}

