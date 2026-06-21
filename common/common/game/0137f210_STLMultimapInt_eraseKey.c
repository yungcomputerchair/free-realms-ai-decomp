// addr: 0x0137f210
// name: STLMultimapInt_eraseKey
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint STLMultimapInt_eraseKey(void * map, int key_) */

uint __thiscall STLMultimapInt_eraseKey(void *this,void *map,int key_)

{
  int *unaff_EDI;
  void *local_10;
  void *local_c;
  void *local_8;
  void *local_4;
  
                    /* Erases all entries matching an int key from a multimap-like tree and returns
                       the number accumulated by the range-count helper. */
  STLMap_int_equalRange(this,&local_10,map,unaff_EDI);
  map = (void *)0x0;
  FUN_0137b8f0(local_10,local_c,local_8,local_4,&map,0);
  StdRbTree_eraseRange(this,&local_10,local_10,local_c,local_8,local_4,unaff_EDI);
  return (uint)map;
}

