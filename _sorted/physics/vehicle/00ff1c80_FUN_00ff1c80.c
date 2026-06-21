// addr: 0x00ff1c80
// name: FUN_00ff1c80
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ff1c80(int param_1,float *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_20 = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  local_1c = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x188) + 0xb4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  AppPhysics_RigidBody_setWorldTransformAndNotify(*(void **)(param_1 + 0x1c),param_2);
  AppPhysics_ModifiedBtVehicle_resetSuspension(*(void **)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00fe08a0(&local_20);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00fe0990(&local_20);
  }
  return;
}

