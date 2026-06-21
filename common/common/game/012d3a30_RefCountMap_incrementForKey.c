// addr: 0x012d3a30
// name: RefCountMap_incrementForKey
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RefCountMap_incrementForKey(void * owner, int key) */

void __fastcall RefCountMap_incrementForKey(void *owner,int key)

{
  void *this;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *piVar4;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Finds an int key in a map at owner+0xb0; inserts a new count initialized to 1
                       when absent, otherwise increments the existing count. */
  this = (void *)((int)owner + 0xb0);
  StdRbTreeInt_find(this,local_8,&stack0x00000004,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)owner + 0xb4);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != this)) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar3) {
    piVar4 = IntDefaultMap_getOrInsert(this,(int *)&stack0x00000004);
    *piVar4 = 1;
    return;
  }
  if (pvVar1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)((int)pvVar1 + 4)) {
    FUN_00d83c2d();
  }
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return;
}

