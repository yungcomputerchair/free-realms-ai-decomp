// addr: 0x00bfbca0
// name: ProxiedCharacterRailMovementController_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ProxiedCharacterRailMovementController_ctor
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5
          )

{
  uint key_;
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProxiedCharacterRailMovementController from the base movement
                       controller, storing rail/start transform/duration and optionally resolving a
                       rail resource to initialize cached movement state. */
  puStack_8 = &LAB_015f2c48;
  local_c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = ProxiedCharacterMovementController::vftable;
  param_1[1] = param_2;
  local_4 = 0;
  *param_1 = ProxiedCharacterRailMovementController::vftable;
  param_1[2] = param_3;
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[6] = param_5[2];
  param_1[7] = param_5[3];
  param_1[8] = param_4;
  param_1[9] = 0;
  iVar1 = lookup_hash64_bucket_node(*(void **)(*(int *)(param_1[1] + 0x738) + 0x224),param_3,key_);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x18))) {
    uVar2 = FUN_010718e0();
    param_1[9] = uVar2;
    FUN_00bfbaa0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

