// addr: 0x00fe3000
// name: RigidBody_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
RigidBody_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Identifies a RigidBody ctor routine. Evidence: vftable/call-shape evidence in
                       ctx. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01630678;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00fdce70(param_2,param_3,param_4,param_5);
  *param_1 = AppPhysics::RigidBody::vftable;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  iVar2 = 0;
  do {
    param_1[iVar2 + 0x44] = DAT_01b83900;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 0;
  do {
    param_1[iVar2 + 0x47] = DAT_01b83900;
    uVar1 = _DAT_0175b420;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  DAT_01b9a13c = DAT_01b9a13c + 1;
  param_1[0x56] = DAT_01b9a13c;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((int)param_1 + 0x151) = 0;
  param_1[0x55] = 0;
  param_1[0x40] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = uVar1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x57] = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x49] = 0;
  ExceptionList = local_1c;
  return param_1;
}

