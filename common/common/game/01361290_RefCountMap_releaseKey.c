// addr: 0x01361290
// name: RefCountMap_releaseKey
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RefCountMap_releaseKey(void * owner, int key) */

void __fastcall RefCountMap_releaseKey(void *owner,int key)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Releases a ref-counted int key by decrementing its count if present and
                       positive, then storing zero for that key. */
  this = (void *)((int)owner + 700);
  StdRbTreeInt_find(this,local_8,&stack0x00000004,unaff_EDI);
  iVar1 = extraout_EAX[1];
  iVar2 = *(int *)((int)owner + 0x2c0);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar2) {
    piVar3 = IntDefaultMap_getOrInsert(this,(int *)&stack0x00000004);
    if (0 < *piVar3) {
      piVar3 = IntDefaultMap_getOrInsert(this,(int *)&stack0x00000004);
      *piVar3 = *piVar3 + -1;
    }
  }
  piVar3 = IntDefaultMap_getOrInsert(this,(int *)&stack0x00000004);
  *piVar3 = 0;
  return;
}

