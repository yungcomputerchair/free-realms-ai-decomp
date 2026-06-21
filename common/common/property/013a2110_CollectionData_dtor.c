// addr: 0x013a2110
// name: CollectionData_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_dtor(void * this) */

void __fastcall CollectionData_dtor(void *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *this_00;
  void *pvVar4;
  void *local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a CollectionData object: sets its vtable, unregisters/removes
                       property-list state, releases child objects, frees strings, destroys the
                       child tree, and restores base vtables. Evidence is CollectionData::vftable
                       and PersistentRoot/PersistentBase vtable assignments. */
  puStack_8 = &LAB_01685887;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  *(undefined ***)this = CollectionData::vftable;
  local_4 = 5;
  pvVar4 = this;
  CollectionDB_initSingleton();
  CollectionPropertyTree_removeIfPresent(this_00,pvVar4);
  local_10 = *(undefined4 **)((int)this + 0x5c);
  pvVar4 = (void *)((int)this + 0x58);
  local_18 = (undefined4 *)*local_10;
  local_1c = pvVar4;
  while( true ) {
    puVar2 = local_18;
    pvVar1 = local_1c;
    if ((local_1c == (void *)0x0) || (local_1c != pvVar4)) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar2 == local_10) break;
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar2 == *(undefined4 **)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)puVar2[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[4])(1);
    }
    CollectionDataChildIterator_increment((int *)&local_1c);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0xf < *(uint *)((int)this + 0x80)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x6c));
  }
  *(undefined4 *)((int)this + 0x80) = 0xf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  STLTree_destroyStorage(pvVar4);
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  if (0xf < *(uint *)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined ***)this = PersistentRoot::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = puStack_8;
  return;
}

