// addr: 0x014394e0
// name: Engine_CollectionMapper_copyDefaultPropertyList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_CollectionMapper_copyDefaultPropertyList(void * this) */

void __fastcall Engine_CollectionMapper_copyDefaultPropertyList(void *this)

{
  void *this_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes/copies the default collection property list string into this
                       object, or assigns an empty string when no default collection exists.
                       Evidence is CollectionDB_resolveDefaultCollection and
                       Collection_getPropertyList. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CollectionDB_initSingleton();
  CollectionDB_resolveDefaultCollection();
  if (this_00 != (void *)0x0) {
    pbVar1 = Collection_getPropertyList(this_00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc),
               pbVar1,0,0xffffffff);
    ExceptionList = local_c;
    return;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc),
             local_28,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}

