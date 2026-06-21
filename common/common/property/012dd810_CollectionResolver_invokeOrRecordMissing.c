// addr: 0x012dd810
// name: CollectionResolver_invokeOrRecordMissing
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CollectionResolver_invokeOrRecordMissing(void * this, void * arg1, void *
   arg2, int collectionId) */

uint __thiscall
CollectionResolver_invokeOrRecordMissing(void *this,void *arg1,void *arg2,int collectionId)

{
  int *piVar1;
  void *this_00;
  void *pvVar2;
  uint uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  void *pvStack_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Fetches a CollectionDB collection by id and invokes this object's virtual
                       callback when found; otherwise logs/records 'Could not find Collection.' and
                       marks an error slot. Evidence is CollectionDB_getCollection and the literal
                       error string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671498;
  local_c = ExceptionList;
  piVar1 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  CollectionDB_initSingleton();
  pvVar2 = CollectionDB_getCollection(this_00,(void *)collectionId);
  if (pvVar2 != (void *)0x0) {
    uVar3 = (**(code **)(*(int *)this + 4))(arg1,arg2,pvVar2);
    ExceptionList = pvStack_18;
    return uVar3;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"Could not find Collection.",0x1a);
  pvVar2 = arg2;
  local_4 = 0;
  PropertyTree21_getOrCreateVectorForId(arg2,local_28,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  arg2 = (void *)0x1;
  piVar1 = PropertyIntMap_findOrCreateSlot((void *)((int)pvVar2 + 0x30),&arg2,piVar1);
  *piVar1 = 1;
  ExceptionList = local_c;
  return (uint)piVar1 & 0xffffff00;
}

