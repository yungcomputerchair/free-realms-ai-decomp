// addr: 0x00fdebc0
// name: CollisionData_sub_00fdebc0
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
CollisionData_sub_00fdebc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* Identifies a CollisionData sub_00fdebc0 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  param_1[1] = param_2;
  *param_1 = AppPhysics::CollisionData::vftable;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}

