// addr: 0x010b2cf0
// name: Deep_SkyLightEntity_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Deep_SkyLightEntity_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for Deep::SkyLightEntity: installs vtable, clears shared
                       animation target, and runs base cleanup. */
  puStack_8 = &LAB_01647948;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Deep::SkyLightEntity::vftable;
  local_4 = 0;
  AnimationBinding_setSharedTarget(param_1,(void *)0x0);
  local_4 = 0xffffffff;
  FUN_010b26e0(uVar1);
  ExceptionList = local_c;
  return;
}

