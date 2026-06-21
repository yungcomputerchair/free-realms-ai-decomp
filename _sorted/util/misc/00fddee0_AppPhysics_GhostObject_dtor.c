// addr: 0x00fddee0
// name: AppPhysics_GhostObject_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AppPhysics_GhostObject_dtor(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys AppPhysics::GhostObject: releases physics ghost resources, frees
                       allocated objects at offsets 0x40/0x41, calls base cleanup, and restores SEH.
                        */
  puStack_8 = &LAB_0162fe28;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = AppPhysics::GhostObject::vftable;
  local_4 = 0;
  if ((param_1[0x40] != 0) && (param_1[0x41] != 0)) {
    FUN_01163220(param_1[0x41]);
  }
  pvVar1 = (void *)param_1[0x41];
  if (pvVar1 != (void *)0x0) {
    clear_dual_owned_buffers(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x40];
  if (pvVar1 != (void *)0x0) {
    FUN_00fdd960();
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_00fdcb40(uVar2);
  ExceptionList = local_c;
  return;
}

