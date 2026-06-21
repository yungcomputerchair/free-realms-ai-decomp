// addr: 0x014290f0
// name: RefCountRegistry_getValueForKey
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RefCountRegistry_getValueForKey(void * registry, int key_) */

int RefCountRegistry_getValueForKey(void *registry,int key_)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *extraout_EAX;
  int *piVar4;
  int *unaff_EDI;
  undefined1 *tree;
  undefined1 local_8 [8];
  
                    /* Looks up a key in a registry-selected int map and returns its stored value,
                       or zero if the key is not present. */
  iVar2 = FUN_01428e20(&registry);
  piVar4 = &key_;
  iVar1 = *(int *)(iVar2 + 4);
  tree = local_8;
  pvVar3 = (void *)FUN_01428e20(&registry);
  StdRbTreeInt_find(pvVar3,tree,piVar4,unaff_EDI);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar2)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar1) {
    return 0;
  }
  piVar4 = &key_;
  pvVar3 = (void *)FUN_01428e20(&registry);
  piVar4 = IntDefaultMap_getOrInsert(pvVar3,piVar4);
  return *piVar4;
}

