// addr: 0x012adb30
// name: CollectionDB_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_dtor(void * this) */

void __fastcall CollectionDB_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for the collection database singleton/object. It calls
                       CollectionDB_clear and then the secondary destructor/base cleanup at
                       012adac0. */
  puStack_8 = &LAB_0166ca28;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  CollectionDB_clear(this);
  local_4 = 0xffffffff;
  FUN_012adac0(uVar1);
  ExceptionList = local_c;
  return;
}

