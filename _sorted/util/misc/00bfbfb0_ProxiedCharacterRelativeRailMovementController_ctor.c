// addr: 0x00bfbfb0
// name: ProxiedCharacterRelativeRailMovementController_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ProxiedCharacterRelativeRailMovementController_ctor
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  void *this;
  uint key_;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProxiedCharacterRelativeRailMovementController, storing
                       rail/relative targets, start transform, duration/mode fields, and optional
                       cached resources when referenced rails are valid. */
  puStack_8 = &LAB_015f2ca8;
  local_c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = ProxiedCharacterMovementController::vftable;
  param_1[1] = param_2;
  local_4 = 0;
  param_1[4] = param_7;
  param_1[2] = param_3;
  param_1[3] = param_5;
  *param_1 = ProxiedCharacterRelativeRailMovementController::vftable;
  param_1[8] = *param_8;
  param_1[9] = param_8[1];
  param_1[10] = param_8[2];
  uVar3 = param_8[3];
  param_1[0xe] = param_4;
  param_1[0xb] = uVar3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = param_6;
  this = *(void **)(*(int *)(param_1[1] + 0x738) + 0x224);
  iVar1 = lookup_hash64_bucket_node(this,param_3,key_);
  if (((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x18))) && (*(char *)(iVar1 + 8) == '\0')) {
    iVar2 = lookup_hash64_bucket_node(this,param_1[3],key_);
    if (((iVar2 != 0) && (0 < *(int *)(iVar1 + 0x18))) && (*(char *)(iVar2 + 8) != '\0')) {
      uVar3 = FUN_010718e0();
      param_1[0xc] = uVar3;
      uVar3 = FUN_010718e0();
      param_1[0xd] = uVar3;
      FUN_00bfbe10(0);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

