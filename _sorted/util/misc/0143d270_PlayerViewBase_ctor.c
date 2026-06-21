// addr: 0x0143d270
// name: PlayerViewBase_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall PlayerViewBase_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a PlayerViewBase ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016980d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_SortableView_ctor(param_1);
  *param_1 = Engine::PlayerViewBase::vftable;
  ExceptionList = local_c;
  return param_1;
}

