// addr: 0x01515bf0
// name: FRTWCollectionView_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FRTWCollectionView_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a FRTWCollectionView ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b73d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_CollectionViewBase_ctor(param_1);
  *param_1 = Engine::FRTWCollectionView::vftable;
  ExceptionList = local_c;
  return param_1;
}

