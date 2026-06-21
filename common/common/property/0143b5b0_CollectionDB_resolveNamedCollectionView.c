// addr: 0x0143b5b0
// name: CollectionDB_resolveNamedCollectionView
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_resolveNamedCollectionView(void * name, void * out, void *
   filter, void * view) */

void __cdecl CollectionDB_resolveNamedCollectionView(void *name,void *out,void *filter,void *view)

{
  char cVar1;
  char *pcVar2;
  void *this;
  void *container;
  char *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *collectionName;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies a collection name string, fetches that collection from CollectionDB,
                       and forwards the resulting collection with the caller's parameters to the
                       collection-view helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(uint *)((int)name + 0x18) < 0x10) {
    pcVar3 = (char *)((int)name + 4);
  }
  else {
    pcVar3 = *(char **)((int)name + 4);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  local_4 = 0;
  collectionName = local_28;
  CollectionDB_initSingleton();
  container = CollectionDB_getCollection(this,collectionName);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  Engine_ArchetypeValidator_visitValidChildren(container,out,filter,view);
  ExceptionList = local_c;
  return;
}

