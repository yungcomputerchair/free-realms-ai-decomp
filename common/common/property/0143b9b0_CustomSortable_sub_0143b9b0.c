// addr: 0x0143b9b0
// name: CustomSortable_sub_0143b9b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CustomSortable_sub_0143b9b0(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a CustomSortable sub_0143b9b0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_01697d53;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::CustomSortable::vftable;
  local_4 = 0;
  FUN_01312690(uVar1);
  local_4 = 0xffffffff;
  Sortable_dtor(param_1);
  ExceptionList = local_c;
  return;
}

