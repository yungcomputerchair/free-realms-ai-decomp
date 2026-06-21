// addr: 0x013d55b0
// name: CollectionItem_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CollectionItem_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CollectionItem persistent component: installs
                       PersistentBase/PersistentComponent/CollectionItem vtables, zeros scalar
                       fields, and initializes two component members. Evidence is
                       CollectionItem::vftable. */
  puStack_8 = &LAB_0168b836;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  *param_1 = CollectionItem::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  CollectionItem_setInstanceIdFromRaw(param_1 + 4,(void *)0x0);
  local_4 = CONCAT31(local_4._1_3_,2);
  CollectionItem_setInstanceIdFromRaw(param_1 + 8,(void *)0x0);
  ExceptionList = local_c;
  return param_1;
}

