// addr: 0x01516200
// name: FRTWDeckCollectionView_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FRTWDeckCollectionView_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a FRTWDeckCollectionView ctor routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_CollectionViewBase_ctor(param_1);
  *param_1 = Engine::FRTWDeckCollectionView::vftable;
  ExceptionList = local_c;
  return param_1;
}

