// addr: 0x0143a7a0
// name: CollectionView_sub_0143a7a0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CollectionView_sub_0143a7a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a CollectionView sub_0143a7a0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_016978e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = Engine::CollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWCollectionView_dtor(param_1);
  ExceptionList = local_c;
  return;
}

