// addr: 0x00ffdea0
// name: WheeledBtVehicle_sub_00ffdea0
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
WheeledBtVehicle_sub_00ffdea0
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* Identifies a WheeledBtVehicle sub_00ffdea0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  *param_1 = btActionInterface::vftable;
  *param_1 = AppPhysics::WheeledBtVehicle::vftable;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = DAT_01762a34;
  param_1[0x15] = param_4;
  param_1[0x18] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  *(undefined1 *)((int)param_1 + 0xd3) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  param_1[0x40] = uVar1;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x49] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x1b] = param_3;
  param_1[0x1c] = 0;
  param_1[0x1d] = 1;
  param_1[0x1e] = 2;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x44] = 0;
  return;
}

