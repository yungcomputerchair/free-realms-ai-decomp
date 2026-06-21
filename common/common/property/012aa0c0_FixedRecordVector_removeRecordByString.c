// addr: 0x012aa0c0
// name: FixedRecordVector_removeRecordByString
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FixedRecordVector_removeRecordByString(void * this, void * name) */

void __thiscall FixedRecordVector_removeRecordByString(void *this,void *name)

{
  void *unused1;
  void *unused2;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *extraout_EAX;
  void *unaff_EDI;
  undefined1 local_10 [4];
  uint local_c;
  undefined1 local_8 [8];
  
                    /* Finds a string-keyed record, inserts/remembers its string in a side vector,
                       releases an object pointer at offset 0x28, clears it, and advances/erases the
                       record. Evidence is the StdStringRange_find and
                       FixedRecordVector_insertRecord calls. */
  DeckMap_findByName(this,local_8,name);
  unused1 = (void *)*extraout_EAX;
  unused2 = (void *)extraout_EAX[1];
  pvVar1 = *(void **)((int)this + 4);
  if ((unused1 == (void *)0x0) || (unused1 != this)) {
    FUN_00d83c2d();
  }
  if (unused2 != pvVar1) {
    uVar2 = *(uint *)((int)this + 0x18);
    pvVar1 = (void *)((int)this + 0x10);
    if (uVar2 < *(uint *)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    uVar3 = *(uint *)((int)this + 0x14);
    if (*(uint *)((int)this + 0x18) < uVar3) {
      FUN_00d83c2d();
    }
    local_c = uVar3;
    local_c = StdStringRange_find(uVar3,uVar2,name);
    uVar2 = *(uint *)((int)this + 0x18);
    if (uVar2 < *(uint *)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_c != uVar2) {
      FixedRecordVector_insertRecord(pvVar1,local_10,pvVar1,local_c,(int)unaff_EDI);
    }
    if (unused1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (unused2 == *(void **)((int)unused1 + 4)) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)unused2 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)unused2 + 0x28))(1);
    }
    if (unused2 == *(void **)((int)unused1 + 4)) {
      FUN_00d83c2d();
    }
    *(undefined4 *)((int)unused2 + 0x28) = 0;
    DeckDB_StringTree_eraseNode(this,local_8,unused1,unused2,unaff_EDI);
  }
  return;
}

