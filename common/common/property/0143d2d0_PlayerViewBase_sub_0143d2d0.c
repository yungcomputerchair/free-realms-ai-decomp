// addr: 0x0143d2d0
// name: PlayerViewBase_sub_0143d2d0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall PlayerViewBase_sub_0143d2d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a PlayerViewBase sub_0143d2d0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_01698108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = Engine::PlayerViewBase::vftable;
  local_4 = 0xffffffff;
  Engine_SortableView_dtor(param_1);
  ExceptionList = local_c;
  return;
}

