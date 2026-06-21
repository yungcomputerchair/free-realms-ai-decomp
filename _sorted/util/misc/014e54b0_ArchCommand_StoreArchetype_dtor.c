// addr: 0x014e54b0
// name: ArchCommand_StoreArchetype_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ArchCommand_StoreArchetype_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for ArchCommand_StoreArchetype; installs vtable, releases
                       owned archetype object, and runs base cleanup. */
  puStack_8 = &LAB_016afcc8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = ArchCommand_StoreArchetype::vftable;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1,uVar1);
  }
  param_1[2] = 0;
  local_4 = 0xffffffff;
  ArchCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

