// addr: 0x00fe31b0
// name: RigidBody_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
RigidBody_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a RigidBody ctor routine. Evidence: vftable/call-shape evidence in
                       ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016306a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fdce70(param_3,param_4,param_5,param_6);
  local_4 = 0;
  *param_1 = AppPhysics::RigidBody::vftable;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  iVar1 = 0;
  do {
    param_1[iVar1 + 0x44] = DAT_01b83900;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    param_1[iVar1 + 0x47] = DAT_01b83900;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  *(undefined1 *)(param_1 + 0x54) = param_7;
  *(undefined1 *)((int)param_1 + 0x151) = 0;
  param_1[0x55] = 0;
  param_1[0x40] = 0;
  DAT_01b9a13c = DAT_01b9a13c + 1;
  param_1[0x57] = 0xffffffff;
  param_1[0x56] = DAT_01b9a13c;
  FUN_00fe2e30(param_2);
  ExceptionList = local_c;
  return param_1;
}

