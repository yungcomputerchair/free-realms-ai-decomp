// addr: 0x013611a0
// name: RefCountMap_getCountForKey
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RefCountMap_getCountForKey(void * owner, int key) */

int __fastcall RefCountMap_getCountForKey(void *owner,int key)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up an int key in the map at owner+0x2bc/0x2c0 and returns its stored
                       count, or zero if the key is absent. */
  this = (void *)((int)owner + 700);
  StdRbTreeInt_find(this,local_8,&stack0x00000004,unaff_EDI);
  iVar1 = extraout_EAX[1];
  iVar2 = *(int *)((int)owner + 0x2c0);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar2) {
    piVar3 = IntDefaultMap_getOrInsert(this,(int *)&stack0x00000004);
    return *piVar3;
  }
  return 0;
}

