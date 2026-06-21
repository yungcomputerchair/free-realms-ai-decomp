// addr: 0x0043561e
// name: FUN_0043561e
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_0043561e(undefined4 *param_1,int *param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Constructor-like routine that installs two vtable pointers, stores a
                       referenced object and flags, copies a 16-bit field, and initializes
                       render/state data when the referenced object is present. Class identity is
                       unclear from the available context. */
  FUN_0041b670();
  *param_1 = &PTR_FUN_0175ee28;
  param_1[1] = &PTR_LAB_0175ee20;
  param_1[0x11] = 0;
  param_1[0x12] = &DAT_01bc7e28;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 0x10))(0);
  }
  param_1[0x11] = param_2;
  param_1[4] = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)((int)param_1 + 0x16) = *param_4;
  if (param_1[0x11] != 0) {
    local_18 = 0x8800;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    FUN_00407308(&local_18);
    local_18 = 0x8800;
    local_10 = 0;
    local_14 = 0;
    FUN_00430716(&local_18,0,0);
  }
  return param_1;
}

