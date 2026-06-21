// addr: 0x012ad020
// name: CollectionPropertyTree_removeIfPresent
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool CollectionPropertyTree_removeIfPresent(void * this, void * collection) */

bool __thiscall CollectionPropertyTree_removeIfPresent(void *this,void *collection)

{
  void *unused1;
  void *unused2;
  void *node;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *extraout_EAX;
  undefined4 uStack_38;
  undefined1 local_34 [3];
  undefined1 uStack_31;
  void *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined1 local_28;
  void *pvStack_24;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If a collection is supplied, obtains its property-list name, searches this
                       tree for that string, and removes/updates the entry when found; returns
                       whether an entry was found. Evidence is Collection_getPropertyList plus
                       lower-bound style tree helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c968;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&uStack_38;
  node = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  uStack_38 = (uint)(uint3)uStack_38;
  if (collection == (void *)0x0) {
    uStack_31 = 0;
  }
  else {
    pbVar1 = Collection_getPropertyList(collection);
    local_14 = 0xf;
    local_18 = 0;
    local_28 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar1,0,0xffffffff);
    local_4 = 0;
    CollectionMap_findByName(this,local_34,local_2c);
    unused1 = (void *)*extraout_EAX;
    local_30 = *(void **)((int)this + 4);
    unused2 = (void *)extraout_EAX[1];
    if ((unused1 == (void *)0x0) || (unused1 != this)) {
      FUN_00d83c2d();
    }
    if (unused2 != local_30) {
      uStack_38 = CONCAT13(1,(uint3)uStack_38);
      CollectionDB_StringTree_eraseNode(this,local_34,unused1,unused2,node);
    }
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
  }
  ExceptionList = puStack_8;
  return (bool)uStack_31;
}

